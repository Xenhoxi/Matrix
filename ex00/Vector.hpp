/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:54:54 by ljerinec          #+#    #+#             */
/*   Updated: 2024/12/03 11:03:19 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP

#include <iostream>
#include "Matrix.hpp"

struct Matrix;

struct Vector {
	Vector(void);
	Vector(float *vector, unsigned long byte_size);
	Vector(const Vector &src);
	~Vector();

    int		size(void) const;
	void	display(void);
	Matrix	reshape(int width);

	Vector &operator=(Vector const &rhs);
private:
	float			*_vec;
	unsigned int	_size;
};

std::ostream &operator<<(std::ostream &out, const Vector &rhs);

#endif
