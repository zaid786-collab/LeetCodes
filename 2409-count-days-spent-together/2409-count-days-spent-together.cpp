class Solution {
    int convert(string date) {
        vector<int> days = {31,28,31,30,31,30,31,31,30,31,30,31};

        int months = stoi(date.substr(0,2));
        int day = stoi(date.substr(3,2));

        for(int i=0;i< months - 1;i++) {
            day += days[i];
        }

        return day;
    }
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        
        int a1 = convert(arriveAlice);
        int a2 = convert(leaveAlice);
        int b1 = convert(arriveBob);
        int b2 = convert(leaveBob);

        return max(0, min(a2,b2) - max(a1,b1) + 1);
    }
};