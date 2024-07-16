/*
 *  Print Dialog for Canon LIPS/PS/LIPSLX/UFR2/CAPT Printer.
 *  Copyright CANON INC. 2004
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */


#ifndef	_GETDATA
#define	_GETDATA

#ifdef __cplusplus
extern "C" {
#endif

char* GetDataPPDOption(cngplpData *data, int id);
char* GetDataCommonOption(cngplpData *data, int id);
char* GetDataImageOption(cngplpData *data, int id);
char* GetDataTextOption(cngplpData *data, int id);
char* GetDataHPGLOption(cngplpData *data, int id);
char* GetAllOptionID(cngplpData *data);
char* ToChar(char *value);
char* AddList(char *list, char *add);

#ifdef __cplusplus
}
#endif

#endif
