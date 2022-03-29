// Uncle Fyodor, Matroskin the Cat and Sharic the Dog live their simple but happy lives in Prostokvashino. Sometimes they receive parcels
// from Uncle Fyodor’s parents and sometimes from anonymous benefactors, in which case it is hard to determine to which one of them the
// package has been sent. A photographic rifle is obviously for Sharic who loves hunting and fish is for Matroskin, but for whom was a new
// video game console meant? Every one of the three friends claimed that the present is for him and nearly quarreled. Uncle Fyodor had an
// idea how to solve the problem justly: they should suppose that the console was sent to all three of them and play it in turns. Everybody
// got relieved but then yet another burning problem popped up — who will play first? This time Matroskin came up with a brilliant solution,
// suggesting the most fair way to find it out: play rock-paper-scissors together. The rules of the game are very simple. On the count of
// three every player shows a combination with his hand (or paw). The combination corresponds to one of three things: a rock, scissors or
// paper. Some of the gestures win over some other ones according to well-known rules: the rock breaks the scissors, the scissors cut the
// paper, and the paper gets wrapped over the stone. Usually there are two players. Yet there are three friends, that’s why they decided
// to choose the winner like that: If someone shows the gesture that wins over the other two players, then that player wins. Otherwise,
// another game round is required. Write a program that will determine the winner by the gestures they have shown.

// Input
// The first input line contains the name of the gesture that Uncle Fyodor showed, the second line shows which gesture Matroskin showed
// and the third line shows Sharic’s gesture.

// Output
// Print "F" (without quotes) if Uncle Fyodor wins. Print "M" if Matroskin wins and "S" if Sharic wins. If it is impossible to find the
// winner, print "?".

// Examples
// inputCopy
// rock
// rock
// rock
// outputCopy
// ?
// inputCopy
// paper
// rock
// rock
// outputCopy
// F
// inputCopy
// scissors
// rock
// rock
// outputCopy
// ?
// inputCopy
// scissors
// paper
// rock
// outputCopy
// ?

/*████████████████████████████████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████████████████████████████████
███████████████████████████▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓▓▓╬╬╬╬╬╬▓███████████████████████
███████████████████████████▓███████▓▓╬╬╬╬╬╬╬╬╬╬╬╬▓███▓▓▓▓█▓╬╬╬▓███████████████████████
███████████████████████████████▓█████▓▓╬╬╬╬╬╬╬╬▓███▓╬╬╬╬╬╬╬▓╬╬▓███████████████████████
████████████████████████████▓▓▓▓╬╬▓█████╬╬╬╬╬╬███▓╬╬╬╬╬╬╬╬╬╬╬╬╬███████████████████████
███████████████████████████▓▓▓▓╬╬╬╬╬╬▓██╬╬╬╬╬╬▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
████████████████████████████▓▓▓╬╬╬╬╬╬╬▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
███████████████████████████▓█▓███████▓▓███▓╬╬╬╬╬╬▓███████▓╬╬╬╬▓███████████████████████
████████████████████████████████████████▓█▓╬╬╬╬╬▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬███████████████████████
███████████████████████████▓▓▓▓▓▓▓╬╬▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
████████████████████████████▓▓▓╬╬╬╬▓▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
███████████████████████████▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
█████████████████████████████▓▓▓▓▓▓▓▓█▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
█████████████████████████████▓▓▓▓▓▓▓██▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬████████████████████████
█████████████████████████████▓▓▓▓▓████▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬████████████████████████
████████████████████████████▓█▓▓▓▓██▓▓▓▓██╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬████████████████████████
████████████████████████████▓▓███▓▓▓▓▓▓▓██▓╬╬╬╬╬╬╬╬╬╬╬╬█▓╬▓╬╬▓████████████████████████
█████████████████████████████▓███▓▓▓▓▓▓▓▓████▓▓╬╬╬╬╬╬╬█▓╬╬╬╬╬▓████████████████████████
█████████████████████████████▓▓█▓███▓▓▓████╬▓█▓▓╬╬╬▓▓█▓╬╬╬╬╬╬█████████████████████████
██████████████████████████████▓██▓███████▓╬╬╬▓▓╬▓▓██▓╬╬╬╬╬╬╬▓█████████████████████████
███████████████████████████████▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬██████████████████████████
███████████████████████████████▓▓██▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓██████████████████████████
████████████████████████████████▓▓▓█████▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████████
█████████████████████████████████▓▓▓█▓▓▓▓▓███▓╬╬╬╬╬╬╬╬╬╬╬▓████████████████████████████
██████████████████████████████████▓▓▓█▓▓▓╬▓██╬╬╬╬╬╬╬╬╬╬╬▓█████████████████████████████
███████████████████████████████████▓▓█▓▓▓▓███▓╬╬╬╬╬╬╬╬╬▓██████████████████████████████
██████████████████████████████████████▓▓▓███▓▓╬╬╬╬╬╬╬╬████████████████████████████████
███████████████████████████████████████▓▓▓██▓▓╬╬╬╬╬╬▓█████████████████████████████████
██████████████████████████████████████████████████████████████████████████████████████
 */
