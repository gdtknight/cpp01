/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:31:19 by yoshin            #+#    #+#             */
/*   Updated: 2025/10/24 20:15:36 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

int main(void) {
  const int N = 5;
  const std::string name = "Walking Dead";
  Zombie *zHorde;

  zHorde = zombieHorde(N, name);

  for (int idx = 0; idx < N; idx++)
    zHorde[idx].announce();

  delete[] zHorde;
  return (EXIT_SUCCESS);
}
