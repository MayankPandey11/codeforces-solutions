            int len = words.size();
            int n = words[0].size();
            map<vector<int>,int>res;
            for(int i=0;i<len;i++)
            {
                    vector<int>var;
                   for(int j=1;j<n;j++)
                   {
                           var.push_back(words[i][j]-words[i][j-1]);
                   }
                    res[var]++;
            }
            vector<int>var1;
            for(auto i : res)
                    if(i.second==1)
                            var1=i.first;
            for(int i=0;i<len;i++)
            {
                    vector<int>var;
                   for(int j=1;j<n;j++)
                   {
                           var.push_back(words[i][j]-words[i][j-1]);
                   }
                   if(var==var1)
                           return(words[i]);
            }
            return(words[0]);