/*



 __    __                         __ __                          __                    ______   ______  _______   ______       __
|  \  |  \                       |  \  \                        |  \                  /      \ /      \|       \ /      \     |  \
| ▓▓  | ▓▓ ______   ______   ____| ▓▓\▓▓_______   ______       _| ▓▓_    ______      |  ▓▓▓▓▓▓\  ▓▓▓▓▓▓\ ▓▓▓▓▓▓▓\  ▓▓▓▓▓▓\     \▓▓ _______  ______
| ▓▓__| ▓▓/      \ |      \ /      ▓▓  \       \ /      \     |   ▓▓ \  /      \     | ▓▓__| ▓▓ ▓▓   \▓▓ ▓▓__/ ▓▓ ▓▓   \▓▓    |  \/       \|      \
| ▓▓    ▓▓  ▓▓▓▓▓▓\ \▓▓▓▓▓▓\  ▓▓▓▓▓▓▓ ▓▓ ▓▓▓▓▓▓▓\  ▓▓▓▓▓▓\     \▓▓▓▓▓▓ |  ▓▓▓▓▓▓\    | ▓▓    ▓▓ ▓▓     | ▓▓    ▓▓ ▓▓          | ▓▓  ▓▓▓▓▓▓▓ \▓▓▓▓▓▓\
| ▓▓▓▓▓▓▓▓ ▓▓    ▓▓/      ▓▓ ▓▓  | ▓▓ ▓▓ ▓▓  | ▓▓ ▓▓  | ▓▓      | ▓▓ __| ▓▓  | ▓▓    | ▓▓▓▓▓▓▓▓ ▓▓   __| ▓▓▓▓▓▓▓| ▓▓   __     | ▓▓\▓▓    \ /      ▓▓
| ▓▓  | ▓▓ ▓▓▓▓▓▓▓▓  ▓▓▓▓▓▓▓ ▓▓__| ▓▓ ▓▓ ▓▓  | ▓▓ ▓▓__| ▓▓      | ▓▓|  \ ▓▓__/ ▓▓    | ▓▓  | ▓▓ ▓▓__/  \ ▓▓     | ▓▓__/  \    | ▓▓_\▓▓▓▓▓▓\  ▓▓▓▓▓▓▓
| ▓▓  | ▓▓\▓▓     \\▓▓    ▓▓\▓▓    ▓▓ ▓▓ ▓▓  | ▓▓\▓▓    ▓▓       \▓▓  ▓▓\▓▓    ▓▓    | ▓▓  | ▓▓\▓▓    ▓▓ ▓▓      \▓▓    ▓▓    | ▓▓       ▓▓\▓▓    ▓▓
 \▓▓   \▓▓ \▓▓▓▓▓▓▓ \▓▓▓▓▓▓▓ \▓▓▓▓▓▓▓\▓▓\▓▓   \▓▓_\▓▓▓▓▓▓▓        \▓▓▓▓  \▓▓▓▓▓▓      \▓▓   \▓▓ \▓▓▓▓▓▓ \▓▓       \▓▓▓▓▓▓      \▓▓\▓▓▓▓▓▓▓  \▓▓▓▓▓▓▓
                                                |  \__| ▓▓
                                                 \▓▓    ▓▓
             */

