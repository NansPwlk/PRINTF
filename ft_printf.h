/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npawlak <npawlak@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:26:35 by npawlak           #+#    #+#             */
/*   Updated: 2026/01/14 15:26:35 by npawlak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h> 
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
void	ft_putchar_fd(char c, int fd, int isopti, int *count);
void	print_char(char c, int *count);
void	print_string(char *str, int *count);
void	print_pointer(void *ptr, int *count);
void	base_16(unsigned long adr, int *count, char *base16);
void	ft_printf_bis(const char *str, int *i, va_list *args, int *count);
void	print_int_dec(int nbr, int *count, int size);
void	print_unsigned(unsigned int nbr, int *count, int size);
void	base_16x(unsigned int adr, int	*count, char *base16);
void	print_percent(int *count);
#endif