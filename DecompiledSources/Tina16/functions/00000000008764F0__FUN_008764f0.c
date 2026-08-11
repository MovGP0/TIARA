/* Ghidra address: 008764f0 */
/* Ghidra symbol: FUN_008764f0 */


ulonglong FUN_008764f0(undefined8 param_1,uint param_2,uint param_3,short param_4,longlong param_5)

{
  int iVar1;
  
  if (param_2 <= param_3) {
    iVar1 = (param_3 - param_2) + 1;
    do {
      if (*(short *)(param_5 + -2 + (ulonglong)param_2 * 2) == param_4) {
        return (ulonglong)param_2;
      }
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

