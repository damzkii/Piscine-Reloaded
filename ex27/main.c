/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahermawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:53:58 by ahermawa          #+#    #+#             */
/*   Updated: 2021/11/02 17:43:23 by ahermawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

int	ft_errors(int size)
{
	if (size < 2)
	{
		write (2, "File name missing.\n", 19);
		return (1);
	}
	if (size > 2)
	{
		write (2, "Too many arguments.\n", 20);
		return (1);
	}
	else
		return (size);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	buf;

	if (argc > 2 || argc < 2)
	{
		ft_errors(argc);
	}
	fd = open(argv[1], O_RDONLY | O_CREAT, S_IRUSR);
	if (fd == -1)
	{
		return (1);
	}
	if (argc == 2)
	{
		while (read(fd, &buf, 1))
		{
			write(1, &buf, 1);
		}
	}
	close(fd);
	return (0);
}
