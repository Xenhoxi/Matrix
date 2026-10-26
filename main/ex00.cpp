/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:10:39 by ljerinec          #+#    #+#             */
/*   Updated: 2026/10/26 12:40:00 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Vector.hpp"
#include "Matrix.hpp"

int main()
{
    std::cout << "--- EX03 ---" << std::endl;

    Vector<float>  my_vec({1.0, 2.3, 6.0, 7.8902});
    Vector<float>  vec_2(my_vec);
    Vector<float>  vec_3({1.0, 2.3, 6.0, 7.8902, 9});
    Vector<float>  vec_4({1.0, 2.3, 6.0, 7.8902, 9, 8, 7, 5, 4, 3, 2});
    Vector<float>  vec_5(vec_4);

    std::cout << "------ Vector add, sub and scaler operation ------" << std::endl;
    try
	{
        Vector<float>  vec_1({1.0, 2.3, 6.0, 7.8902});
        Vector<float>  vec_2(my_vec);
        vec_1.display();
        vec_2.display();
        vec_3.display();
        vec_4.display();
        vec_5.display();
        std::cout << "Vector 1 = Vector 1 + Vector 2 = ";
        vec_1.add(vec_2);
        vec_1.display();
        std::cout << "Vector 1 = Vector 1 scale by 2 = ";
        vec_1.scl(2.0);
        vec_1.display();
        std::cout << "Vector 4 = Vector 4 - Vector 5 = ";
        vec_4.sub(vec_5);
        vec_4.display();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}

    std::cout << "------ Matrix add, sub and scaler operation ------" << std::endl;
    try
	{
        Matrix<float>  mat_1({
        {-1, 0, 1},
        {2, 3, 4},
        {5, 6, 7},
        {8, 9, 10}}
        );
        Matrix<float>  mat_2(mat_1);
        mat_1.display();
        mat_2.display();
        std::cout << "Matrix 1 = Matrix 1 + Matrix 2" << std::endl;
        mat_1.add(mat_2);
        mat_1.display();
        std::cout << "Matrix 1 = Matrix 1 - Matrix 2" << std::endl;
        mat_1.sub(mat_2);
        mat_1.display();
        std::cout << "Matrix 1 = Matrix 1 scale by 2" << std::endl;
        mat_1.scl(2.0);
        mat_1.display();
        std::cout << "Matrix 1 = Matrix 1 scale by -2" << std::endl;
        mat_1.scl(-2.0);
        mat_1.display();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
    return (0);
}
