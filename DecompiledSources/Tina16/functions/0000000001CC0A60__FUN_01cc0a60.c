/* Ghidra address: 01cc0a60 */
/* Ghidra symbol: FUN_01cc0a60 */


void FUN_01cc0a60(longlong param_1,double param_2)

{
  double *pdVar1;
  
  pdVar1 = (double *)(param_1 + 0x1a);
  if (*(char *)(param_1 + 0x2a) == '\0') {
    if (param_2 < *pdVar1) {
      *pdVar1 = param_2;
    }
    if (*(double *)(param_1 + 0x22) <= param_2 && param_2 != *(double *)(param_1 + 0x22)) {
      *(double *)(param_1 + 0x22) = param_2;
    }
  }
  else {
    *pdVar1 = param_2;
    *(double *)(param_1 + 0x22) = param_2;
    *(undefined1 *)(param_1 + 0x2a) = 0;
  }
  return;
}

