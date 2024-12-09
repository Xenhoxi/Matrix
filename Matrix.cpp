/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:32:03 by ljerinec          #+#    #+#             */
/*   Updated: 2024/12/09 15:10:59 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Matrix.hpp"

Matrix::Matrix(void)
{
	return;
}

// Matrix::Matrix(std::array new_matrix)
// {
// 	this._matrix = new_matrix;
// }

Matrix::~Matrix(void)
{
}

Matrix::Matrix(const Matrix &src)
{
	this->_matrix = src._matrix;
	this->_n = src._n;
	this->_m = src._m;
}

Matrix &Matrix::operator=(const Matrix &rhs)
{
	if (this != &rhs)
	{
		this->_matrix = rhs._matrix;
		this->_n = rhs._n;
		this->_m = rhs._m;
	}
	return (*this);
}
