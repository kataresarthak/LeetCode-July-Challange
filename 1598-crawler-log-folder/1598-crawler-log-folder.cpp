class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> folderStack;
        
        for (const string& log : logs) {
            if (log == "../") {
                if (!folderStack.empty())
                    folderStack.pop();
            }
            else if (log != "./") {
                folderStack.push(log);
            }
        }
        return folderStack.size();
    }
};
