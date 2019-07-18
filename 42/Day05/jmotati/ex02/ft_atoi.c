/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmotati <jmotati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 11:04:16 by jmotati           #+#    #+#             */
/*   Updated: 2019/07/15 15:31:01 by jmotati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int sym;
	int i;
	int res;
	int negative;

	sym = 0;
	while (str[sym] != '\0' && (str[sym] == ' ' || str[sym] == '\t' ||
				str[sym] == '\r' || str[sym] == '\n'
					|| str[sym] == '\f' || str[sym] == '\v'))
		sym++;
	i = sym;
	res = 0;
	negative = 0;
	while (str[i] != '\0' && ((str[i] >= '0' && str[i] <= '9') ||
				(i == sym && (str[i] == '-' || str[i] == '+'))))
	{
		if (str[i] == '-')
			negative = 1;
		if (str[i] >= '0' && str[i] <= '9')
			res = (res * 10) + (str[i] - 48);
		++i;
	}
	if (negative)
		res *= -1;
	return (res);
}
