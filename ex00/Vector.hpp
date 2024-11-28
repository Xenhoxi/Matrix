/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:54:54 by ljerinec          #+#    #+#             */
/*   Updated: 2024/11/28 15:34:35 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct Vector {
	Vector(void);
	Vector(float *vector, unsigned long byte_size);
	Vector(const Vector &src);
	~Vector();

    int		size() const;
	void	display();

	Vector &operator=(Vector const &rhs);
private:
	float			*_vec;
	unsigned int	_size;
};

std::ostream &operator<<(std::ostream &out, const Vector &rhs);
