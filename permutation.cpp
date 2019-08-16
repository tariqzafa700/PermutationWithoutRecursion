void permutation(vector<string>& vec, char ch)
{
    vector<string> vecReset;
    for (int k = 0; k < vec.size(); ++k)
    {
        int sz = vec[k].size();
        string orig = vec[k];
        if (sz == 0 && vec.size() > 1) 
        {
            continue;
        }
        for (int i = 0; i <= sz; ++i)
        {
            string up = orig.insert(i, 1, ch);
            vecReset.push_back(up);
            orig = vec[k];
        }
    }
    vec.clear();
    vec = vecReset;
}

int main(int, char**) {
    string input = "abcde";
    vector<string> myVec = {""};
    for (int i = 0; i < input.size(); ++i)
    {
        permutation(myVec, input[i]);
    }
    std::copy(myVec.begin(), myVec.end(), std::ostream_iterator<string>(std::cout, "\n"));
}


