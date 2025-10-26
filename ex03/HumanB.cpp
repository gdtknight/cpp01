/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:58:00 by yoshin            #+#    #+#             */
/*   Updated: 2025/10/26 21:50:26 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

#include <iostream>

HumanB::HumanB(std::string const &name) : name(name) { weapon = NULL; }

HumanB::~HumanB(void) {}

void HumanB::setWeapon(Weapon &weapon) { this->weapon = &weapon; }

void HumanB::attack(void) {
  if (!weapon) {
    std::cout << name << " has no weapon. " << std::endl;
    return;
  }
  std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
