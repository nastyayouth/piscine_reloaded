/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:28:59 by eestell           #+#    #+#             */
/*   Updated: 2019/09/12 15:08:19 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_print(char *str)
{
	ft_putstr(str);
	ft_putchar('\n');
}

void	ft_print2(int argc, char **str)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_print(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str3;

	i = 1;
	j = 1;
	if (argc == 1)
		return (0);
	while (i < argc)
	{
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) < 1)
			{
				str3 = argv[j];
				argv[j] = argv[i];
				argv[i] = str3;
			}
			j++;
		}
		i++;
		j = 1;
	}
	ft_print2(argc, argv);
	return (0);
}
