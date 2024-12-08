/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:53:38 by ljerinec          #+#    #+#             */
/*   Updated: 2024/12/09 14:43:40 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Vector.hpp"

Vector::Vector(float *new_vector, unsigned long byte_size)
{
	if (byte_size > 0)
		this->_size = (byte_size / sizeof(new_vector[0]));
	else
		this->_size = 0;
	if (new_vector)
	{
		this->_vec = new float[this->_size];
		for (unsigned int i = 0; i < _size; i++)
			this->_vec[i] = new_vector[i];
	}
	std::cout << "Created a vector of size: " << this->_size << std::endl;
}

Vector::~Vector()
{
	delete [] this->_vec;
}

Vector::Vector(const Vector &src)
{
	*this = src;
}

Vector &Vector::operator=(Vector const &rhs)
{
	if (this != &rhs)
	{
		this->_vec = rhs._vec;
		this->_size = rhs._size;
	}
	return (*this);
}

int Vector::size() const
{
	return (this->_size);
}

void Vector::display(void)
{
	unsigned int    i = -1;

	std::cout << "[";
	while (++i < this->_size)
	{
		std::cout << this->_vec[i];
		if (i + 1 < this->_size)
			std::cout << ", ";
	}
	std::cout << "]" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Vector &rhs)
{
	(void) rhs;
	return (out);
}
