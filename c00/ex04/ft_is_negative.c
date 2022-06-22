/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_negative.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 17:42:41 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/06/13 19:40:53 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar('P');
	}
	else if (n <= -1)
	{
		ft_putchar('N');
	}
}
