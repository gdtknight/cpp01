/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:57:19 by yoshin            #+#    #+#             */
/*   Updated: 2025/10/26 21:42:23 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
public:
  HumanB(std::string const &name = "unknown");
  ~HumanB(void);

  void setWeapon(Weapon &weapon);
  void attack(void);

protected:
private:
  Weapon *weapon;
  std::string name;
};

#endif
