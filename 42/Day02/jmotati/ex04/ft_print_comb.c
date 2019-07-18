/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmotati <jmotati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 08:28:19 by jmotati           #+#    #+#             */
/*   Updated: 2019/07/11 14:25:55 by jmotati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int arr[3];

	arr[0] = '0';
	while (arr[0] <= '9')
	{
		arr[1] = arr[0] + 1;
		while (arr[1] <= '9')
		{
			arr[2] = arr[1] + 1;
			while (arr[2] <= '9')
			{
				ft_putchar(arr[0]);
				ft_putchar(arr[1]);
				ft_putchar(arr[2]);
				if (!(arr[0] == '7' && arr[1] == '8' && arr[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				arr[2]++;
			}
			arr[1]++;
		}
		arr[0]++;
	}
}
