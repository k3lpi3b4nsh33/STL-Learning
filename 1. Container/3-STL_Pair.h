/*****************************************************************//**
 * file   3-STL_Pair.h
 * author Leviathan
 * date   January 2023
 * brief
 *********************************************************************/

#ifndef l3vi4th4n_3_STL_PAIR_H
#define l3vi4th4n_3_STL_PAIR_H

#include "STL_Config.h"

__STL_BEGIN_NAMESPACE

template<class _T1, class _T2>
struct pair
{
	typedef _T1, first_type;
	typedef _T2, second_type;

	_T1 first;
	_T2 second;

	pair():first(_T1()),second(_T2()) {}

	pair(const _T1 &__a, const _T2 &__b) : first(__a), second(__b) {}

	template<class _U1, class _U2>
	pair(const pair<_U1, _U2> &__p) : first(__p.first), second(__p.second) {}
};

template<class _T1, class _T2>
inline bool operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
{
	return __x.first == __y.first && __x.second == __y.second;
}

template<class _T1, class _T2>
inline bool operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
{
	return __x.first < __y.first || (!(__y.first < __x.first) && (__x.second < __y.second));
}

template<class _T1, class _T2>
inline bool operator!=(const pair <_T1, _T2>& __x, const pair<_T1, _T2>& __y)
{
	return !(__x == __y);
}
template<class _T1, class _T2>
inline bool operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y) 
{
    return __y < __x;
}

template<class _T1, class _T2>
inline bool operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y) 
{
    return !(__y < __x);
}

template<class _T1, class _T2>
inline bool operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y) 
{
    return !(__x < __y);
}

template<class _T1, class _T2>
inline pair<_T1, _T2> make_pair(const _T1& __x, const _T2& __y)
{
    return pair<_T1, _T2>(__x, __y);
}

__STL_END_NAMESPACE


#endif // !l3vi4th4n_3_STL_PAIR_H
