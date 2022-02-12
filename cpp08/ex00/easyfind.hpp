/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:57:46 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/11 18:17:08 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <algorithm>
#include <iterator>

template <class T>

typename T::iterator easyfind(T con, int findval)
{
	typename T::iterator it;
	it = find(con.begin(), con.end(), findval);
	if (it != con.end())
		return (it);
	else
		throw std::exception();
}
#endif