/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:27:24 by yoshin            #+#    #+#             */
/*   Updated: 2025/10/24 20:12:36 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
  Zombie *zombieHorde;

  zombieHorde = new Zombie[N];
  for (int idx = 0; idx < N; idx++)
    zombieHorde[idx] = name;
  return (zombieHorde);
}
