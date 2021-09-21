#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	char s[200];
int i;
int x[26];
printf( "input:");
scanf( "%s", s );
for(i=0;i<26; i++)
x[i] = 0;
for(i=0; i<strlen(s); i++ )
{
if( s[i] >= 'a' && s[i] <= 'z' )
{
x[s[i]-'a']++;
}
else if( s[i] >= 'A' && s[i] <= 'Z' )
{
x[s[i]-'A']++;
}
}
for(i=0; i<26; i++)
{
printf( "%c:%3d\n", i+'a', x[i] );
}

	return 0;
}

