/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahmane <dahmane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:16:14 by dahmane           #+#    #+#             */
/*   Updated: 2024/10/28 14:16:16 by dahmane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (s1[i] != '\0' && i < n - 1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		printf("%d \n", ft_strncmp(av[1], av[2], atoi(av[3])));
		printf("%d \n", strncmp(av[1], av[2], atoi(av[3])));
	}
	else
		printf("ya rien");
	return (0);
}