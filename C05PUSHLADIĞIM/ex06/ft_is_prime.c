/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escan <escan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 23:12:31 by escan             #+#    #+#             */
/*   Updated: 2024/09/05 23:51:01 by escan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 2)
		return (1);
	if (nb < 2)
		return (0);
	if (nb % 2 == 0)
		return (0);
	while (i < nb / 2)
		if (nb % i == 0)
			return (0);
	else
		i++;
	return (1);
}
