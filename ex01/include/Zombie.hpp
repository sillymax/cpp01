/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:05:22 by ychng             #+#    #+#             */
/*   Updated: 2024/05/17 21:56:24 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
public:
	Zombie(void);
	~Zombie(void);

	void setName(std::string name);
	void announce(void) const;
private:
	std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif