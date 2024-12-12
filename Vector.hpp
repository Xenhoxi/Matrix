/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:54:54 by ljerinec          #+#    #+#             */
/*   Updated: 2024/12/12 14:56:51 by ljerinec         ###   ########.fr       */
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
	void	plus_un(void);

	Vector &operator=(Vector const &rhs);
private:
	std::vector<float>	_vector;
	unsigned int		_size;
};

// std::ostream &operator<<(std::ostream &out, const Vector &rhs);

#endif
