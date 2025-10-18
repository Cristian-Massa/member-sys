#include "database.h"
#include <sqlite3.h>
#include <iostream>

static sqlite3* g_db = nullptr;