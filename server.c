/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 18:08:34 by yaktas            #+#    #+#             */
/*   Updated: 2022/07/03 18:46:01 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_vergulum(int s1)
{
	if (s1 == SIGUSR1)
		write(1, "sig1\n", 5);
	else
		write(1, "sig2\n", 5);
}

int	main(void)
{
	printf("PID: %d\n", getpid());
	signal(SIGUSR1, ft_vergulum);
	signal(SIGUSR2, ft_vergulum);
	while (1);
	return (0);
}