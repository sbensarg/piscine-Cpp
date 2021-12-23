/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 00:20:41 by sbensarg          #+#    #+#             */
/*   Updated: 2021/12/23 02:13:03 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
#define KAREN_H

#include <iostream>

class Karen
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	Karen();
	~Karen();
	void complain( std::string level );
};


#endif