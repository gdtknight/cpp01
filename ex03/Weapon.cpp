/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:40:03 by yoshin            #+#    #+#             */
/*   Updated: 2025/10/26 21:38:06 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const &type) : type(type) {}

Weapon &Weapon::operator=(std::string const &type) {
  this->type = type;
  return (*this);
}

Weapon &Weapon::operator=(Weapon const &weapon) {
  if (this != &weapon)
    this->type = weapon.type;
  return (*this);
}

std::string const &Weapon::getType(void) const { return (type); }

void Weapon::setType(std::string const &type) { this->type = type; }
