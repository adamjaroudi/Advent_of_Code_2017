#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::vector<long> convert_to_vector(long line){
    std::vector<long> line_numbers;
    while (line>0){
        line_numbers.push_back(line%10);
        line/=10;
    }
    return line_numbers;
}

int find_matches(std::vector<long> line){

    int sum =0;

    for (int i=0;i<line.size();i++){


        if (line[i]==line[i+1]){
            sum+=(line[i]);
        }
    }
    return sum;
}




int main() {

    // Input file
    std::ifstream input ("input.txt");
    std::string line;

    // Get Lines
    while (std::getline(input,line)){
        int sum = find_matches(convert_to_vector(std::stoll(line)));
        std::cout
        <<"Summary:"
        <<sum
        <<'\n';

    }


    return 0;
}
