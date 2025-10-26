/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:51:20 by yoshin            #+#    #+#             */
/*   Updated: 2025/10/26 21:29:58 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string const &name, Weapon const &weapon)
    : weapon(weapon), name(name) {}

void HumanA::attack(void) {
  std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
