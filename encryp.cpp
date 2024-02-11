#include "encryp.h"
#include <fstream>
#include <cctype>

using namespace std;

bool CeaserCipher(string &content, bool encrypt)
{
    int shift = encrypt ? 3 : -3; // Determine the shift value for encryption or decryption

    for (char &ch : content) // Loop through each character in the content
    {
        if (isalnum(ch)) // Check if the character is an alphabet letter or a digit
        {
            char base;

            if (isupper(ch)) {
                base = 'A';
                ch = static_cast<char>((ch - base + shift + 26) % 26 + base);
            }
            else if (islower(ch)) {
                base = 'a';
                ch = static_cast<char>((ch - base + shift + 26) % 26 + base);
            }
            else if (isdigit(ch)) {
                base = '0';
                ch = static_cast<char>((ch - base + shift + 10) % 10 + base);
            }
        }
    }
    return true; // Return 'true' to indicate success
}


bool encryptfile(const string& filename, bool encrypt)
{
    ifstream inFile(filename); // Open an input stream for the specified file
    if(!inFile) // Check if the file could not open
    {
        return false;
    }

    string content((istreambuf_iterator<char>(inFile)), {});
    inFile.close(); // Close the input file

    if(CeaserCipher(content,encrypt))
    {
        ofstream outFile(encrypt ? "encrypted_" + filename : "decrypted_" + filename);
        if(!outFile)
        {
            return false;

        }
        else{
            outFile << content;

        // Close the output file
        outFile.close();
        return true;
        }
        
        return 0;
    }
}
