/*
 * AlgorithmArithmeticMean.cpp
 *
 *  Created on: 01.03.2015
 *      Author: benjamin
 */

#include "AlgorithmArithmeticMean.h"

namespace lambda {

AlgorithmArithmeticMean::AlgorithmArithmeticMean()
: m_filteredValue(0) {
	// TODO Auto-generated constructor stub

}

AlgorithmArithmeticMean::~AlgorithmArithmeticMean() {
	// TODO Auto-generated destructor stub
}

void AlgorithmArithmeticMean::doFiltering(const vector<int> values) {
	int valueSum = 0;
	for_each(values.begin(), values.end(), [&valueSum] (int i) {valueSum+=i;} );

	m_filteredValue = valueSum / values.size();
}

} /* namespace lambda */