#pragma comment(linker, "/stack:20000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")

#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <cstdint>
#include <cstring>
#include <string>
#include <cstdlib>
#include <vector>
#include <bitset>
#include <map>
#include <queue>
#include <ctime>
#include <stack>
#include <set>
#include <list>
#include <random>
#include <deque>
#include <functional>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <complex>
#include <numeric>
#include <immintrin.h>
#include <cassert>
#include <array>

using namespace std;

#ifdef LOCAL
#define CURTIME() cerr << clock() * 1.0 / CLOCKS_PER_SEC << endl
#else
#define CURTIME() ;
#endif
double __begin;
#define DTIME(ccc)     \
    __begin = clock(); \
    ccc;               \
    cerr << "Time of work = " << (clock() - __begin) / CLOCKS_PER_SEC << endl;

#define mp make_pair
typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef int itn;

template <class T1, class T2, class T3>
struct triple
{
    T1 a;
    T2 b;
    T3 c;
    triple() : a(T1()), b(T2()), c(T3()){};
    triple(T1 _a, T2 _b, T3 _c) : a(_a), b(_b), c(_c) {}
};
template <class T1, class T2, class T3>
bool operator<(const triple<T1, T2, T3> &t1, const triple<T1, T2, T3> &t2)
{
    if (t1.a != t2.a)
        return t1.a < t2.a;
    else if (t1.b != t2.b)
        return t1.b < t2.b;
    else
        return t1.c < t2.c;
}
template <class T1, class T2, class T3>
bool operator>(const triple<T1, T2, T3> &t1, const triple<T1, T2, T3> &t2)
{
    if (t1.a != t2.a)
        return t1.a > t2.a;
    else if (t1.b != t2.b)
        return t1.b > t2.b;
    else
        return t1.c > t2.c;
}
#define tri triple<int, int, int>
#define trll triple<ll, ll, ll>

#define FI(n) for (int i = 0; i < (n); ++i)
#define FJ(n) for (int j = 0; j < (n); ++j)
#define FK(n) for (int k = 0; k < (n); ++k)
#define FL(n) for (int l = 0; l < (n); ++l)
#define FQ(n) for (int q = 0; q < (n); ++q)
#define FOR(i, a, b) for (int i = (a), __e = (int)(b); i < __e; ++i)
#define all(a) std::begin(a), std::end(a)
#define reunique(v) v.resize(unique(v.begin(), v.end()) - v.begin())

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    if (s1 == "rock")
    {
        if (s2 == "scissors" && s3 == "scissors")
            cout << "F\n";
        else if (s2 == "paper" && s3 == "rock")
            cout << "M\n";
        else if (s2 == "rock" && s3 == "paper")
            cout << "S\n";
        else
            cout << "?\n";
    }
    else if (s1 == "paper")
    {
        if (s2 == "rock" && s3 == "rock")
            cout << "F\n";
        else if (s2 == "scissors" && s3 == "paper")
            cout << "M\n";
        else if (s2 == "paper" && s3 == "scissors")
            cout << "S\n";
        else
            cout << "?\n";
    }
    else if (s1 == "scissors")
    {
        if (s2 == "paper" && s3 == "paper")
            cout << "F\n";
        else if (s2 == "rock" && s3 == "scissors")
            cout << "M\n";
        else if (s2 == "scissors" && s3 == "rock")
            cout << "S\n";
        else
            cout << "?\n";
    }
    return 0;
}