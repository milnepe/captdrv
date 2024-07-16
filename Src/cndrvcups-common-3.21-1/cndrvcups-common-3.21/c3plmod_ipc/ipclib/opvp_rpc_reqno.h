/*

Copyright c) 2003-2004, AXE, Inc.  All rights reserved.

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/
/*
   2007 Modified  for OPVP 1.0 by BBR Inc.
*/

#ifndef _OPVP_RPC_REQNO_H_
#define _OPVP_RPC_REQNO_H_


#define RPCNO_READY			1000
#define RPCNO_ECHO			1001

#define RPCNO_OPENPRINTER		0
#define RPCNO_CLOSEPRINTER		1
#define RPCNO_STARTJOB			2
#define RPCNO_ENDJOB			3
#define RPCNO_ABORTJOB			4
#define RPCNO_STARTDOC			5
#define RPCNO_ENDDOC			6
#define RPCNO_STARTPAGE			7
#define RPCNO_ENDPAGE			8
#define RPCNO_QUERYDEVICECAPABILITY	9
#define RPCNO_QUERYDEVICEINFO		10
#define RPCNO_RESETCTM			11
#define RPCNO_SETCTM			12
#define RPCNO_GETCTM			13
#define RPCNO_INITGS			14
#define RPCNO_SAVEGS			15
#define RPCNO_RESTOREGS			16
#define RPCNO_QUERYCOLORSPACE		17
#define RPCNO_SETCOLORSPACE		18
#define RPCNO_GETCOLORSPACE		19
#define RPCNO_SETFILLMODE		20
#define RPCNO_GETFILLMODE		21
#define RPCNO_SETALPHACONSTANT		22
#define RPCNO_GETALPHACONSTANT		23
#define RPCNO_SETLINEWIDTH		24
#define RPCNO_GETLINEWIDTH		25
#define RPCNO_SETLINEDASH		26
#define RPCNO_GETLINEDASH		27
#define RPCNO_SETLINEDASHOFFSET		28
#define RPCNO_GETLINEDASHOFFSET		29
#define RPCNO_SETLINESTYLE		30
#define RPCNO_GETLINESTYLE		31
#define RPCNO_SETLINECAP		32
#define RPCNO_GETLINECAP		33
#define RPCNO_SETLINEJOIN		34
#define RPCNO_GETLINEJOIN		35
#define RPCNO_SETMITERLIMIT		36
#define RPCNO_GETMITERLIMIT		37
#define RPCNO_SETPAINTMODE		38
#define RPCNO_GETPAINTMODE		39
#define RPCNO_SETSTROKECOLOR		40
#define RPCNO_SETFILLCOLOR		41
#define RPCNO_SETBGCOLOR		42
#define RPCNO_NEWPATH			43
#define RPCNO_ENDPATH			44
#define RPCNO_STROKEPATH		45
#define RPCNO_FILLPATH			46
#define RPCNO_STROKEFILLPATH		47
#define RPCNO_SETCLIPPATH		48
#define RPCNO_RESETCLIPPATH		49
#define RPCNO_SETCURRENTPOINT		50
#define RPCNO_LINEPATH			51
#define RPCNO_POLYGONPATH		52
#define RPCNO_RECTANGLEPATH		53
#define RPCNO_ROUNDRECTANGLEPATH	54
#define RPCNO_BEZIERPATH		55
#define RPCNO_ARCPATH			56
#define RPCNO_DRAWIMAGE			57
#define RPCNO_STARTDRAWIMAGE		58
#define RPCNO_TRANSFERDRAWIMAGE 	59
#define RPCNO_ENDDRAWIMAGE		60
#define RPCNO_STARTSCANLINE		61
#define RPCNO_SCANLINE			62
#define RPCNO_ENDSCANLINE		63
#define RPCNO_STARTRASTER		64
#define RPCNO_TRANSFERRASTERDATA	65
#define RPCNO_SKIPRASTER		66
#define RPCNO_ENDRASTER			67
#define RPCNO_STARTSTREAM		68
#define RPCNO_TRANSFERSTREAMDATA 	69
#define RPCNO_ENDSTREAM			70

#endif
