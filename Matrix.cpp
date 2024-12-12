/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:32:03 by ljerinec          #+#    #+#             */
/*   Updated: 2024/12/12 16:48:01 by ljerinec         ###   ########.fr       */
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
	this->_size = new_vector.size();
	if (this->_size > 0)
	{
		this->_vector = new_vector;
		for (unsigned int i = 0; i < _size; i++)
			this->_vector[i] = new_vector[i];
	}
	_matrix = new_matrix;
	std::cout << "Matrix created !" << std::endl;
}

Matrix::~Matrix(void)
{
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
