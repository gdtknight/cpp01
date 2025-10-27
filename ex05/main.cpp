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

int main(void) {
  Harl harl;

  std::cout << "----- Debug Level -----" << std::endl;
  std::cout << std::endl;
  harl.complain("debug");
  std::cout << std::endl;
  std::cout << "----- Info Level -----" << std::endl;
  std::cout << std::endl;
  harl.complain("info");
  std::cout << std::endl;
  std::cout << "----- Warning Level -----" << std::endl;
  std::cout << std::endl;
  harl.complain("warning");
  std::cout << std::endl;
  std::cout << "----- Error Level -----" << std::endl;
  std::cout << std::endl;
  harl.complain("error");
  return (EXIT_SUCCESS);
}
