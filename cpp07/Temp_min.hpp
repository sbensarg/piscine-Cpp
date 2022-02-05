/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Temp_min.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:08:56 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/05 16:52:34 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMP_MIN_H
#define TEMP_MIN_H

#include <iostream>

template <typename T>

T	min(T const & x, T const & y) 
{
	return (x <= y) ? x : y;
}

#endif