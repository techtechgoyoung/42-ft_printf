/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manak-da <manak-da@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 00:27:58 by manak-da          #+#    #+#             */
/*   Updated: 2024/12/22 00:27:58 by manak-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_ptr_len (unintptr_t num)
{
	int len;

	len = 0
	while (num != 0)
		{
			len++;
			num = num /16
		}
	return(len);
}

void	ft_put_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16)
	}

	else if (num <= 9)
	{
		 if (num <= 9)
		 {
			ft_putchar_fd((num + '0'), 1)
		 }
		 else
		 {
			ft_putchar_fd((num - 10 + 'a'), 1)
		 }
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	int print_length;

	print_length = 0;
	print_length += write(1, "0x", 2);

	if (ptr == 0)
	{
		print_length += write(1, "0", 2);
	}

	else
	{
		ft_put_ptr(ptr);
		print_length += ft_put_len(ptr);
	}
}
