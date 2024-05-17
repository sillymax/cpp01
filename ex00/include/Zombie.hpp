/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:30:34 by ychng             #+#    #+#             */
/*   Updated: 2024/05/17 20:56:46 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
public:
	explicit Zombie(std::string name);
	~Zombie(void);

	void announce(void);
private:
	std::string name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
