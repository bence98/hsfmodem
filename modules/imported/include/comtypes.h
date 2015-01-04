/*
 * Copyright (c) 2003-2004 Linuxant inc.
 * Copyright (c) 2001-2004 Conexant Systems, Inc.
 * 
 * 1.   Permitted use. Redistribution and use in source and binary forms,
 * without modification, are only permitted under the terms set forth herein.
 * 
 * 2.   Disclaimer of Warranties. LINUXANT, ITS SUPPLIERS, AND OTHER CONTRIBUTORS
 * MAKE NO REPRESENTATION ABOUT THE SUITABILITY OF THIS SOFTWARE FOR ANY PURPOSE.
 * IT IS PROVIDED "AS IS" WITHOUT EXPRESS OR IMPLIED WARRANTIES OF ANY KIND.
 * LINUXANT AND OTHER CONTRIBUTORS DISCLAIMS ALL WARRANTIES WITH REGARD
 * TO THIS SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE, GOOD TITLE AND AGAINST INFRINGEMENT.
 * 
 * This software has not been formally tested, and there is no guarantee that
 * it is free of errors including, but not limited to, bugs, defects,
 * interrupted operation, or unexpected results. Any use of this software is
 * at user's own risk.
 * 
 * 3.   No Liability.
 * 
 * (a) Linuxant, its suppliers, or contributors shall not be responsible for
 * any loss or damage to users, customers, or any third parties for any reason
 * whatsoever, and LINUXANT, ITS SUPPLIERS OR CONTRIBUTORS SHALL NOT BE LIABLE
 * FOR ANY ACTUAL, DIRECT, INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL, OR
 * CONSEQUENTIAL (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED, WHETHER IN CONTRACT, STRICT OR OTHER LEGAL THEORY OF
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY
 * WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 * OF SUCH DAMAGE.
 * 
 * (b) User agrees to hold Linuxant, its suppliers, and contributors harmless
 * from any liability, loss, cost, damage or expense, including attorney's fees,
 * as a result of any claims which may be made by any person, including
 * but not limited to User, its agents and employees, its customers, or
 * any third parties that arise out of or result from the manufacture,
 * delivery, actual or alleged ownership, performance, use, operation
 * or possession of the software furnished hereunder, whether such claims
 * are based on negligence, breach of contract, absolute liability or any
 * other legal theory.
 * 
 * 4.   Notices. User hereby agrees not to remove, alter or destroy any
 * copyright, trademark, credits, other proprietary notices or confidential
 * legends placed upon, contained within or associated with the Software,
 * and shall include all such unaltered copyright, trademark, credits,
 * other proprietary notices or confidential legends on or in every copy of
 * the Software.
 * 
 * 5.   Reverse-engineering. User hereby agrees not to reverse engineer,
 * decompile, or disassemble the portions of this software provided solely
 * in object form, nor attempt in any manner to obtain their source-code.
 * 
 * 6.   Redistribution. Permission to redistribute this software without
 * modification is granted, without prejudice to Linuxant's ability to obtain
 * reparation for any unauthorized distribution of previous versions of this
 * software released under prior LICENSE terms. Modification or redistribution
 * of this software under different terms requires explicit written approval
 * signed by an authorized Linuxant officer.
 * 
 * 7.   Performance. V.92 modems are designed to be capable of receiving data at
 * up to 56Kbps with compatible phone line and server equipment, and transmitting
 * data at up to 31.2Kbps. V.90 modems are designed to be capable of receiving
 * data at up to 56 Kbps from a compatible service provider and transmitting data
 * at up to about 28.8 Kbps. Public networks currently limit download speeds to
 * about 53Kbps. Actual speeds vary and are often less than the maximum possible.
 * 
 * 
 */

/****************************************************************************************

File Name:			ComTypes.h	

File Description:	COM Status Types

*****************************************************************************************/

#ifndef __COM_TYPES_H__
#define __COM_TYPES_H__

typedef enum {
	COM_STATUS_SUCCESS, 
	COM_STATUS_FAIL, 
	COM_STATUS_PENDING,
	COM_STATUS_CODE_NOT_SUPPORTED, 
	COM_STATUS_NULL_POINTER,
	COM_STATUS_INST_NOT_CONFIGURED,
	COM_STATUS_INST_NOT_INIT,
	COM_STATUS_INST_NOT_CLOSED,
	COM_STATUS_INVALID_HANDLE,
	COM_STATUS_INVALID_PARAM,
	COM_STATUS_INVALID_MODE,
    COM_STATUS_VALUE_NOT_FOUND,
	COM_STATUS_ALLOC_FAILED,
	COM_STATUS_CREATE_FAILED,
	COM_STATUS_OPEN_FAILED,
	COM_STATUS_BLACKLISTED,
	COM_STATUS_DELAYED,
	COM_STATUS_UNKNOWN,
}COM_STATUS;							

typedef __shimcall__ void  (*PCBFUNC) (PVOID);
typedef __shimcall__ PVOID (*PALLOC_FUNC)(unsigned /* Alloc Size */, 
								PVOID /* pRefData */);	
typedef __shimcall__ void (*PFREE_FUNC)(		PVOID /* Block Pointer */,
								PVOID /* pRefData */);		
typedef BOOL  ( __stdcall *PISR)(PVOID);

/***********************************************************/

/* Data in AtCmd.c (AtPlusMS) relies on the enum order */
/* If make any changes in this enum - modify that data as well */
/* RMY 012303 - Correction: 
    AtPlusMs no longer requires this enum match the MsInfo table order */

typedef enum {
	MODULATION_TYPE_BELL103,
	MODULATION_TYPE_BELL212,		
	MODULATION_TYPE_V21,
	MODULATION_TYPE_V22,		
	MODULATION_TYPE_V22BIS,		
	MODULATION_TYPE_V23,		
	MODULATION_TYPE_V32,		
	MODULATION_TYPE_V32BIS,		
	MODULATION_TYPE_V34,		
	MODULATION_TYPE_K56,		
	MODULATION_TYPE_V90,		
	MODULATION_TYPE_V92,
	MODULATION_TYPE_V8_CLEARDOWN,
	MODULATION_TYPE_VFC,		

	MODULATION_TYPE_K56A,
    MODULATION_TYPE_V34_CLEAR,
    MODULATION_TYPE_V33,
    MODULATION_TYPE_V32BIS_CLEAR,
	MODULATION_TYPE_V29,		
	MODULATION_TYPE_V27,
    MODULATION_TYPE_V21C2, 
    MODULATION_TYPE_V17,
	MODULATION_TYPE_TEST,
    MODULATION_TYPE_LAST
}MODULATION_TYPE;


typedef enum {
	ANSWER_MODE,
	CALLER_MODE
} CALL_MODE;



#endif /* __COM_TYPES_H__ */