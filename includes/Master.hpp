/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Master.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:51:39 by ljerinec          #+#    #+#             */
/*   Updated: 2025/01/07 16:08:46 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MASTER_HPP
# define MASTER_HPP

#include "Matrix.hpp"
#include "Vector.hpp"
#include <exception>
#include <list>

class SizeError : public std::exception 
{
public:
	virtual const char* what() const throw() {
		return ("Size error !"); 
	}
};

#include "../linear_calcul.tpp"

#endif