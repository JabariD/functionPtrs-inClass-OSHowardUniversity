/* IMPLEMENTED FULLY IN CODIO */
int my_comparer(const void *this, const void *that) {
	int ProcessOnePriority = ((struct _process *)this)->priority;
  int ProcessTwoPriority = ((struct _process *)that)->priority; 
	
	if (ProcessOnePriority != ProcessTwoPriority) {
		return ProcessTwoPriority - ProcessOnePriority;
	} else {
		int ProcessOneArrivalTime = ((struct _process *)this)->arrival_time;
		int ProcessTwoArrivalTime = ((struct _process *)that)->arrival_time; 
		return ProcessOneArrivalTime - ProcessTwoArrivalTime;
	}
  
	return 1;
}