/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 16:15:37 by eestell           #+#    #+#             */
/*   Updated: 2019/09/14 21:00:07 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

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

int		ft_display_file(char *file)
{
	int		display;
	char	buf;

	if (open(file, O_RDONLY) == (-1))
		return (0);
	display = open(file, O_RDONLY);
	while ((read(display, &buf, 1)) != 0)
		write(1, &buf, 1);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc <= 1)
	{
		write(1, "File name missing.", 18);
		write(1, "\n", 1);
		return (0);
	}
	if (argc == 2)
	{
		ft_display_file(argv[1]);
		return (0);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.", 19);
		write(1, "\n", 1);
	}
	else
		return (0);
}
