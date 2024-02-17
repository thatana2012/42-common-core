/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 22:02:11 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/15 22:32:48 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
    char s[40] = "Hello Hi lo";
    char c1 = 'c';
    char c2 = 'c';
    printf("%s\n", strchr(s, c1));
    printf("%s\n", ft_strchr(s, c2));
    return (0);
}
*/
