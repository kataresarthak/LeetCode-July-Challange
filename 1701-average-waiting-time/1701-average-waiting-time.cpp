class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double waitTime = 0, currTime = 0;
        int i = 0, j = 0;
        while (i < customers.size()) {
            if (currTime < customers[i][0])
                currTime = customers[i][0];
            waitTime += currTime - customers[i][0] + customers[i][1];
            currTime += customers[i][1];
            i++;
        }
        return waitTime / customers.size();
    }
};