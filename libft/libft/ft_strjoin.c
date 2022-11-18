/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:11:12 by epraduro          #+#    #+#             */
/*   Updated: 2022/11/17 16:03:13 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		len_s1;
	int		len_s2;
	int		j;
	int		n;

	n = 0;
	j = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!(malloc(sizeof(char) * (len_s1 + len_s2) + 1)))
		return (NULL);
	else
		result = malloc(sizeof(char) * (len_s1 + len_s2) + 1);
	while (n < len_s1)
	{
		result[n] = s1[n];
		n++;
	}
	while (n < (len_s1 + len_s2))
		result[n++] = s2[j++];
	result[n] = '\0';
	return (result);
}
/*deuxieme boucle traite de la 2e partie de la chaine*/
