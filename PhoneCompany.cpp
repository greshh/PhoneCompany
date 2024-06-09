/* Greshka Lao - Phone Company */
// Completed 19.05.2022

// An example "plans.txt" is included for testing.

// This program assumes the maximum number of customers shown in this file is 100,
// and that plan.txt is created in the correct format as per the prompt.

/* PROCEDURE
    (1)  Open plans.txt and read its contents line by line.
    (2a) For each line, split the line by ";".
    (2b) Store the name, phone number, data and call minutes to their correlating variables.
    (3)  Calculate the total cost for the customer using the given rates.
    (4)  Display the customer according to the given format.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

void separate(string line);
void display();

int data[100], callmins[100], txts[100], count;
float totalcost[100];
fstream plans;
string filename, name[100], phone[100], line;

int main() {
  filename = "plans.txt";
  plans.open(filename.c_str(), fstream::in);
  count = 0;
  while (getline(plans, line)) {
    separate(line);
    display();
    count++;
  }
  plans.close();
}

void separate(string line) {
  int i, length;
  i = 0;
  data[count] = 0;
  callmins[count] = 0;
  txts[count] = 0;
  length = line.length();
  while (line[i] != ';') {
    name[count] = name[count] + line[i];
    i++;
  } // setting up "name"
  i++;
  while (line[i] != ';') {
    phone[count] = phone[count] + line[i];
    i++;
  } // setting up "phone number"
  i++;
  while (line[i] != ';') {
    data[count] = data[count] * 10;
    data[count] = data[count] + (line[i] - 48);
    i++;
  } // setting up "data"
  i++;
  while (line[i] != ';') {
    callmins[count] = callmins[count] * 10;
    callmins[count] = callmins[count] + (line[i] - 48);
    i++;
  } // setting up "call minutes"
  i++;
  while (i < length) {
    txts[count] = txts[count] * 10;
    txts[count] = txts[count] + (line[i] - 48);
    i++;
  }
  totalcost[count] = (data[count] * 0.1) + (callmins[count] * 0.04) + (txts[count] * 0.03);
}

void display() {
  cout << name[count] << " (" << phone[count] << ") " << data[count] << "MB ";
  cout << callmins[count] << "mins " << txts[count] << "txt Plan costs $";
  cout << setprecision(2) << fixed << totalcost[count] << endl;
}
