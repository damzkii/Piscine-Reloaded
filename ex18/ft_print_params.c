/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahermawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:16:33 by ahermawa          #+#    #+#             */
/*   Updated: 2021/10/29 12:20:24 by ahermawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int	main(int argc, char **argv)
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
	return (0);
}
