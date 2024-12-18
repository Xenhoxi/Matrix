/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Master.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:51:39 by ljerinec          #+#    #+#             */
/*   Updated: 2024/12/18 15:32:12 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MASTER_HPP
# define MASTER_HPP

#include "Matrix.hpp"
#include "Vector.hpp"
#include <exception>
#include <list>

Vector	linear_combination(std::vector<Vector> lst_vector, std::vector<float> coefs);

class SizeError : public std::exception 
{
public:
    virtual const char* what() const throw() {
        return ("Size error !"); 
    }
};

#endif