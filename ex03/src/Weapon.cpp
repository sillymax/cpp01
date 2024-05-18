/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 20:24:00 by ychng             #+#    #+#             */
/*   Updated: 2024/05/18 20:25:49by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

const std::string& Weapon::getType(void) const
{
	return type;
}

void Weapon::setType(const std::string& type)
{
	this->type = type;
}

Weapon::Weapon(const std::string& type)
{
	setType(type);
}