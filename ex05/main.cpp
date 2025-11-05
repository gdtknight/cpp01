/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:12:03 by yoshin            #+#    #+#             */
/*   Updated: 2025/11/05 18:57:07 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>
#include <iostream>

int main(void) {
  Harl harl;

  std::cout << "----- Debug Level -----" << std::endl << std::endl;
  harl.complain("DEBUG");
  std::cout << std::endl;

  std::cout << "----- Info Level -----" << std::endl << std::endl;
  harl.complain("INFO");
  std::cout << std::endl;

  std::cout << "----- Warning Level -----" << std::endl << std::endl;
  harl.complain("WARNING");
  std::cout << std::endl;

  std::cout << "----- Error Level -----" << std::endl << std::endl;
  harl.complain("ERROR");
  return (EXIT_SUCCESS);
}
