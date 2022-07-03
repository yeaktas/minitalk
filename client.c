/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:30:16 by yaktas            #+#    #+#             */
/*   Updated: 2022/07/03 18:47:41 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(char *str)
{
	int a;

	a = 0;
	while(*str)
	{
		a = a * 10 + (*str - '0');
		str++;
	}
	return (a);
}

void	al_gulum(int pid, char *av)
{
	int i;

	i = 0;
	while (av[i])
	{	
		if (pid == 4444)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i++;
	}	
}

int	main(int ac, char **av)
{
	if (ac > 3)
		write(1, "khardesim kac tane sey yolluyorsun", 34);
	else
		al_gulum(ft_atoi(av[1]), av[2]);
	return (0);
}