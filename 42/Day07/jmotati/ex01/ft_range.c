/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmotati <jmotati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 16:25:58 by jmotati           #+#    #+#             */
/*   Updated: 2019/07/18 10:22:46 by jmotati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;

	if (min >= max)
	{
		ptr = NULL;
		return (ptr);
	}
	if (!(ptr = malloc(sizeof(int) * (max - min))))
	{
		return (NULL);
	}
	while (max >= min)
	{
		ptr[max - min - 1] = max - 1;
		max--;
	}
	return (ptr);
}
