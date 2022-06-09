//
//  main.cpp
//  login test
//
//  Created by declan on 8/06/22.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    
    vector<string> credentials;
    string temp;
    int i = 0;
    
    ofstream outfile;
    
    outfile.open("Credentials", ios::app);
    
    cout << "enter a username: ";
    getline(cin, temp);
    outfile << "\n" << temp;
    
    cout << "enter a password: ";
    getline(cin, temp);
    outfile << "\n" << temp;
    
    cout << "enter an access level: ";
    getline(cin, temp);
    outfile << "\n" << temp;
    
    outfile.close();
    
    ifstream infile;
    infile.open ("Credentials");
    
    
    while(!infile.eof()){
        getline(infile, temp);
        credentials.push_back(temp);
    }
    
    for (i = 0; i < credentials.size(); i++){
        cout << credentials[i] << "\n";
    }
    
    infile.close();
    
    cout << "\n\n\n";
    return 0;
}
