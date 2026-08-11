/* Ghidra address: 01437ab0 */
/* Ghidra symbol: FUN_01437ab0 */


void FUN_01437ab0(longlong param_1)

{
  longlong lVar1;
  
  if (2 < *(int *)(param_1 + 0x718)) {
    *(int *)(param_1 + 0x718) = *(int *)(param_1 + 0x718) + -1;
    lVar1 = *(longlong *)(param_1 + 0x6b0);
    FUN_00848a70(lVar1,*(int *)(lVar1 + 0x4e0) + -1);
    FUN_00b0adf0(lVar1);
    if (*(int *)(param_1 + 0x718) == 0) {
      FUN_0084e3e0(lVar1,0,0,0);
      FUN_0084e3e0(lVar1,1,0,0);
    }
  }
  return;
}

