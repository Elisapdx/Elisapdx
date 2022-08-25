/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epraduro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:21:09 by epraduro          #+#    #+#             */
/*   Updated: 2022/08/24 13:13:14 by epraduro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)

{
	if (nb < 0)
		return (0);
	if (nb == 0 && nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb -1));
}
