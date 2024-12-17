/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:45:14 by ljerinec          #+#    #+#             */
/*   Updated: 2024/12/17 11:07:49 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_HPP
# define MATRIX_HPP

#include "Vector.hpp"
#include <array>

struct Vector;

struct Matrix
{
public:
	Matrix();
	Matrix(std::vector<std::vector<float>> new_matrix);
	Matrix(const Matrix &src);
	~Matrix();

	std::vector<unsigned long>	shape(void);
	void			display(void);
	bool			is_square(void);
	Vector			reshape(void);

	void			add(Matrix &added);
	void			sub(Matrix &substract);
	void			scl(float scaler);

	Matrix &operator=(const Matrix &rhs);

	class ShapeError : public std::exception 
	{
	public:
		virtual const char* what() const throw() {
			return ("Shape between both matrix are not the same, Impossible to compute operation on this !"); 
		}
	};
	
private:
	std::vector<std::vector<float>> 	_matrix;
	unsigned int 						_n;
	unsigned int 						_m;
};

#endif