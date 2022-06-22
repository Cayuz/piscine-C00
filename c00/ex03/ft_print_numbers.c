/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/03 12:37:04 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/06/13 19:42:09 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	x;

	x = 0;
	while (x <= 9)
	{
		ft_putchar(x + '0');
		x++;
	}
}
