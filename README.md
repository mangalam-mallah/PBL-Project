# Encryptor Decryptor Tool

This project is a command-line tool that uses the concept of encryption and decryption, specifically utilizing the Caesar cipher, to generate encrypted text (gibberish) and decrypt it back to the original text.

## Functionality
- **File Input**: Prompts the user to input the filename containing the text to be processed.
- **Encryption/Decryption Option**: Asks the user whether they want to encrypt or decrypt the content of the file.
  - **Encryption**: Reads the file and generates a new text file containing the encrypted text.
  - **Decryption**: Reads the file and generates a new text file containing the decrypted text.
- **Error Handling**: The tool includes basic error handling to manage potential issues like incorrect file names or unsupported operations.
- **Language**: This tool is developed using C++.

## How It Works
1. **User Input**: The user is prompted to enter the filename and choose between encryption or decryption.
2. **Processing**:
   - **Encryption**: The tool applies the Caesar cipher to the text, shifting characters to generate the encrypted version.
   - **Decryption**: The tool reverses the Caesar cipher to convert the encrypted text back to its original form.
3. **Output**: A new text file is generated with either the encrypted or decrypted content, depending on the user's choice.

## Setup and Usage
1. Compile the C++ code using a C++ compiler.
2. Run the compiled program.
3. Follow the on-screen prompts to input the filename and choose the desired operation (encryption or decryption).
4. The tool will generate an output text file with the results.

## Example
- **Encryption**: 
  - Input: "Hello World"
  - Encrypted Output: "Khoor Zruog" (using a shift of 3)
- **Decryption**:
  - Input: "Khoor Zruog"
  - Decrypted Output: "Hello World"

## Notes
- The tool uses a simple Caesar cipher with a fixed shift, which can be customized in the code.
- Ensure that the input file exists in the same directory as the executable or provide the correct path.


