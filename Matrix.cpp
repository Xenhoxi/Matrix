/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:32:03 by ljerinec          #+#    #+#             */
/*   Updated: 2024/12/16 14:58:22 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Matrix.hpp"
#include <vector>

// using namespace std;

Matrix::Matrix(void)
{
	return;
}

Matrix::Matrix(std::vector<std::vector<float>> new_matrix)
{
	_matrix = new_matrix;
	std::cout << "Matrix created !" << std::endl;
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
	shape[1] = (*it_row++).size();
	shape[0] = _matrix.size();
	if ((*this).is_square())
		shape[1] = _matrix[0].size();
	else
	{
		while (it_row != _matrix.end())
		{
			if ((*it_row).size() > shape[1])
				shape[1] = (*it_row).size();
			it_row++;
		}
	}
	std::cout << "[" << shape[0] << ", " << shape[1] << "]" << std::endl;
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
