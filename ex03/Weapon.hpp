/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:37:29 by yoshin            #+#    #+#             */
/*   Updated: 2025/10/26 21:37:53 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
public:
  Weapon(std::string const &type = "basic");

  Weapon &operator=(std::string const &type);
  Weapon &operator=(Weapon const &weapon);

  std::string const &getType(void) const;
  void setType(std::string const &type);

protected:
private:
  std::string type;
};

#endif
