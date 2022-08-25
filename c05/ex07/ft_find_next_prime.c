/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:21:58 by epraduro          #+#    #+#             */
/*   Updated: 2022/08/24 12:37:26 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)

{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb % 2 == 0)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)

{
	int	i;

	i = 0;
	while (!ft_is_prime(nb + 1))
	{
		i++;
	}
	return (nb + i);
}
