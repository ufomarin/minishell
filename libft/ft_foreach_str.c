/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbirdper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 03:30:39 by nbirdper          #+#    #+#             */
/*   Updated: 2021/02/05 03:30:42 by nbirdper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_foreach_str(const char *str, int (*f)(int))
{
	while (*str != 0)
	{
		if (!(*f)(*str))
			return (0);
		str++;
	}
	return (1);
}
