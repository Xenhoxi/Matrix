/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:54:54 by ljerinec          #+#    #+#             */
/*   Updated: 2025/01/09 16:34:04 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP

#include <iostream>
#include <vector>
#include <math.h>
#include "Matrix.hpp"

template<typename T>
struct Matrix;

template<typename T>
struct Vector {
	Vector(void);
	Vector(std::vector<T> new_vector);
	Vector(const Vector<T> &src);
	~Vector();

    int			size(void) const;
	void		display(void);
	Matrix<T>	reshape(unsigned int width);

	void		add(Vector<T> &added);
	void		sub(Vector<T> &substract);
	void		scl(float scaler);
	float		dot(Vector<T> &dot_vec);

	Vector<T> &operator=(Vector<T> const &rhs);
	Vector<T> operator+(Vector<T> &rhs) const;
	Vector<T> operator-(Vector<T> &rhs) const;
	Vector<T> operator*(Vector<T> &rhs) const;
	Vector<T> operator*(float scaler) const;

	float		norm_1(void);
	float		norm(void);
	float		norm_inf(void);

	class SizeError : public std::exception 
	{
	public:
		virtual const char* what() const throw() {
			return ("Size between both vector are nor egal impossible to compute addition of this vector !"); 
		}
	};

private:
	std::vector<T>	_vector;
	unsigned int		_size;
};

#include "../Vector.tpp"

#endif
