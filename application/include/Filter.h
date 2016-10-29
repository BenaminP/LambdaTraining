/*
 * Filter.h
 *
 *  Created on: 01.03.2015
 *      Author: benjamin
 */

#ifndef SRC_FILTER_H_
#define SRC_FILTER_H_


#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

namespace lambda {

template<class T>

class Filter {

	vector<T> m_values;
	;

	vector<function<void (const vector<T> &)> > m_algorithms;
public:

	void addFilterAlgorithm(function<void (const vector<T> &)> algorithm) {
		m_algorithms.push_back(algorithm);
	}
	void addValue(T value) {
		m_values.push_back(value);

		filter();
	}

	void filter() {
		if(m_algorithms.size()) {
			for_each(m_values.begin(), m_values.end(), [&] (T i) {cout<<i<<flush;});
			cout<<endl;
			for_each(m_algorithms.begin(), m_algorithms.end(), [&] (function<void (const vector<T> &)>  i) {i(m_values);} );
		}
	}
	void rmImplausibleValues (double meanValue, double tolerance) {
		for(auto iter = m_values.begin(); iter != m_values.end(); ++iter) {
			if(! (*iter < (meanValue + meanValue*tolerance)) && (*iter > (meanValue - meanValue*tolerance))) {
				m_values.erase(iter);
			}
		}
		filter();
	}
};

} /* namespace lambda */

#endif /* SRC_FILTER_H_ */
