/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npawlak <npawlak@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:45:30 by npawlak           #+#    #+#             */
/*   Updated: 2026/02/02 18:48:52 by npawlak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("test pour simple char :%c et un deuxieme :%c \n", 'X', 'u');
	ft_printf("test pour str %s tchic\n", "ceci est ma phrase");
	ft_printf("test pour char : %c ,pour str: %s\n", 'X', "youpi cela marche");
	ft_printf("test %d %i %d \n", 42, -42, -2147483648);
	ft_printf("test unsigned : %u %u %u \n", -2, 4294967254, 0);
	ft_printf("test hex : %x %X %x %X \n", -1200, -42, -10, -1);
	ft_printf("test percent : %% %% %% \n");
	printf("%s", NULL);
	return (0);
}
