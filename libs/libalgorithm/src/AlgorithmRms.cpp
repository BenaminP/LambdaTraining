/*
 * AlgorithmRms.cpp
 *
 *  Created on: 01.03.2015
 *      Author: benjamin
 */

#include "AlgorithmRms.h"

namespace lambda {

AlgorithmRms::AlgorithmRms()
: m_filteredValue(0) {
	// TODO Auto-generated constructor stub

}

AlgorithmRms::~AlgorithmRms() {
	// TODO Auto-generated destructor stub
}

void AlgorithmRms::doFiltering(const vector<int> values) {
	int valueSum = 0;
	for_each(values.begin(), values.end(), [&valueSum] (int i) {valueSum+=i*i;} );

	double tmp =  ((double)valueSum / (double)values.size());
	m_filteredValue = sqrt(tmp);
}

} /* namespace lambda */
