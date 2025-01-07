/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:32:03 by ljerinec          #+#    #+#             */
/*   Updated: 2025/01/07 15:52:19 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Matrix.hpp"

template<typename T>
Matrix<T>::Matrix(void)
{
	return;
}

template<typename T>
Matrix<T>::Matrix(std::vector<std::vector<T>> new_matrix)
{
	_matrix = new_matrix;
	this->shape();
	// std::cout << "Matrix created !" << std::endl;
}

template<typename T>
Matrix<T>::~Matrix(void)
{
	// std::cout << "Delete matrix !" << std::endl;
}

template<typename T>
Matrix<T>::Matrix(const Matrix<T> &src)
{
	this->_matrix = src._matrix;
	this->_n = src._n;
	this->_m = src._m;
}

template<typename T>
void	Matrix<T>::display()
{
	typename std::vector<std::vector<T>>::iterator	it_row = _matrix.begin();
	typename std::vector<T>::iterator it_col = (*it_row).begin();

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

template<typename T>
bool	Matrix<T>::is_square(void)
{
	typename std::vector<std::vector<T>>::iterator	it_row = _matrix.begin();
	size_t	lenght = (*it_row++).size();

	while (it_row != _matrix.end())
	{
		if ((*it_row).size() != lenght)
			return (false);
		it_row++;
	}
	return (true);
}

template<typename T>
std::vector<unsigned long>	Matrix<T>::shape(void)
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

template<typename T>
Vector<T>	Matrix<T>::reshape()
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
	return (Vector<T>(new_vector));
}

template<typename T>
void	Matrix<T>::add(Matrix<T> &added)
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

template<typename T>
void	Matrix<T>::sub(Matrix<T> &substract)
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

template<typename T>
void	Matrix<T>::scl(float scaler)
{
	for (unsigned int i = 0; i < _m; i++)
		for (unsigned int u = 0; u < _n; u++)
			_matrix[i][u] *= scaler;
}

// ------ Surcharge d'operateur ------

template<typename T>
Matrix<T> &Matrix<T>::operator=(const Matrix<T> &rhs)
{
	if (this != &rhs)
	{
		this->_matrix = rhs._matrix;
		this->_n = rhs._n;
		this->_m = rhs._m;
	}
	return (*this);
}

template<typename T>
Matrix<T> Matrix<T>::operator+(Matrix<T> &rhs) const
{
	Matrix<T> tmp = Matrix(*this);
	tmp.add(rhs);
	return (tmp);
}

template<typename T>
Matrix<T> Matrix<T>::operator-(Matrix<T> &rhs) const
{
	Matrix<T> tmp = Matrix(*this);
	tmp.sub(rhs);
	return (tmp);
}

template<typename T>
Matrix<T> Matrix<T>::operator*(float scaler) const
{
	Matrix<T> tmp = Matrix(*this);
	tmp.scl(scaler);
	return (tmp);
}