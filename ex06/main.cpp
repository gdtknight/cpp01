/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:12:03 by yoshin            #+#    #+#             */
/*   Updated: 2025/10/27 16:12:03 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[]) {
  Harl harl;

  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <level>\n"
              << "  <level> : one of DEBUG, INFO, WARNING, ERROR\n"
              << "Display messages from Harl at the specified level.\n";
    return (EXIT_SUCCESS);
  }
  harl.complain(argv[1]);
  return (EXIT_SUCCESS);
}
