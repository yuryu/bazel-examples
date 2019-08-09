#include "lib/hello-time.h"

#include <cstdio>

std::string get_localtime(std::time_t time) {
  const auto* tm = std::localtime(&time);
  const size_t BUFFER_LEN = 22;
  char buf[BUFFER_LEN];
  std::snprintf(buf, BUFFER_LEN, "%04d-%02d-%02d %02d:%02d:%02d", 
                tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday,
                tm->tm_hour, tm->tm_min, tm->tm_sec);
  return std::string(buf);
}
