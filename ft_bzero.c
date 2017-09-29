/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mendy <Mendy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 12:49:32 by Mendy             #+#    #+#             */
/*   Updated: 2017/09/08 18:39:53 by Mendy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void ft_bzero(void *s, size_t n)
{
    int i;

    i = 0;
    while (i < n)
    {
        s[i] = 0;
        i++;
    }
}