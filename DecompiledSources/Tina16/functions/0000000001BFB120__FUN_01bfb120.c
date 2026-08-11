/* Ghidra address: 01bfb120 */
/* Ghidra symbol: FUN_01bfb120 */


void FUN_01bfb120(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if (*(int *)(param_1 + 0x48) == 0x20000000) {
      FUN_0064e0c0(lVar1,1);
    }
    else {
      FUN_0064e030(lVar1,*(int *)(param_1 + 0x48));
    }
  }
  return;
}

