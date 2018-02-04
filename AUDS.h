#ifndef AUDS
#include <iostream>
#include <string>

template <typename T>
class AUDS{
	public:
		//constructor
		AUDS(){
			initialSize = 100;
			currentSize = 0;
			testArray = new std::string[initialSize];
			currentSpot = 0;
		}
		//destructor
		~AUDS(){
			delete[] testArray;
		}
		//copy constructor
		AUDS(AUDS &p){
			initialSize=p.initialSize;
			currentSize=p.currentSize;
		}
		void size(){
			int size;
			size =sizeof(testArray);
			std::cout << size;
		}
		//adds something to array
		void push(const std::string& f){
			//currentSpot = 0;
			//testArray[currentSpot*] = f;
		}	
		void Tpop(){

		}	


	private:
		int initialSize;
		int currentSize;
		T* testArray;
		int currentSpot;





};
#endif
