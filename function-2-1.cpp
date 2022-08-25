#include <iostream>

using namespace std;

string month_lookup(int month){
    string lilmonth;
    if (month > 0 && month < 13){
        switch (month){
            case 1:
                lilmonth = "Jan";
                break;
            case 2:
                lilmonth = "Feb";
                break;
            case 3:
                lilmonth = "Mar";
                break;
            case 4:
                lilmonth = "Apr";
                break;
            case 5:
                lilmonth = "May";
                break;
            case 6:
                lilmonth = "Jun";
                break;
            case 7:
                lilmonth = "Jul";
                break;
            case 8:
                lilmonth = "Aug";
                break;
            case 9:
                lilmonth = "Sep";
                break;
            case 10:
                lilmonth = "Oct";
                break;
            case 11:
                lilmonth = "Nov";
                break;
            case 12:
                lilmonth = "Dec";
                break;
        }
    }
    else{
        lilmonth = "invalid month";
    }
    return lilmonth;
}