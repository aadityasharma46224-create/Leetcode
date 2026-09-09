class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>student;
        stack<int>sandwich;
        int m = students.size();
        int n = sandwiches.size();
        for(int i=0; i<m; i++)
        {
            student.push(students[i]);
        }
        for(int i=n-1; i>=0; i--)
        {
            sandwich.push(sandwiches[i]);
        }
        int cnt = 0;
        while(!student.empty())
        {
            if(sandwich.top()==student.front())
            {
                sandwich.pop();
                student.pop();
                cnt=0;
            }
            else
            {
                student.push(student.front());
                student.pop();
                cnt++;
            }
            if(cnt==student.size())
            {
                break;
            }
        }
        return student.size();
    }
};