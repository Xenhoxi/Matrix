/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:45:14 by ljerinec          #+#    #+#             */
/*   Updated: 2024/12/09 15:10:51 by ljerinec         ###   ########.fr       */
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
	// Matrix(std::array<float> new_matrix);
	Matrix(const Matrix &src);
	~Matrix();

	int		*shape(void);
	void	display(void);
	int		is_square(void);
	Vector	reshape(void);

	Matrix &operator=(const Matrix &rhs);
private:
	float **_matrix;
	unsigned int _n;
	unsigned int _m;
};

#endif