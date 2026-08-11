/* Ghidra address: 01a3f000 */
/* Ghidra symbol: FUN_01a3f000 */


void FUN_01a3f000(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x2968) + 0x5c);
  if (iVar1 == 0) {
    FUN_01a3f430();
  }
  else if (iVar1 == 1) {
    FUN_01a3f030();
  }
  else {
    FUN_01a3f030();
  }
  return;
}

