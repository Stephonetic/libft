/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 04:03:00 by shannema          #+#    #+#             */
/*   Updated: 2026/01/12 22:02:12 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// ft_itoa — turns an integer into a string 
// Takes an int 'n' and returns an allocated string representing it.
// Handles negatives, zero, and positive numbers.
// Think of it as itoa = “integer to ASCII”
// Don’t forget to free the result later — malloc never forgets :D

//Three functions need to be implemented:
//1) a helper function is needed to calculate string length (sount_len)
//2) a helper to populate the string (fill_str)
//3) and itoa the main function

//1) calculating exact length (number of characters)
// - excluding null terminator ('\0') (like spces for digits and '-' sign if negative)

//. Helper Function: count_len(int n)
// Purpose: Calculates the exact length (number of characters) needed for the string representation of n, excluding the null terminator ('\0'). This includes space for digits and a '-' sign if negative.
// Step-by-Step Logic:
// Initialize len = (n <= 0);: This sets len to 1 if n is 0 or negative (accounting for '0' or '-'). For positive n > 0, len starts at 0.
// Enter a while loop: while (n) (runs as long as n is non-zero).
// Increment len by 1 for each digit.
// Divide n by 10 to "remove" the last digit.
// Return len.

// Examples:
// n = 0: len = 1 (from n <= 0), loop doesn't run.
//--> Total length: 1 (for '0').

// n = 123 (positive): len = 0, loop runs 3 times (len becomes 1, 2, 3).
// --> Total length: 3.

// n = -123 (negative): len = 1 (from n <= 0), loop runs 3 times (len becomes 2, 3, 4).
//--> Total length: 4 (for '-', '1', '2', '3').

static int	count_len(int n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}
// 2. Helper Function: fill_str(char *str, int n, int len)
// Purpose: Fills the allocated string str with the digits of n, adds the sign if negative, and null-terminates it. It builds the string from the end (right-to-left) for simplicity.
// Step-by-Step Logic:
// Set the null terminator: str[len] = '\0'; (places '\0' at the end of the string).
// Handle the special case for zero: if (n == 0) str[0] = '0'; (directly sets the first character to '0' and skips further processing).
// If n < 0 (negative):
// Set the sign: str[0] = '-'; (first character is '-').
// Enter a while loop: while (--len > 0) (decrements len and continues while len > 0).
// Calculate the digit: str[len] = '0' - (n % 10); (since n % 10 is negative for negatives, subtracting it from '0' gives the correct digit, e.g., '0' - (-3) = '3').
// Divide n by 10 to move to the next digit.
// This loop fills digits from the end, skipping index 0 (the '-').
// Else (if n > 0, positive):
// Enter a while loop: while (--len >= 0) (decrements len and continues while len >= 0).
// Calculate the digit: str[len] = '0' + (n % 10); (adds the digit value to '0' to get the ASCII character).
// Divide n by 10 to move to the next digit.
// This loop fills digits from the end, including index 0.
// Return str (the filled string).
// Examples:
// n = 0, len = 1: str[1] = '\0', str[0] = '0'. Result: "0".
// n = 123, len = 3: str[3] = '\0'. Loop: len=2, str[2]='0'+3='3', n=12; len=1, str[1]='0'+2='2', n=1; len=0, str[0]='0'+1='1', n=0. Result: "123".
// n = -123, len = 4: str[4] = '\0', str[0] = '-'. Loop: len=3, str[3]='0'-(-3)='3', n=-12; len=2, str[2]='0'-(-2)='2', n=-1; len=1, str[1]='0'-(-1)='1', n=0. Result: "-123".

static char	*fill_str(char *str, int n, int len)
{
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		while (--len > 0)
		{
			str[len] = '0' - (n % 10);
			n /= 10;
		}
	}
	else
	{
		while (--len >= 0)
		{
			str[len] = '0' + (n % 10);
			n /= 10;
		}
	}
	return (str);
}
//3. Main Function: ft_itoa(int n)
// Purpose: The entry point that orchestrates the conversion. It calculates the length, allocates memory, and fills the string.
// Step-by-Step Logic:
// Call len = count_len(n); to get the required string length.
// Allocate memory: str = malloc(len + 1); (adds 1 for the null terminator, though count_len already accounts for it indirectly via the sign/digit count).
// Check for allocation failure: if (!str) return (NULL); (returns NULL if malloc fails).
// Call return (fill_str(str, n, len)); (passes the allocated string to fill_str and returns the result).
// Overall Flow:
// For any n, it computes the exact memory needed, allocates it, populates it, and returns the string (or NULL on error).
// Memory is allocated once and filled in place—no extra buffers or reversals.

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = count_len(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	return (fill_str(str, n, len));
}
// Example usage
// Compile with: cc ft_itoa.c -o test && ./test
// Converts different ints into strings and prints them out :D
// int	main(void)
// {
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(42));
// 	printf("%s\n", ft_itoa(-42));
// 	printf("%s\n", ft_itoa(2147483647));
// 	printf("%s\n", ft_itoa(-2147483648));
// 	return (0);
// }