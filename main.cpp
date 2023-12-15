#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(){
int total = 0;
ifstream ifs("input.txt");
ofstream ofs("output.txt");
for (string line; getline(ifs, line); ) 
{
    int first = 100;
    int last = 0;
    for (size_t i = 0; i < line.size(); i++)
    {
        if (line[i] < 66)
        {
            if (first == 100){
                first = (int)line[i] - 48;
            }
            last = (int)line[i] - 48;
        }
    }
    total += (first * 10) + last; 
}
ofs << total << endl;



}