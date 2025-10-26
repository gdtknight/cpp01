/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:48:47 by yoshin            #+#    #+#             */
/*   Updated: 2025/10/26 21:30:08 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
public:
  HumanA(std::string const &name = "unknown", Weapon const &weapon = Weapon());
  void attack(void);

protected:
private:
  const Weapon &weapon;
  const std::string name;
};

#endif
