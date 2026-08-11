/* Ghidra address: 00c33270 */
/* Ghidra symbol: FUN_00c33270 */


undefined8 FUN_00c33270(undefined8 param_1,longlong param_2,char param_3,int param_4)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (-1 < param_4 + -1) {
    do {
      if (*(char *)(param_2 + (int)uVar1) == param_3) {
        return CONCAT71((int7)(uVar1 >> 8),1);
      }
      uVar1 = (ulonglong)((int)uVar1 + 1);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 0;
}

