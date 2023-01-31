// VERY simple script to just run 7zip on extract mode on double-click of a zip-file.
#include <iostream>

int main(int argc, char* argv[])
{
    std::string output = "7z.exe x \"" ;

    output.append(argv[1]); // appendinrg the filepath
    output.append("\" -o* -aou");  // appending final quotation mark and arguments

    std::system(output.c_str()); // outputs the command to the windows command-line
    return 0;
}

