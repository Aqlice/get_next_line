/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casautou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 21:21:16 by casautou          #+#    #+#             */
/*   Updated: 2018/11/16 21:21:30 by casautou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[i] == s2[i] && s1[i] != 0)
		i++;
	if (s1[i] == 0 && s1[i] == s2[i])
		return (1);
	return (0);
}