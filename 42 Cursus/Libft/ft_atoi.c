/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mturksoy <mturksoy@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 12:28:20 by mturksoy          #+#    #+#             */
/*   Updated: 2023/01/07 04:03:04 by mturksoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	d;
	int	s;
	int	i;

	d = 1;
	s = 0;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		d = d * -1;
		str++;
	}
	else if (str[i] == '+')
		str++;
	if (str[i] == '-' || str[i] == '+')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		s = (s * 10);
		s = s + (str[i] - '0');
		str++;
	}
	return (s * d);
}
