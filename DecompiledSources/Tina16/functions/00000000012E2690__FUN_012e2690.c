/* Ghidra address: 012e2690 */
/* Ghidra symbol: FUN_012e2690 */


void FUN_012e2690(longlong param_1,int param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
    if ((iVar1 != 0) && (param_2 <= iVar1)) {
      FUN_004aeac0(*(longlong *)(param_1 + 0x10));
    }
  }
  return;
}

