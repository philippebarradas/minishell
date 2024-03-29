/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbcharuihex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 00:32:28 by tsannie           #+#    #+#             */
/*   Updated: 2020/12/02 00:37:23 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_nbcharuihex(unsigned int src)
{
	int i;

	i = 0;
	if (src == 0)
		return (1);
	while (src)
	{
		i++;
		src = src / 16;
	}
	return (i);
}
