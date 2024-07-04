#include <fstream>
#include <string>
#include <iostream>
#include <algorithm>
#include <unordered_map> 


using namespace std;

int main(){
int total = 0;
unordered_map<int, int> umap; 


ifstream ifs("input.txt");
ofstream ofs("output.txt");
for (string line; getline(ifs, line); ) 
{
    int first_pos = 100000; 
    int last_pos = -2; 
    int first = 100000;
    int last = 0;
    umap[1] = line.find("one");
    umap[2] = line.find("two");
    umap[3] = line.find("three");
    umap[4] = line.find("four");
    umap[5] = line.find("five");
    umap[6] = line.find("six");
    umap[7] = line.find("seven");
    umap[8] = line.find("eight");
    umap[9] = line.find("nine");
    for (auto x : umap){
        if ((x.second < first_pos) && (x.second >= 0)){
          first = x.first;
          first_pos = x.second;  
        } 
        if (x.second > last_pos && (x.second >= 0)){ 
        last = x.first;
        last_pos = x.second;
        }
    }


    
    for (int i = 0; i < line.size(); i++)
    {
        if (line[i] < 66)
        {
            if (i < first_pos){
                first = (int)line[i] - 48;
                first_pos = i;
            }
            if (i > last_pos)
            {
                last = (int)line[i] - 48;
                last_pos = i;
            }
            
        }
    }
        if(line.find("one", last_pos) != string::npos ){
            last = 1;
            last_pos = line.find("one", last_pos);
        }
        if(line.find("two", last_pos) != string::npos){
            last = 2;
            last_pos = line.find("two", last_pos);
        }
        if(line.find("three", last_pos) != string::npos){
            last = 3;
            last_pos = line.find("three", last_pos);
        }
        if(line.find("four", last_pos) != string::npos){
            last = 4;
            last_pos = line.find("four", last_pos);
        }
        if(line.find("five", last_pos) != string::npos){
            last = 5;
            last_pos = line.find("five", last_pos);
        }
        if(line.find("six", last_pos) != string::npos){
            last = 6;
            last_pos = line.find("six", last_pos);
        }
        if(line.find("seven", last_pos) != string::npos){
            last = 7;
            last_pos = line.find("seven", last_pos);
        }
        if(line.find("eight", last_pos) != string::npos){
            last = 8;
            last_pos = line.find("eight", last_pos);
        }
        if(line.find("nine", last_pos) != string::npos){
            last = 9;
            last_pos = line.find("nine", last_pos);
        }
    ofs << first << last << "        ";
    ofs << first_pos << " " << last_pos;
    ofs << endl;
    total += (first * 10) + last; 
}
ofs << total << "\n";
return 0;

}