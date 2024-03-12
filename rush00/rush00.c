/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymatsui <ymatsui@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:24:48 by ymatsui           #+#    #+#             */
/*   Updated: 2024/03/12 12:31:10 by ymatsui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_top_and_bottom(int x)
{
	if (x > 1 || x < -1)
		ft_putchar('o');
	while (x > 2 || x < -2)
	{
		ft_putchar('-');
		if (x > 0)
			x--;
		else
			x++;
	}
	ft_putchar('o');
	ft_putchar('\n');
}

void	ft_middle(int x)
{
	if (x > 1 || x < -1)
		ft_putchar('|');
	while (x > 2 || x < -2)
	{
		ft_putchar(' ');
		if (x > 0)
			x--;
		else
			x++;
	}
	ft_putchar('|');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x == 0 || y == 0)
		return ;
	else if (y > 1 || y < -1)
		ft_top_and_bottom(x);
	while (y > 2 || y < -2)
	{
		ft_middle(x);
		if (y > 0)
			y--;
		else
			y++;
	}
	ft_top_and_bottom(x);
}
