/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:53:38 by ljerinec          #+#    #+#             */
/*   Updated: 2024/12/16 15:08:59 by ljerinec         ###   ########.fr       */
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
	// std::cout << "Delete vector !" << std::endl;
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

int Vector::size() const
{
	return (this->_vector.size());
}

Matrix	Vector::reshape(unsigned int width)
{
	std::vector<std::vector<float>> new_matrix;
	std::vector<float> in_vector;

	for (std::vector<float>::iterator it_vec = _vector.begin(); it_vec < _vector.end();it_vec++)
	{
		in_vector.push_back(*it_vec);
		if (in_vector.size() == width)
		{
			new_matrix.push_back(in_vector);
			in_vector.clear();
		}
	}
	if (in_vector.size())
		new_matrix.push_back(in_vector);
	return (Matrix(new_matrix));
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
