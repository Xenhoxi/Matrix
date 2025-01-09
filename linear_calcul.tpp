/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linear_calcul.tpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:15:19 by ljerinec          #+#    #+#             */
/*   Updated: 2025/01/09 16:48:00 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Master.hpp"
#include "Vector.hpp"

template<typename V>
V   linear_interpolation(V u, V v, float t)
{
    V res = (v - u) * t + u;
	return (res);
}


template<typename T>
Vector<T>	linear_combination(std::vector<Vector<T>> lst_vector, std::vector<T> coefs)
{
	std::vector<Vector<T>> lst_tmp = lst_vector;
	if(lst_tmp.size() != coefs.size())
		throw SizeError();
	lst_tmp[0].scl(coefs[0]);
	for (size_t i = 1; i < lst_tmp.size(); i++)
	{
		lst_tmp[i].scl(coefs[i]);
		lst_tmp[0].add(lst_tmp[i]);
	}
	return (lst_tmp[0]);
}

template<typename T>
float	angle_cos(Vector<T> &a, Vector<T> &b)
{
	if (a.size() != b.size() || !a.size() || !b.size())
		throw SizeError();
	float result = 0;
	result = a.dot(b) / (a.norm() * b.norm());
	return (result);
}