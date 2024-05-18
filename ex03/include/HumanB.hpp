/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 20:20:10 by ychng             #+#    #+#             */
/*   Updated: 2024/05/18 22:56:40 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef humanb_hpp
# define humanb_hpp

# include <string>
# include "Weapon.hpp"

class HumanB
{
public:
	explicit HumanB(const std::string& name);

	void attack(void) const;
	void setWeapon(Weapon& weapon);
private:
	std::string name;
	Weapon* weapon;
};

#endif