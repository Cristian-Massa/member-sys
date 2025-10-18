// ...existing code...
#pragma once
#include <string>

// forward declaration para evitar depender de sqlite3.h en headers
struct sqlite3;

namespace db {
bool init(const std::string& path);
void close();
bool exec(const std::string& sql);
sqlite3* handle();
}
// ...existing code...