/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:10:39 by ljerinec          #+#    #+#             */
/*   Updated: 2024/12/16 11:46:56 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Vector.hpp"

int main()
{
    std::cout << "Matrix" << std::endl;
    
    Vector  my_vec({1.0, 2.3, 6.0, 7.8902});
    Vector  vec_2(my_vec);
    my_vec.display();
    vec_2.display();

    Matrix  mat_1({
        {1.6, 2, 3, 5},
        {1, 6, 3, 5},
        {1, 2, 9.5423, 5},
        {1, 2, 9.5423}}
    );
    Matrix  mat_2(mat_1);
    mat_1.display();
    mat_2.display();
    std::cout << mat_1.is_square() << std::endl;
    std::cout << mat_2.is_square() << std::endl;
    
    mat_1.shape();
    return (0);
}
