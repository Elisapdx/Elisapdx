/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:38:32 by epraduro          #+#    #+#             */
/*   Updated: 2022/08/24 16:31:07 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)

{
	int	c;
	int	d;

	c = 0;
	if (*to_find == '\0')
		return (str);
	while (str[c] != '\0')
	{
		d = 0;
		while (to_find[d] == str[c + d])
		{
			d++;
			if (to_find[d] == '\0')
				return (&str[c]);
		}
		c++;
	}
	return (0);
}
