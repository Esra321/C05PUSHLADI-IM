/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escan <escan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 23:01:37 by escan             #+#    #+#             */
/*   Updated: 2024/09/05 23:02:00 by escan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power == 0 || nb == 1)
	{
		return (1);
	}
	if (power <= 0)
	{
		return (0);
	}
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
