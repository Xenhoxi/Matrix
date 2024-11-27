/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:54:54 by ljerinec          #+#    #+#             */
/*   Updated: 2024/11/27 14:34:42 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct Vector {
	Vector(void);
	Vector(float *vector);
	Vector(const Vector &src);
	~Vector();

    int size() const;

	Vector &operator=(Vector const &rhs);
private:
	float *vec;
};

std::ostream &operator<<(std::ostream &out, const Vector &rhs);
