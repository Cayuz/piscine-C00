/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/08 14:31:15 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/06/13 19:40:05 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_xyz(char x, char y, char z)
{
	ft_putchar(x + '0');
	ft_putchar(y + '0');
	ft_putchar(z + '0');
	if (!(x == 7 && y == 8 && z == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = 0;
	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			z = 0;
			while (z <= 9)
			{
				if (x < y && y < z)
				{
					ft_print_xyz(x, y, z);
				}
				z++;
			}
			y++;
		}
		x++;
	}
}
