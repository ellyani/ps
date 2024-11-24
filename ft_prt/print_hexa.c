/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:01:34 by sellyani          #+#    #+#             */
/*   Updated: 2024/11/24 16:32:02 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexa(unsigned int nbr, char specifier)
{
	int		count;
	char	*symboles;
	char	*Su;

	count = 0;
	symboles = "0123456789abcdef";
	Su = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		count += print_hexa(nbr / 16, specifier);
		count += print_hexa(nbr % 16, specifier);
	}
	else
	{
		if (specifier == 'X')
			count += print_char(Su[nbr]);
		else
			count += print_char(symboles[nbr]);
	}
	return (count);
}
