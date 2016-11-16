#ifndef LIST_DATA
#define LIST_DATA

#include "Node.h"
#include "MathFunctions.h"
#include "Returns.h"

template <typename T>
class ListData
{
	public:
		ListData();
		~ListData();
        Node<T>* ReturnHead();
        Node<T>* getNode();
		void PrintData();
		void Insert(T item, int itemno, std::string itemName);
		void initEuclideanList(std::ifstream& inputFile, std::ifstream& queryFile, int k, int L, std::ofstream& outputfile, int* dataLength);
		void initCosineList(std::ifstream& inputFile, std::ifstream& queryFile, int k, int L, std::ofstream& outputfile,  int* dataLength);
		void initDBHManagement(std::ifstream& inputFile, std::ifstream& queryFile, int k, int L, std::ofstream& outputfile, int* dataLength);
		int Distance(T item1, T item2);
		double CosineDistance(double p1[], double p2[], int size);
		bool HammingDuplicate(T item);
		bool EuclideanDuplicate(T item, int size);
		void ListInsertionVector(std::ifstream& inputFile, Metrics* myMetric);
		void DistanceMatrixComputationVector(Metrics* myMetric, double** distance_matrix);
		void ListInsertionDB(std::ifstream& inputFile, Metrics* myMetric);
		void DistanceMatrixComputationDB(std::ifstream& inputFile, Metrics* myMetric, double** distance_matrix);
		
	private:
		Node<T>* header;
};


#endif // !LIST_DATA_HAMMING