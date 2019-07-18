/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmotati <jmotati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:53:54 by jmotati           #+#    #+#             */
/*   Updated: 2019/07/16 14:13:17 by jmotati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int pos;
	unsigned int i;

	if (to_find[0] == '\0')
		return (str);
	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] == to_find[0])
		{
			i = 1;
			while (to_find[i] != '\0' && str[pos + i] == to_find[i])
				++i;
			if (to_find[i] == '\0')
				return (&str[pos]);
		}
		++pos;
	}
	return (0);
}
