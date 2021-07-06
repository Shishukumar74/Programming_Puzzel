int solve(vector<int>& piles) {
    sort(piles.begin(), piles.end());
    int total = piles.size() / 3, index = piles.size() - 2, ret = 0;
    while (total--) {
        ret += piles[index];
        index -= 2;
    }
    return ret;
    
}