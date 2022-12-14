/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 21:29:03 by epraduro          #+#    #+#             */
/*   Updated: 2022/08/17 21:45:42 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)

{
	int	g;

	g = 0;
	while (str[g] != '\0')
	{
		if (g >= 65 && g <= 90)
			str[g] += 32;
		g++;
	}
	return (*str);
}
