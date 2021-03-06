/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayir <acayir@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 10:32:27 by acayir            #+#    #+#             */
/*   Updated: 2022/04/18 14:03:02 by kadir            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int str)
{
	if (str >= 'a' && str <= 'z')
		return (str - 32);
	return (str);
}
