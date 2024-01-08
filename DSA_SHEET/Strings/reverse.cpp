//Print reverse of a string using recursion
void reverse(string s)
{
    if(s.size() == 0)
        return;
    reverse(s.substr(1));
    cout << s[0];
}
