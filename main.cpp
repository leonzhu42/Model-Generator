#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	system("java -classpath weka.jar weka.classifiers.meta.FilteredClassifier -t model.arff -d model.model -F weka.filters.supervised.attribute.AttributeSelection -W weka.classifiers.functions.SMOreg -c first");
	cout << "Success!" << endl;
	return 0;
}

