/* Ghidra address: 004614a0 */
/* Ghidra symbol: FUN_004614a0 */


void FUN_004614a0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  do {
    lVar1 = (longlong)param_2;
    param_2 = param_2 + -1;
    if (*(int *)(param_1 + 100 + lVar1 * 8) + *(int *)(param_1 + 0x60 + lVar1 * 8) <=
        *(int *)(param_1 + 0x260 + lVar1 * 4)) {
      return;
    }
  } while (-1 < param_2);
  return;
}

