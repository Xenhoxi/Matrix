/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:53:38 by ljerinec          #+#    #+#             */
/*   Updated: 2025/01/07 17:34:22 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vector.hpp"

template<typename T>
Vector<T>::Vector(std::vector<T> new_vector)
{
	this->_size = new_vector.size();
	if (this->_size > 0)
	{
		this->_vector = new_vector;
		for (unsigned int i = 0; i < _size; i++)
			this->_vector[i] = new_vector[i];
	}
	// std::cout << "Created a vector of size " << this->_size << std::endl;
}

template<typename T>
Vector<T>::~Vector()
{
	// std::cout << "Delete vector !" << std::endl;
	return ;
}

template<typename T>
Vector<T>::Vector(const Vector<T> &src)
{
	*this = src;
	// std::cout << "Created a vector of size " << this->_size << " by copy !" << std::endl;
}

template<typename T>
int Vector<T>::size() const
{
	return (this->_vector.size());
}

template<typename T>
Matrix<T>	Vector<T>::reshape(unsigned int width)
{
	typename std::vector<std::vector<T>> new_matrix;
	typename std::vector<T> in_vector;

	for (std::vector<float>::iterator it_vec = _vector.begin(); it_vec < _vector.end();it_vec++)
	{
		in_vector.push_back(*it_vec);
		if (in_vector.size() == width)
		{
			new_matrix.push_back(in_vector);
			in_vector.clear();
		}
	}
	if (in_vector.size())
		new_matrix.push_back(in_vector);
	return (Matrix<T>(new_matrix));
}

template<typename T>
void Vector<T>::display(void)
{
	unsigned int    i = -1;

	std::cout << "-- Display of vector size = " << _size << " --"<< std::endl; 
	std::cout << "[";
	while (++i < this->_size)
	{
		std::cout << this->_vector[i];
		if (i + 1 < this->_size)
			std::cout << ", ";
	}
	std::cout << "]" << std::endl;
}

template<typename T>
void Vector<T>::add(Vector<T> &added)
{
	if (this->size() != added.size())
		throw Vector::SizeError();
	else
	{
		for (int i = 0; i < this->size(); i++)
			this->_vector[i] += added._vector[i];
	}
}

template<typename T>
void Vector<T>::sub(Vector<T> &substact)
{
	if (this->size() != substact.size())
		throw Vector::SizeError();
	else
	{
		for (int i = 0; i < this->size(); i++)
			this->_vector[i] -= substact._vector[i];
	}
}

template<typename T>
void Vector<T>::scl(float scaler)
{
	for (int i = 0; i < this->size(); i++)
		this->_vector[i] *= scaler;
}

template<typename T>
float	Vector<T>::dot(Vector<T> &dot_vec)
{
	Vector<T> result = (*this) * dot_vec;
	float total = 0;
	
	for	(typename std::vector<T>::iterator it = result._vector.begin(); it != result._vector.end(); it++)
		total += (*it);
	return (total);
}

template<typename T>
float	Vector<T>::norm_1(void)
{
	
}

template<typename T>
float	Vector<T>::norm(void)
{
	
}

template<typename T>
float	Vector<T>::norm_inf(void)
{
	
}

// ------ Surcharge d'operateur ------

template<typename T>
Vector<T> &Vector<T>::operator=(Vector<T> const &rhs)
{
	if (this != &rhs)
	{
		this->_vector = rhs._vector;
		this->_size = rhs._size;
	}
	return (*this);
}

template<typename T>
Vector<T> Vector<T>::operator+(Vector<T> &rhs) const
{
	Vector tmp = Vector(*this);
	tmp.add(rhs);
	return (tmp);
}

template<typename T>
Vector<T> Vector<T>::operator-(Vector<T> &rhs) const
{
	Vector tmp = Vector(*this);
	tmp.sub(rhs);
	return (tmp);
}

template<typename T>
Vector<T> Vector<T>::operator*(Vector<T> &rhs) const
{
	std::vector<float> tmp;

	if (this->size() != rhs.size())
		throw Vector::SizeError();
	else
	{
		for (int i = 0; i < this->size(); i++)
			tmp.push_back(this->_vector[i] * rhs._vector[i]);
	}
	return (Vector(tmp));
}

template<typename T>
Vector<T> Vector<T>::operator*(float scaler) const
{
	Vector tmp = Vector(*this);
	tmp.scl(scaler);
	return (tmp);
}

