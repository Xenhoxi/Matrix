/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:32:03 by ljerinec          #+#    #+#             */
/*   Updated: 2024/12/16 11:53:24 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Matrix.hpp"
#include <vector>

using namespace std;

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
	cout << "Delete matrix !" << endl;
}

Matrix::Matrix(const Matrix &src)
{
	this->_matrix = src._matrix;
	this->_n = src._n;
	this->_m = src._m;
}

void	Matrix::display()
{
	vector<vector<float>>::iterator	it_row = _matrix.begin();
	vector<float>::iterator it_col = (*it_row).begin();

	cout << "[";
	while (it_row != _matrix.end())
	{
		it_col = (*it_row).begin();
		if (it_row != _matrix.begin())
			cout << " ";
		cout << "[";
		while (it_col != (*it_row).end())
		{
			cout << *it_col;
			if (it_col + 1 != (*it_row).end())
				cout << ", ";
			it_col++;
		}
		cout << "]";
		it_row++;
		if (it_row != _matrix.end())
			cout << endl;
	}
	cout << "]" << endl;
	
}

bool	Matrix::is_square(void)
{
	vector<vector<float>>::iterator	it_row = _matrix.begin();
	size_t	lenght = (*it_row++).size();

	while (it_row != _matrix.end())
	{
		if ((*it_row).size() != lenght)
			return false;
		it_row++;
	}
	return true;
}

vector<unsigned long>	Matrix::shape(void)
{
	vector<unsigned long> shape;
	vector<vector<float>>::iterator	it_row = _matrix.begin();
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
	cout << "[" << shape[0] << ", " << shape[1] << "]" << endl;
	return (shape);
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
