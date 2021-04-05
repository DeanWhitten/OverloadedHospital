#include <iostream>

using namespace std;
/*
 * This program Computes and displays the charges for a patient's hospital stay and then saves the data to a local file.
 *
 * First, the program asks if the patient was admitted  as an inpatient or an outpatient.
 *
 * If the patient was an inpatient, the following data should be entered:
 *      1) The number of days spent in the hospital. *
 *      2) The daily rate *
 *      3) Hospital Medication Charges
 *      4) Charges for hospital services (lab tests, etc.)
 *
 * The program then asks for the following data if the patient was outpatient:
 *      1) Charges for hospital services (lab tests, etc.)
 *      2) Hospital medication charges
 *
 * The program uses two overloaded functions to calculate the total charges.
 *      1) accepts arguments for the inpatient data.
 *      2) accepts arguments for out patient information
 *
 * Both functions return total charges.
 *
 * input validation : no negative numbers accepted for any data.
 *
 */

// function for asking # of days. Also checks to make sure the number is positive and at least 1 day.
int numDays(int d){
    cout << "How many days was the stay?" << endl;
    cin >> d;
    if (d < 1 ){
        cout << "ERROR: NUMBER BUST BE A POSITIVE NUMBER" << endl;
        cout << "How many days was the stay?" << endl;
        cin >> d;
    } else{
        return d;
    }
    return d;
}

// function for asking the daily rate of a visit. Also checks to make sure a number is positive , and above 1.
double dailyRate (double dR){
    cout << "What was he daily rate?" << endl;
    cin >> dR;
    if ( dR < 1){
        cout << "ERROR: NUMBER BUST BE A POSITIVE NUMBER" << endl;
        cout << "What was he daily rate?" << endl;
        cin >> dR;
    } else {
        return dR;
    }
    return dR;
}


// Function that calls the other necessary functions for an inpatient billing.
int inpatient(){
    int days = numDays(0);
    double rate = dailyRate(0);

    cout << days << "  " << rate << endl;  // temp input checker/ function testing
    return 0;
}

// Function that calls the other necessary functions for an Outpatient billing.
int outpatient(){
    cout << 2;
    return 0;
}



int main() {
    string answer;


    cout << "Was patient admitted as an inpatient or an outpatient?" << endl;
    cin >> answer;

    if (answer == "inpatient"){
        inpatient();
    } else if ( answer == "outpatient"){
        outpatient();
    } else {
        cout << "Sorry " << answer << " is an invalid input" << endl;
        main();
    }

    return 0;
}
