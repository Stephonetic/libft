/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 22:40:01 by shannema          #+#    #+#             */
/*   Updated: 2026/01/13 22:59:02 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	unsigned int	num;

	if (n < 0)
	{
		write(fd, "-", 1);
		num = (unsigned int)(-n);
	}
	else
		num = (unsigned int)n;
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	c = '0' + (num % 10);
	write(fd, &c, 1);
}

//functioning example code as a comparison
// void	ft_putnbr_fd(int n, int fd)
// {
// 	char	c;

// 	if (n == -2147483648)
// 	{
// 		write(fd, "-", 1);
// 		write(fd, "2", 1);
// 		n = 147483648;
// 	}
// 	else if (n < 0)
// 	{
// 		write(fd, "-", 1);
// 		n = -n;
// 	}
// 	if (n == 0)
// 	{
// 		write(fd, "0", 1);
// 		return ;
// 	}
// 	if (n >= 10)
// 		ft_putnbr_fd(n / 10, fd);
// 	c = (n % 10) + '0';
// 	write(fd, &c, 1);
// }

// #include "libft.h"

// int main(void)
// {
//     ft_putnbr_fd(42, 1);
//     write(1, "\n", 1);
//     ft_putnbr_fd(-1337, 1);
//     write(1, "\n", 1);
//     ft_putnbr_fd(0, 1);
//     write(1, "\n", 1);
//     return 0;
// }

//code that caused a stack overflow
// #include "libft.h"

// void	ft_putnbr_fd(int n, int fd)
// {
//     char	c;

//     if (n < 0)
//     {
//         write(fd, "-", 1);
//         ft_putnbr_fd(-n, fd);
//         return ;
//     }
//     if (n >= 10)
//         ft_putnbr_fd(n / 10, fd);
//     c = '0' + (n % 10);
//     write(fd, &c, 1);
// }
