/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:10:39 by ljerinec          #+#    #+#             */
/*   Updated: 2024/11/28 15:34:44 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Vector.hpp"

int main()
{
    std::cout << "Matrix" << std::endl;

    float test[] = {1.0, 2.0, 6.0};
    std::cout << sizeof(test) << std::endl;
    Vector  my_vec(test, sizeof(test));
    my_vec.display();
    std::cout << my_vec << std::endl;

    return (1);
}
