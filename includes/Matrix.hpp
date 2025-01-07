/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:45:14 by ljerinec          #+#    #+#             */
/*   Updated: 2025/01/07 16:04:27 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_HPP
# define MATRIX_HPP

#include <iostream>
#include <vector>
#include "Vector.hpp"

template<typename T>
struct Vector;

template<typename T>
struct Matrix
{
public:
	Matrix();
	Matrix(std::vector<std::vector<T>> new_matrix);
	Matrix(const Matrix<T> &src);
	~Matrix();

	std::vector<unsigned long>	shape(void);
	void						display(void);
	bool						is_square(void);
	Vector<T>					reshape(void);

	void			add(Matrix<T> &added);
	void			sub(Matrix<T> &substract);
	void			scl(float scaler);

	Matrix<T> &operator=(const Matrix<T> &rhs);
	Matrix<T> operator+(Matrix<T> &rhs) const;
	Matrix<T> operator-(Matrix<T> &rhs) const;
	Matrix<T> operator*(float scaler) const;
	Matrix<T> &operator*(Matrix<T> &rhs);

	class ShapeError : public std::exception 
	{
	public:
		virtual const char* what() const throw() {
			return ("Shape between both matrix are not the same, Impossible to compute operation on this !"); 
		}
	};
	
private:
	std::vector<std::vector<T>> _matrix;
	unsigned int 				_n;
	unsigned int 				_m;
};

#include "../Matrix.tpp"

#endif