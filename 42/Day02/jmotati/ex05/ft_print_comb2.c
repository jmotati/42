/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmotati <jmotati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 11:34:07 by jmotati           #+#    #+#             */
/*   Updated: 2019/07/11 14:58:04 by jmotati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int pos1;
	int pos2;

	pos1 = 0;
	while (pos1 <= 98)
	{
		pos2 = pos1 + 1;
		while (pos2 <= 99)
		{
			ft_putchar((pos1 / 10) + 48);
			ft_putchar((pos1 % 10) + 48);
			ft_putchar(' ');
			ft_putchar((pos2 / 10) + 48);
			ft_putchar((pos2 % 10) + 48);
			if (pos1 != 98 || pos2 != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			pos2++;
		}
		pos1++;
	}
}
