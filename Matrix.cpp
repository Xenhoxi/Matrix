/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:32:03 by ljerinec          #+#    #+#             */
/*   Updated: 2025/01/06 14:57:29 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Matrix.hpp"
#include <vector>

Matrix::Matrix(void)
{
	return;
}

Matrix::Matrix(std::vector<std::vector<float>> new_matrix)
{
	_matrix = new_matrix;
	this->shape();
	// std::cout << "Matrix created !" << std::endl;
}

Matrix::~Matrix(void)
{
	// std::cout << "Delete matrix !" << std::endl;
}

Matrix::Matrix(const Matrix &src)
{
	this->_matrix = src._matrix;
	this->_n = src._n;
	this->_m = src._m;
}

void	Matrix::display()
{
	std::vector<std::vector<float>>::iterator	it_row = _matrix.begin();
	std::vector<float>::iterator it_col = (*it_row).begin();

	std::cout << "-- Display of matrix n = " << _n << " m = " << _m  << " --"<< std::endl; 
	std::cout << "[";
	while (it_row != _matrix.end())
	{
		it_col = (*it_row).begin();
		if (it_row != _matrix.begin())
			std::cout << " ";
		std::cout << "[";
		while (it_col != (*it_row).end())
		{
			std::cout << *it_col;
			if (it_col + 1 != (*it_row).end())
				std::cout << ", ";
			it_col++;
		}
		std::cout << "]";
		it_row++;
		if (it_row != _matrix.end())
			std::cout << std::endl;
	}
	std::cout << "]" << std::endl;
	
}

bool	Matrix::is_square(void)
{
	std::vector<std::vector<float>>::iterator	it_row = _matrix.begin();
	size_t	lenght = (*it_row++).size();

	while (it_row != _matrix.end())
	{
		if ((*it_row).size() != lenght)
			return (false);
		it_row++;
	}
	return (true);
}

std::vector<unsigned long>	Matrix::shape(void)
{
	std::vector<unsigned long> shape;
	std::vector<std::vector<float>>::iterator	it_row = _matrix.begin();

	shape = {0, 0};
	shape[0] = (*it_row).size();
	shape[1] = _matrix.size();
	if (this->is_square())
		shape[0] = _matrix[0].size();
	else
	{
		while (it_row != _matrix.end())
		{
			if ((*it_row).size() > shape[1])
				shape[0] = (*it_row).size();
			it_row++;
		}
	}
	this->_m = shape[1];
	this->_n = shape[0];
	// std::cout << "  n  " << std::endl;
	// std::cout << " --->" << std::endl;
	// std::cout << "m|" << std::endl;
	// std::cout << " v" << std::endl;
	// std::cout << "[" << _n << ", " << _m << "]" << std::endl;
	return (shape);
}

Vector	Matrix::reshape()
{
	std::vector<std::vector<float>>::iterator it_row = _matrix.begin();
	std::vector<float>::iterator it_col;
	std::vector<float> new_vector;
	
	while (it_row != _matrix.end())
	{
		it_col = (*it_row).begin();
		while (it_col != (*it_row).end())
		{
			new_vector.push_back(*it_col);
			it_col++;
		}
		it_row++;
	}
	return (Vector(new_vector));
}

void	Matrix::add(Matrix &added)
{
	if (!this->is_square() || !added.is_square()
		|| _n != added._n || _m != added._m)
			throw Matrix::ShapeError();
	else
	{
		for (unsigned int i = 0; i < _m; i++)
			for (unsigned int u = 0; u < _n; u++)
				_matrix[i][u] += added._matrix[i][u];
	}
}

void	Matrix::sub(Matrix &substract)
{
	if (!this->is_square() || !substract.is_square()
		|| _n != substract._n || _m != substract._m)
			throw Matrix::ShapeError();
	else
	{
		for (unsigned int i = 0; i < _m; i++)
			for (unsigned int u = 0; u < _n; u++)
				_matrix[i][u] -= substract._matrix[i][u];
	}
}

void	Matrix::scl(float scaler)
{
	for (unsigned int i = 0; i < _m; i++)
		for (unsigned int u = 0; u < _n; u++)
			_matrix[i][u] *= scaler;
}

// ------ Surcharge d'operateur ------

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

Matrix Matrix::operator+(Matrix &rhs) const
{
	Matrix tmp = Matrix(*this);
	tmp.add(rhs);
	return (tmp);
}

Matrix Matrix::operator-(Matrix &rhs) const
{
	Matrix tmp = Matrix(*this);
	tmp.sub(rhs);
	return (tmp);
}

Matrix Matrix::operator*(float scaler) const
{
	Matrix tmp = Matrix(*this);
	tmp.scl(scaler);
	return (tmp);
}