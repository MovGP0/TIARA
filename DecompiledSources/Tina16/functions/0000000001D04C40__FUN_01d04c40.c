/* Ghidra address: 01d04c40 */
/* Ghidra symbol: FUN_01d04c40 */


void FUN_01d04c40(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_2;
  if (*(char *)(param_1 + 0x3c4 + lVar1) == '\0') {
    *(undefined1 *)(param_1 + 0x3c4 + lVar1) = 1;
    *(undefined1 *)(param_1 + 0x3d1) = 1;
  }
  else if (param_3 != *(int *)(param_1 + 0x3bc + lVar1 * 4)) {
    *(undefined1 *)(param_1 + 0x3d1) = 1;
  }
  *(int *)(param_1 + 0x3bc + lVar1 * 4) = param_3;
  return;
}

