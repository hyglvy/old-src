/*****************************************************************************/
/**						Microsoft LAN Manager								**/
/**				Copyright(c) Microsoft Corp., 1987-1990						**/
/*****************************************************************************/
/*****************************************************************************
File				: node0.cxx
Title				: routines for node_0
History				:
	04-Aug-1991	VibhasC	Created

*****************************************************************************/
/****************************************************************************
 local defines and includes
 ****************************************************************************/
#include "nulldefs.h"
extern	"C"
	{
	#include <stdio.h>
	}
#include "common.hxx"
#include "errors.hxx"
#include "midlnode.hxx"
#include "nodeskl.hxx"
#include "ctxt.hxx"


/****************************************************************************
	extern data
 ****************************************************************************/

extern CTXTMGR		*	pGlobalContext;

/****************************************************************************/


/****************************************************************************
 node_0:
	the constructor
 ****************************************************************************/
node_0::node_0()
	{

#ifdef MIDL_INTERNAL
	NDMask		= (unsigned short) 0;
#endif // MIDL_INTERNAL
	pChild		=
	pSibling	= (node_skl *)0;
	}


