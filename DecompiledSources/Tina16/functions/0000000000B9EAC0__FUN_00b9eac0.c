/* Ghidra address: 00b9eac0 */
/* Ghidra symbol: FUN_00b9eac0 */


int FUN_00b9eac0(undefined8 param_1,short param_2,longlong param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + -4);
  }
  if (param_4 <= iVar1) {
    iVar1 = (iVar1 - param_4) + 1;
    do {
      if (*(short *)(param_3 + -2 + (longlong)param_4 * 2) == param_2) {
        return param_4;
      }
      param_4 = param_4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

