/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 10:28:30 by tbergkul          #+#    #+#             */
/*   Updated: 2019/10/15 17:15:31 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	if (nb < 0 || nb > 12)
		return (0);
	nb++;
	while (--nb > 0)
		result *= nb;
	return (result);
}
