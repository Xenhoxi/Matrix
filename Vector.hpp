/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:54:54 by ljerinec          #+#    #+#             */
/*   Updated: 2024/12/16 10:26:15 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP

#include <iostream>
#include <vector>
#include "Matrix.hpp"

struct Matrix;

struct Vector {
	Vector(void);
	Vector(std::vector<float> new_vector);
	Vector(const Vector &src);
	~Vector();

    int		size(void) const;
	void	display(void);
	Matrix	reshape(int width);

	Vector &operator=(Vector const &rhs);
private:
	std::vector<float>	_vector;
	unsigned int		_size;
};

// std::ostream &operator<<(std::ostream &out, const Vector &rhs);

#endif
