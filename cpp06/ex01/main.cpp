/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:03:46 by sbensarg          #+#    #+#             */
/*   Updated: 2022/01/31 16:16:12 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdint>
#include <iostream>

struct Data
{
	int m;
	Data() : m(42) {}
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data d1;
	uintptr_t ret;
	Data *d2 = NULL;
	ret = serialize(&d1);
	d2 = deserialize(ret);
	if (d2)
		std::cout << "ret value: " << d2->m << std::endl;
	std::cout << "original pointer: " << d1.m << std::endl;
}