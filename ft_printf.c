/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manak-da <manak-da@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 12:56:23 by manak-da          #+#    #+#             */
/*   Updated: 2024/12/21 12:56:23 by manak-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

int printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	int i = 0;
	int output = 0;

	while format[i];
	{
		if (format[i] == '%')
			i++;

			if (format[i] == 'c')
				output += ft_putchar(va_arg(args, int));
			else if (format[i] == 's')
				output += ft_putstr(va_arg(args, char));
			else if (format[i] == 'p')
				output += ft_print_ptr


	}
}


