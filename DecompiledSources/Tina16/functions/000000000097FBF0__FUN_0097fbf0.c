/* Ghidra address: 0097fbf0 */
/* Ghidra symbol: FUN_0097fbf0 */


void FUN_0097fbf0(longlong param_1,uint param_2)

{
  bool bVar1;
  
  if ((byte)param_2 < 0xa0) {
    bVar1 = ((byte)(&DAT_01e32918)[(longlong)(int)(param_2 & 0xff) >> 3] >> (param_2 & 7) & 1) != 0;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    *(undefined1 *)(param_1 + 0xa1) = 1;
  }
  else {
    if ((byte)param_2 < 0xa0) {
      bVar1 = ((byte)(&DAT_01e32904)[(longlong)(int)(param_2 & 0xff) >> 3] >> (param_2 & 7) & 1) !=
              0;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      *(undefined1 *)(param_1 + 0xa0) = 1;
    }
  }
  FUN_0097d1b0();
  return;
}

