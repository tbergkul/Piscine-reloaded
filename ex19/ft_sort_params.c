/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 11:38:54 by tbergkul          #+#    #+#             */
/*   Updated: 2019/10/15 12:22:03 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_print_params(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int		x;
	int		y;
	char	*temp;

	x = 1;
	while (x < argc)
	{
		y = 0;
		while (y < argc - 1)
		{
			if (ft_strcmp(argv[y], argv[y + 1]) > 0)
			{
				temp = argv[y];
				argv[y] = argv[y + 1];
				argv[y + 1] = temp;
			}
			y++;
		}
		x++;
	}
	ft_print_params(argc, argv);
	return (0);
}
