/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chicky <chicky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 01:05:52 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/15 19:32:54 by chicky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

# include <iostream>

# define RED   "\x1B[31m"
# define GRN   "\x1B[32m"
# define YEL   "\x1B[33m"
# define BLU   "\x1B[34m"
# define MAG   "\x1B[35m"
# define CYN   "\x1B[36m"
# define WHT   "\x1B[37m"
# define RESET "\x1B[0m"

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