/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 01:05:52 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/07 01:12:13 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
class Brain
{
private:
	std::string ideas[100];
public:
	Brain(void); // Canonical
	Brain(Brain const & src); // Canonical
	virtual ~Brain(); // Canonical
	Brain & operator=(Brain const & rhs); // Canonical
};


#endif