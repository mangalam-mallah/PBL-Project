#include<iostream> 
#include "encryp.h" // Include the header file for the  function
// #include "encryp.cpp"
using namespace std;

int main()
{
    // Variable to store the user-provided file
    string filename;
    // Variable to store the mode
    char mode;

    cout << "Enter the filename: " ;
    // Takes input from the user for a filename and stores it in 'filename'
    getline(cin >> ws, filename);

    cout << "Encrypt (e) or Decrypt (d) ?" << endl;
    // Takes input from the user for encryption or decryption mode
    cin >> mode;

    if(mode == 'e' || mode == 'E') // condition
    {
        if(encryptfile(filename, true))
        {
            cout << "Encryption completed successfully" << endl;
        }
        else
        {
            cerr << "Error: Unable to encrypt" << endl; // If encryption fails
        }
    }
    else if(mode == 'd' || mode == 'D')
    {
        if(encryptfile(filename, false))
        {
            cout << "Decryption completed successfully" << endl;
        }
        else
        {
            cerr << "Error: Unable to decrypt" << endl; // If decryption fails
        }
    }
    else
    {
        cerr << "Error: Invalid Mode selected" << endl; // If mode is invalid
    }

    return 0;
}
