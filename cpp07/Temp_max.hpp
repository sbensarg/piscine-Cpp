/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Temp_max.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:27:54 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/05 16:52:42 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMP_MAX_H
#define TEMP_MAX_H

template <typename T>

T	max(T const & x, T const & y) 
{
	return (x >= y) ? x : y;
}

#endif