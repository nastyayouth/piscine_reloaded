/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:31:18 by eestell           #+#    #+#             */
/*   Updated: 2019/09/12 14:00:29 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	if (nb > 12 || nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
