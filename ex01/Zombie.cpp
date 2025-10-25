/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:47:52 by yoshin            #+#    #+#             */
/*   Updated: 2025/10/25 16:47:52 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <ostream>

Zombie::Zombie(std::string const &name) : name(name) {}

Zombie::~Zombie(void) { std::cout << this->name << std::endl; }

Zombie *Zombie::operator=(std::string const &name) {
  this->name = name;
  return (this);
}

Zombie *Zombie::operator=(Zombie &zombie) {
  if (this != &zombie)
    this->name = zombie.name;
  return (this);
}

void Zombie::setName(std::string const &name) { this->name = name; }

void Zombie::announce(void) {
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
