/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:44:48 by tbergkul          #+#    #+#             */
/*   Updated: 2019/10/15 14:52:30 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	x;
	int	counter;

	x = 0;
	counter = 0;
	while (tab[x])
	{
		if (f(tab[x]) == 1)
			counter++;
		x++;
	}
	return (counter);
}
