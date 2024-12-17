/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:10:39 by ljerinec          #+#    #+#             */
/*   Updated: 2024/12/17 11:46:27 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Vector.hpp"
#include "Matrix.hpp"

int main()
{
    std::cout << "Lib Matrix" << std::endl;
    
    Vector  my_vec({1.0, 2.3, 6.0, 7.8902});
    Vector  vec_2(my_vec);
    Vector  vec_3({1.0, 2.3, 6.0, 7.8902, 9});
    // my_vec.display();
    // vec_2.display();

    
    // mat_1.shape();
    // mat_1.display();
    // mat_2.display();
    // std::cout << mat_1.is_square() << std::endl;
    // std::cout << mat_2.is_square() << std::endl;
    
    // mat_1.shape();

    // Vector mat_to_vec = mat_1.reshape();
    // mat_to_vec.display();
    // std::cout << mat_to_vec.size() << std::endl;

    // std::cout << "------" << std::endl;
    // my_vec.display();
    // Matrix vec_to_matrix = my_vec.reshape(3);
    // vec_to_matrix.display();


    std::cout << "------ Vector add, sub and scaler operation ------" << std::endl;
    try
	{
        Vector  vec_1({1.0, 2.3, 6.0, 7.8902});
        Vector  vec_2(my_vec);
        vec_1.display();
        vec_2.display();
        vec_1.add(vec_2);
        vec_1.display();
        vec_1.sub(vec_2);
        vec_1.display();
        vec_1.scl(2.0);
        vec_1.display();
        vec_1.scl(-2.0);
        vec_1.display();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}

    std::cout << "------ Matrix add, sub and scaler operation ------" << std::endl;
    try
	{
        Matrix  mat_1({
        {-1, 0, 1},
        {2, 3, 4},
        {5, 6, 7},
        {8, 9, 10}}
        );
        Matrix  mat_2(mat_1);
        mat_1.display();
        mat_2.display();
        mat_1.add(mat_2);
        mat_1.display();
        mat_1.sub(mat_2);
        mat_1.display();
        mat_1.scl(2.0);
        mat_1.display();
        mat_1.scl(-2.0);
        mat_1.display();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
    return (0);
}
