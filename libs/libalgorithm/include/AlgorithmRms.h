/*
 * AlgorithmRms.h
 *
 *  Created on: 01.03.2015
 *      Author: benjamin
 */

#ifndef SRC_ALGORITHMRMS_H_
#define SRC_ALGORITHMRMS_H_

#include <vector>
#include <functional>
#include <algorithm>
#include <math.h>

using namespace std;

namespace lambda {

class AlgorithmRms {
	double m_filteredValue;
public:
	AlgorithmRms();
	virtual ~AlgorithmRms();

	void doFiltering(const vector<int> values);
	double getFilteredValue() {
		return m_filteredValue;
	}
};

} /* namespace lambda */

#endif /* SRC_ALGORITHMRMS_H_ */
