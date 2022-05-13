/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahermawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:22:13 by ahermawa          #+#    #+#             */
/*   Updated: 2021/11/03 12:23:39 by ahermawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		ft_putchar(str[index]);
		index++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}

void	ft_print_params(int argc, char **argv)
{
	int	string;

	string = 1;
	if (string < argc)
	{
		while (argv[string])
		{
			ft_putstr(argv[string]);
			string++;
			ft_putchar('\n');
		}
	}
}

void	ft_sort_params(int argc, char **argv)
{
	int		first;
	char	*temp;

	first = 1;
	if (argc > 1)
	{
		while (first < argc - 1)
		{
			if (ft_strcmp(argv[first], argv[first + 1]) > 0)
			{
				temp = argv[first];
				argv[first] = argv[first + 1];
				argv[first + 1] = temp;
				first = 0;
			}
			first++;
		}
		ft_print_params(argc, argv);
	}
}

int	main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	return (0);
}
