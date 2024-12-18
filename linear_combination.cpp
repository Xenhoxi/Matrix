/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linear_combination.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:45:45 by ljerinec          #+#    #+#             */
/*   Updated: 2024/12/18 15:37:01 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Master.hpp"
#include "Vector.hpp"

Vector	linear_combination(std::vector<Vector> lst_vector, std::vector<float> coefs)
{
    std::vector<Vector> lst_tmp = lst_vector;
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
