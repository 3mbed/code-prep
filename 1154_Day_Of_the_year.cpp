class Solution {
public:
    int dayOfYear(string date) {
        // parse the string into 3 vars 

        // int year;
        // int month;
        // int day;
        int parsedInt[3];
        
        char yearStr[5];    memset(yearStr,  '\0', 5);
        char monthStr[3];   memset(monthStr, '\0', 3);
        char dayStr[3];     memset(dayStr,   '\0', 3);
        
        char dateStr[16];   memset(dateStr,  '\0', 16);
        for(int i=0; i<date.length(); i++){
            dateStr[i] = date.at(i);
        }
        int i = 0;
        char* pTok = strtok((char*)dateStr, "-");
        while(pTok != NULL){
            // cout << pTok << endl;
            parsedInt[i] = atoi(pTok);
            pTok = strtok(NULL, "-");
            i++;
        }
        
        // cout<< parsedInt[0] << endl;
        // cout<< parsedInt[1] << endl;
        // cout<< parsedInt[2] << endl;
        

        // need to check if the year is leap year or not 
        // every year that is exactly divisble by 4 is a leap year
        bool isLeapYr = false;
        if ( (parsedInt[0]%4) == 0 ){
            // cout << " is a Leap Year" << endl;

        // To be a leap year, the year number must be divisible by four – 
        // except for end-of-century years, which must be divisible by 400. 
        // This means that the year 2000 was a leap year, although 1900 was not.

            if( (parsedInt[0] == 1900) || (parsedInt[0] == 3000) ){
                isLeapYr = false;
            }
            else{
                isLeapYr = true;
            }
        }
        else{
            // cout << " NOT Leap Year" << endl;
            isLeapYr = false;
        }
        // in a loop till the end of the month either multiply by 30 or 31 and add to the no of days 
        // if leapyear on februrary multiply by 29
        
        int totalDays = 0;
        int completeMonthDays  = 30;
        for(int m=1; m<parsedInt[1]; m++){
            switch(m){
                case 1: completeMonthDays = 31;  break;  // jan 31
                case 2:                         // feb 28
                    if(isLeapYr) {
                        completeMonthDays = 29;
                    }else{
                        completeMonthDays = 28;
                    }
                    break;
                case 3: completeMonthDays = 31;  break; // march 31
                case 4: completeMonthDays = 30;  break; // April 30
                case 5: completeMonthDays = 31;  break; // May   31
                case 6: completeMonthDays = 30;  break; // June  30
                case 7: completeMonthDays = 31;  break; // July  31
                case 8: completeMonthDays = 31;  break; // aug   31
                case 9: completeMonthDays = 30;  break; // Sept  30
                case 10: completeMonthDays = 31;  break; // Oct   31
                case 11: completeMonthDays = 30;  break; // Nov   30
                case 12: completeMonthDays = 31;  break; // Dec   31
                default: break;
            }
            totalDays = totalDays + completeMonthDays ; 
        }
        
        totalDays = totalDays + parsedInt[2];
        return totalDays;
    }
};