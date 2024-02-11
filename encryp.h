#ifndef ENCRYP_H
#define ENCRYP_H

#include <string>

using namespace std;

bool encryptfile(const string& filename, bool encrypt);
bool CeaserCipher(string &content, bool encrypt);

#endif
