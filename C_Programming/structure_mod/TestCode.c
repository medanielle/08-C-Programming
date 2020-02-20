
#include <stdio.h>
#include "TestCode.h"


/* 
//  This exercise will provide you with four parameters:
//		   - a pointer to a CONTAINER structure (defined in TestCode.h),
//		   - an 'id', which corresponds to the 'id' field of a node in the linked list,
//		   - an 'action' parameter, which will get you your result, and finally 
//		   - a pointer to an integer (result), to store the data you obtain from the requested structure. 
//		     
//			Your task will be to walk along the linked list  the CONTAINER structure startNode points at 
//		   is part of until you locate a node with an id equal to 'id' (or return the appropriate result listed below, 
//		   if a node with that id can't be found) and then do the following:
//
//		   - if the structure is of type 'TypeBitmask', XOR the 
//			 the bitmask field of the contained union against 'action', and store the result of this
//			 operation in the area 'result' points at.
//
//		   - if the structure is instead of type 'TypeFuncPtr', call the function in the embedded union,
//			 providing as its parameter 'action', and store the result in 'result'. (e.g., *result = function(action))
//
// Expected Return Values:
//		   - If any portion of the input field(s) are bad, return ERROR_INVALID_PARAMETER (87).
//		   - If the requested ID can't be found in the list, return ERROR_NOT_FOUND (1168)
//		   - If the operation completes successfully, return ERROR_SUCCESS (0)
*/
int structureMod(PCONTAINER startNode, unsigned long id, unsigned long action, int* result)
{
	    
    return 0;

}