/* Ghidra address: 0043ff00 */
/* Ghidra symbol: FUN_0043ff00 */


undefined8 FUN_0043ff00(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  
  if (-1 < param_3) {
    param_3 = param_3 + 1;
    do {
      iVar1 = FUN_0043e6d0(*(undefined8 *)(param_1 + 0x50),*param_2);
      if (iVar1 == 0) {
        return 1;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 0;
}

