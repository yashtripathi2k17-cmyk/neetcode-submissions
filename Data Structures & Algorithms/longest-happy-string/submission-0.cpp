class Solution {
public:
    string longestDiverseString(int a, int b, int c) {

        // Max heap -> character with highest frequency comes first
        priority_queue<pair<int,char>> pq;

        if(a > 0) pq.push({a,'a'});
        if(b > 0) pq.push({b,'b'});
        if(c > 0) pq.push({c,'c'});

        string ans = "";

        while(!pq.empty()) {

            // Take the character with maximum frequency
            pair<int,char> first = pq.top();
            pq.pop();

            int count1 = first.first;
            char ch1 = first.second;

            // Check:
            // Are the last two characters already equal to ch1 ?
            //
            // Example:
            // ans = "cc"
            // ch1 = 'c'
            //
            // Adding c => "ccc" ❌
            //
            // Then we cannot use ch1 now
            if(ans.size() >= 2 &&
               ans[ans.size()-1] == ch1 &&
               ans[ans.size()-2] == ch1)
            {
                // No second character available
                // so we cannot continue
                if(pq.empty())
                    break;

                // Take second highest frequency character
                pair<int,char> second = pq.top();
                pq.pop();

                int count2 = second.first;
                char ch2 = second.second;

                // Use second character once
                ans += ch2;

                // One occurrence used
                count2--;

                // Put it back if still available
                if(count2 > 0)
                    pq.push({count2,ch2});

                // IMPORTANT:
                // We never used ch1
                // so put it back into heap
                pq.push({count1,ch1});
            }
            else
            {
                // Safe to use ch1
                ans += ch1;

                // One occurrence used
                count1--;

                // Put back if still available
                if(count1 > 0)
                    pq.push({count1,ch1});
            }
        }

        return ans;
    }
};