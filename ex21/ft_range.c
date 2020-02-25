/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 19:34:15 by eestell           #+#    #+#             */
/*   Updated: 2019/09/12 14:06:09 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int		*ar;
	int		j;

	if (min >= max)
		return (NULL);
	j = 0;
	ar = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		ar[j] = min;
		min++;
		j++;
	}
	return (ar);
}
