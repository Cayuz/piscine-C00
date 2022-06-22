/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_reverse_alphabet.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 15:14:40 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/06/13 19:42:23 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar (letter);
			letter--;
	}
}
