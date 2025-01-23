// This program demonstrates the SimpleVector template.
#include <iostream>
#include "SimpleVector.h"
using namespace std;

int main()
{
    const int SIZE = 10;    // Number of elements
    int count;              // Loop counter

    // Create a SimpleVector of ints.
    SimpleVector<int> intTable(SIZE);

    // Creating a second SimpleVector of ints.
    SimpleVector<int> intTable2(SIZE);

    // Create a SimpleVector of doubles.
    SimpleVector<double> doubleTable(SIZE);

    // Store values in the two SimpleVectors.
    for (count = 0; count < SIZE; count++)
    {
        intTable[count] = (count * 2);
        intTable2[count] = (count * 3); // intTable2 multiplied by 3
        doubleTable[count] = (count * 2.14);
    }

    // Display the values in the SimpleVectors.
    cout << "These values are in intTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << intTable[count] << " ";
    cout << endl;
    cout << "These values are in intTable2: \n"; // display for intTable2
    for (count = 0; count < SIZE; count++) {
        cout << intTable2[count] << " ";
    }
    cout << endl;
    cout << "These values are in doubleTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << doubleTable[count] << " ";
    cout << endl;

    // Use the standard + operator on the elements.
    cout << "\nAdding 5 to each element of intTable"
        << " and doubleTable, and adding 2 to intTable2.\n";
    
    for (count = 0; count < SIZE; count++)
    {
        intTable[count] = intTable[count] + 5;
        intTable2[count] = intTable2[count] + 2; // add 2 to intTable2 values
        doubleTable[count] = doubleTable[count] + 5.0;
    }

    // Display the values in the SimpleVectors.
    cout << "These values are in intTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << intTable[count] << " ";
    cout << endl;
    cout << "These values are in intTable2:\n"; // display for intTable2
    for (count = 0; count < SIZE; count++)
        cout << intTable2[count] << " ";
    cout << endl;
    cout << "These values are in doubleTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << doubleTable[count] << " ";
    cout << endl;

    // Use the standard ++ operator on the elements.
    cout << "\nIncrementing each element of intTable, intTable2 and"
        << " doubleTable.\n";
    for (count = 0; count < SIZE; count++)
    {
        intTable[count]++;
        intTable2[count]++; // increment for intTable2
        doubleTable[count]++;
    }

    // Display the values in the SimpleVectors.
    cout << "These values are in intTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << intTable[count] << " ";
    cout << endl;
     cout << "These values are in intTable2:\n"; // display for intTable2
    for (count = 0; count < SIZE; count++)
        cout << intTable2[count] << " ";
    cout << endl;
    cout << "These values are in doubleTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << doubleTable[count] << " ";
    cout << endl;

    return 0;
}