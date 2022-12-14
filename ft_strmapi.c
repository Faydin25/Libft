/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faydin <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 13:38:37 by faydin            #+#    #+#             */
/*   Updated: 2022/02/23 00:45:07 by faydin           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}

#include <stdio.h>

char	f(unsigned int i, char c)
{
	c -= 32;
	return (c);
}

int	main()
{
	char	dizi[] = "asdfghjk";
	char	*ptr;

	ptr = ft_strmapi(dizi,&f);
	printf("%s", ptr);
}
