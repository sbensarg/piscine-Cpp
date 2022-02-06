/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Temp_swap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:30:36 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/05 16:26:23 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMP_SWAP_H
#define TEMP_SWAP_H

template <typename T>

void	swap(T & x, T & y) 
{
	T temp;

	temp = x;
	x = y;
	y = temp;
}

#endif