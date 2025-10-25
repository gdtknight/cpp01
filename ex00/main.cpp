/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:35:48 by yoshin            #+#    #+#             */
/*   Updated: 2025/10/24 16:35:48 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

int main(void) {
  Zombie *zombie;

  zombie = newZombie("newZombie");
  zombie->announce();
  delete zombie;
  randomChump("another zombie");
  return (EXIT_SUCCESS);
}
