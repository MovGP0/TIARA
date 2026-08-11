/* Ghidra address: 01be9570 */
/* Ghidra symbol: FUN_01be9570 */


void FUN_01be9570(longlong param_1)

{
  int iVar1;
  
  FUN_01bd59b0();
  if (*(longlong *)(param_1 + 0x498) != 0) {
    iVar1 = 0;
    if (*(longlong *)(param_1 + 0x678) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x678) + -4);
    }
    if (0 < iVar1) {
      FUN_01be8c50(param_1);
    }
  }
  return;
}

