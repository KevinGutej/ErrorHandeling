#include <iostream>

using namespace std;

int main() {
	
  float accountsBalances[] = {5000.2, 512.2, -1, 231, -5.2};
  int i;
  try {
  for(i=0; i < 5; i++) {
  	if(accountsBalances[i] < 0) {
      string error = "";
      error = error + "Client with ID";
      error = error + to_string(i);
      error = error + "has negative balance";
    	throw error;
    }
  }
}catch(string exception) {
	cout << exception;
}
  
  
	return 0;
}



	
