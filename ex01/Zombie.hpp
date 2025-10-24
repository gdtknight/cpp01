/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:01:06 by yoshin            #+#    #+#             */
/*   Updated: 2025/10/24 16:03:42 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {

public:
  Zombie(void);
  Zombie(std::string name);
  ~Zombie(void);
  void announce(void);

protected:
private:
  std::string name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
