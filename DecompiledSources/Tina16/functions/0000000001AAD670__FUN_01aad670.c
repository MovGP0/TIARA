/* Ghidra address: 01aad670 */
/* Ghidra symbol: FUN_01aad670 */


void FUN_01aad670(longlong param_1,undefined1 *param_2,undefined1 *param_3)

{
  short sVar1;
  
  for (sVar1 = *(short *)(param_1 + 2); sVar1 != 0; sVar1 = sVar1 + -1) {
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
    *param_2 = *param_3;
  }
  return;
}

