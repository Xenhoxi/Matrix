/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:53:38 by ljerinec          #+#    #+#             */
/*   Updated: 2024/11/27 14:55:51 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Vector.hpp"

Vector::Vector(float *new_vector)
{
    if (new_vector)
        this->vec = new_vector;
    std::cout << "Created a vector: " << sizeof(this->vec) << " and " << sizeof(*this->vec) << std::endl;
}

Vector::~Vector()
{
    std::cout << "Destructeur Vector" << std::endl;
}

Vector::Vector(const Vector &src)
{
    
}

int Vector::size() const
{
    int i = 0;

    // while(this->vec[i])
    // {
    //     std::cout << this->vec[i] << std::endl;
    //     i++;
    // }
    return (i);
}

std::ostream &operator<<(std::ostream &out, const Vector &rhs)
{
    (void) rhs;
	out << rhs.size();
	return (out);
}
