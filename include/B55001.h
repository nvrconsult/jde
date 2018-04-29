 
/***************************************************************************** 
 *    Header File:  B55001.h 
 * 
 *    Description:  BSFN Test Header File 
 * 
 *        History: 
 *          Date        Programmer  SAR# - Description 
 *          ----------  ----------  ------------------------------------------- 
 *   Author 28.04.2018  DEMO        Unknown  - Created  
 * 
 * 
 * Copyright (c) J.D. Edwards World Source Company, 1996 
 * 
 * This unpublished material is proprietary to J.D. Edwards World Source  
 * Company.  All rights reserved.  The methods and techniques described  
 * herein are considered trade secrets and/or confidential.  Reproduction 
 * or distribution, in whole or in part, is forbidden except by express 
 * written permission of J.D. Edwards World Source Company. 
 ****************************************************************************/ 
 
#ifndef __B55001_H
#define __B55001_H  
 
/***************************************************************************** 
 * Table Header Inclusions 
 ****************************************************************************/ 
#include <f4211.h>
/***************************************************************************** 
 * External Business Function Header Inclusions 
 ****************************************************************************/ 
 
/***************************************************************************** 
 * Global Definitions 
 ****************************************************************************/ 
 
/***************************************************************************** 
 * Structure Definitions 
 ****************************************************************************/ 
 
/***************************************************************************** 
 * DS Template Type Definitions 
 ****************************************************************************/ 
/*****************************************
* TYPEDEF for Data Structure
*    Template Name: Test
*    Template ID:   D550001
*    Generated:     Sat Apr 28 21:06:56 2018
*
* DO NOT EDIT THE FOLLOWING TYPEDEF
*    To make modifications, use the OneWorld Data Structure
*    Tool to Generate a revised version, and paste from
*    the clipboard.
*
**************************************/

#ifndef DATASTRUCTURE_D550001
#define DATASTRUCTURE_D550001

typedef struct tagDSD550001
{
	MATH_NUMERIC      mnAddressNumber;
	JCHAR             szNameAlpha[41];
	MATH_NUMERIC      mnAmountExtendedPrice;
} DSD550001, *LPDSD550001;

#define IDERRmnAddressNumber_1                    1L
#define IDERRszNameAlpha_2                        2L
#define IDERRmnAmountExtendedPrice_3              3L

#endif

/***************************************************************************** 
 * Source Preprocessor Definitions 
 ****************************************************************************/ 
#if defined (JDEBFRTN) 
	#undef JDEBFRTN 
#endif 
 
#if defined (WIN32) 
	#if defined (WIN32) 
		#define JDEBFRTN(r) __declspec(dllexport) r 
	#else 
		#define JDEBFRTN(r) __declspec(dllimport) r 
	#endif 
#else 
	#define JDEBFRTN(r) r 
#endif 
 
/***************************************************************************** 
 * Business Function Prototypes 
 ****************************************************************************/ 
 JDEBFRTN (ID) JDEBFWINAPI Test (LPBHVRCOM lpBhvrCom, LPVOID lpVoid, LPDSD550001 lpDS); 
 
 
/***************************************************************************** 
 * Internal Function Prototypes 
 ****************************************************************************/ 
 
#endif    /* __B55001_H */ 
 
