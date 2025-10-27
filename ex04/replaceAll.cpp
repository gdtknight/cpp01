/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceAll.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:39:11 by yoshin            #+#    #+#             */
/*   Updated: 2025/10/27 13:39:34 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

std::string replaceAll(const std::string &str, const std::string &old_sub,
                       const std::string &new_sub) {
  if (old_sub.empty())
    return str;

  std::string result;
  std::string::size_type pos = 0;
  std::string::size_type prev = 0;

  while ((pos = str.find(old_sub, prev)) != std::string::npos) {
    result.append(str, prev, pos - prev);
    result.append(new_sub);
    prev = pos + old_sub.length();
  }
  result.append(str, prev, str.length() - prev);
  return result;
}
