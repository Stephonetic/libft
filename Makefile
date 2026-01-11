# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/18 15:39:56 by shannema          #+#    #+#              #
#    Updated: 2026/01/11 22:34:32 by shannema         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a

PART1 = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \

# 		ft_split.c \
# 		ft_itoa.c \
# 		ft_itoa.c \
# 		ft_strmapi.c \
# 		ft_striteri.c \
# 		ft_putchar_fd.c \
# 		ft_putstr_fd.c \
# 		ft_putendl_fd.c \
# 		ft_putnbr_fd.c \

# BONUS = ft_lstnew.c \
# 		ft_lstadd_front.c \
# 		ft_lstsize.c \
# 		ft_lstlast.c \
#         ft_lstadd_back.c \
# 		ft_lstdelone.c \
# 		ft_lstclear.c \
# 		ft_lstiter.c \
# 		ft_lstmap.c

SRC = $(PART1) #$(PART2)

OBJECTS       = $(SRC:.c=.o)
BONUS_OBJECTS = $(BONUS:.c=.o)

CC    = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

# bonus: $(OBJECTS) $(BONUS_OBJECTS)
# 	ar rcs $(NAME) $(OBJECTS) $(BONUS_OBJECTS)

clean:
	rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
