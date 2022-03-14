#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    int ret_val;
    std::string infile_name;
    std::string outfile_name;
    std::string s1;
    std::string s2;
    std::string buffer;
    std::size_t find_position;

    ret_val = false;
    if (argc != 4)
    {
        std::cout << "Error: <infile> <string to find> <replacement string>" << std::endl;
        ret_val = true;
    }
    else
    {
        infile_name = argv[1];
        s1 = argv[2];
        s2 = argv[3];
        outfile_name = infile_name;
        outfile_name.append(".replace");

        std::ifstream   infile(infile_name, std::ios_base::in);
        if (!infile)
        {
            std::cout << "Error: can't open infile " << infile_name << std::endl;
            ret_val = true;
        }
        if (ret_val == false)
        {
            std::ofstream   outfile(outfile_name, std::ios_base::out);
            if (!outfile)
            {
                std::cout << "Error: can't open outfile " << outfile_name << std::endl;
                ret_val = true;
            }
            else
            {
                while (!infile.eof())
                {
                    getline(infile, buffer);
                    while ( ( find_position = buffer.find(s1) ) != std::string::npos )
                    {
                        buffer.erase(find_position, s1.length());
                        buffer.insert(find_position, s2);
                    }
                    outfile << buffer;
                    if (infile.eof())
                        break ;
                    outfile << std::endl;
                }
            }
            outfile.close();
        }
        infile.close();

        // ################### TESTS ######################
        std::cout << "\n#### CHECK PARSING ####" << std::endl;
        std::cout << "infile_name: " << infile_name << std::endl;
        std::cout << "outfile_name: " << outfile_name << std::endl;
        std::cout << "s1: " << s1 << std::endl;
        std::cout << "s2: " << s2 << std::endl;

    }
    return (ret_val);
}
