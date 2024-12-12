/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:53:38 by ljerinec          #+#    #+#             */
/*   Updated: 2024/12/12 14:56:47 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Vector.hpp"

Vector::Vector(std::vector<float> new_vector)
{
	this->_size = new_vector.size();
	if (this->_size > 0)
	{
		this->_vector = new_vector;
		for (unsigned int i = 0; i < _size; i++)
			this->_vector[i] = new_vector[i];
	}
	std::cout << "Created a vector of size " << this->_size << std::endl;
}

Vector::~Vector()
{
	std::cout << "Delete vector !" << std::endl; 
	return ;
}

Vector::Vector(const Vector &src)
{
	*this = src;
	std::cout << "Created a vector of size " << this->_size << " by copy !" << std::endl;
}

Vector &Vector::operator=(Vector const &rhs)
{
	if (this != &rhs)
	{
		this->_vector = rhs._vector;
		this->_size = rhs._size;
	}
	return (*this);
}

void Vector::plus_un()
{
	this->_vector[0] += 1;
	std::cout << "Vector has changed !" << std::endl;
}

int Vector::size() const
{
	return (this->_vector.size());
}

void Vector::display(void)
{
	unsigned int    i = -1;

	std::cout << "[";
	while (++i < this->_size)
	{
		std::cout << this->_vector[i];
		if (i + 1 < this->_size)
			std::cout << ", ";
	}
	std::cout << "]" << std::endl;
}

// std::ostream &operator<<(std::ostream &out, const Vector &rhs)
// {
// 	(void) rhs;
// 	return (out);
// }
