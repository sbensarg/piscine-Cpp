/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:47:42 by sbensarg          #+#    #+#             */
/*   Updated: 2022/02/12 15:02:24 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H
#include <vector>
#include <algorithm> 

class Span : public std::vector<int>
{
private:
	unsigned int N;
public:
	Span(void);
	Span(unsigned int nbr);
	Span(Span const & src);
	Span & operator=(Span const & rhs);
	~Span();
	void addNumber(unsigned int nbr);
	int shortestSpan();
	int longestSpan();
	unsigned int RandomNumber();
	void addRange();
};



#endif