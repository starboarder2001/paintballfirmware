/*
   ----------------------
   BoardCheck.h
   ----------------------
   Created: 10/24/04
   Updated: 07/03/15
   Version: 1.4
   ----------------------
   Compiler: PICC 9.40 C Compiler From HI-TECH
   Assembler: PICC 9.40 Assembler From HI-TECH
   Linker: PICC Linker From HI-TECH
   IDE: MPLAB IDE v6.62
   ----------------------
   Author: David Lee Whiteside
   Project: CodeX DM4/5/C Chip(TM)
   Target MCU: PIC16F648a From Microchip
   ----------------------
   Copyright (c) 2004-2015 David Whiteside

   Permission is hereby granted, free of charge, to any person obtaining a copy
   of this software and associated documentation files (the "Software"), to deal
   in the Software without restriction, including without limitation the rights
   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
   copies of the Software, and to permit persons to whom the Software is
   furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in
   all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
   SOFTWARE.
 */
#ifndef _BOARDCHECK_H
#define _BOARDCHECK_H


#include <DM4Macros.h>


#define NONLBIBOARD 0x00
#define LBIBOARD    0x01

#define FULLBATTERY 4
#define bank1
#define bank0

typedef BOOL (*LBI_FUNCTION_GET)(void);
typedef void (*LBI_FUNCTION_SET)(void);

extern BYTE G_Board_Type;
extern BYTE G_Board_Battery;
extern bank1 LBI_FUNCTION_GET _DIP1_ISSET_PTR;
extern bank1 LBI_FUNCTION_GET _EYEBUTTON_ISDOWN_PTR;
extern bank1 LBI_FUNCTION_SET _EYEPOWER_ON_PTR;
extern bank1 LBI_FUNCTION_SET _EYEPOWER_OFF_PTR;


BOOL _NONLBI_DIP1_ISSET(void);
BOOL _LBI_DIP1_ISSET(void);

BOOL _NONLBI_EYEBUTTON_ISDOWN(void);
BOOL _LBI_EYEBUTTON_ISDOWN(void);

void _NONLBI_EYEPOWER_ON(void);
void _LBI_EYEPOWER_ON(void);
void _NONLBI_EYEPOWER_OFF(void);
void _LBI_EYEPOWER_OFF(void);

void _CHOOSEBOARD(void);
void _COMPARE(BYTE vr);
void _CHECKBATTERY(void);
void _POWERSAVE(void);


#endif // _BOARDCHECK_H
