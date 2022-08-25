/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:00:18 by epraduro          #+#    #+#             */
/*   Updated: 2022/08/22 19:54:20 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)

{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0 && nb == 1)
		return (1);
	else
	{
		while (i < nb)
		{
			res = res * i;
			i++;
		}
	}
	return (res);
}
