/*
 * AlgorithmArithmeticMean.h
 *
 *  Created on: 01.03.2015
 *      Author: benjamin
 */

#ifndef SRC_ALGORITHMARITHMETICMEAN_H_
#define SRC_ALGORITHMARITHMETICMEAN_H_

#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

namespace lambda {

class AlgorithmArithmeticMean {
	double m_filteredValue;
public:
	AlgorithmArithmeticMean();
	virtual ~AlgorithmArithmeticMean();

	void doFiltering(const vector<int> values);

	double getFilteredValue() {
		return m_filteredValue;
	}

};

} /* namespace lambda */

#endif /* SRC_ALGORITHMARITHMETICMEAN_H_ */
