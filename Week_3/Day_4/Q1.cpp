class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int len = temperatures.size();
        vector<int> answer(len, 0);
        stack<int> indices;

        for (int i = 0; i < len; i++) {

            while (!indices.empty() && temperatures[i] > temperatures[indices.top()]) {

                int prev = indices.top();
                indices.pop();

                answer[prev] = i - prev;
            }

            indices.push(i);
        }

        return answer;
    }
};