/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:53:38 by ljerinec          #+#    #+#             */
/*   Updated: 2024/11/28 15:34:38 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Vector.hpp"

Vector::Vector(float *new_vector, unsigned long byte_size)
{
    if (new_vector)
        this->_vec = new_vector;
    if (byte_size > 0)
        this->_size = (byte_size / sizeof(new_vector[0]));
    std::cout << "Created a vector of size: " << this->_size << std::endl;
}

Vector::~Vector()
{
    // std::cout << "Destructeur Vector" << std::endl;
}

Vector::Vector(const Vector &src)
{
    (void) src;
}

int Vector::size() const
{
    return (this->_size);
}

void Vector::display(void)
{
    unsigned int    i = -1;
    std::string     str;

    while (++i < this->_size)
    {
        str += std::to_string(this->_vec[i]);
        if (i + 1 < this->_size)
            str += ", ";
    }
    std::cout << "[" << str << "]" << std::endl;
    
}

std::ostream &operator<<(std::ostream &out, const Vector &rhs)
{    
	out << rhs.size();
	return (out);
}
