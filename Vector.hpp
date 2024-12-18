/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:54:54 by ljerinec          #+#    #+#             */
/*   Updated: 2024/12/19 17:32:49 by ljerinec         ###   ########.fr       */
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
	Matrix	reshape(unsigned int width);

	void	add(Vector &added);
	void	sub(Vector &substract);
	void	scl(float scaler);
	float	dot(Vector &dot_vec);

	Vector &operator=(Vector const &rhs);
	Vector &operator+(Vector &rhs);
	Vector &operator-(Vector &rhs);
	Vector &operator*(Vector &rhs);
	Vector &operator*(float scaler);

	class SizeError : public std::exception 
	{
	public:
		virtual const char* what() const throw() {
			return ("Size between both vector are nor egal impossible to compute addition of this vector !"); 
		}
	};

private:
	std::vector<float>	_vector;
	unsigned int		_size;
};

#endif
