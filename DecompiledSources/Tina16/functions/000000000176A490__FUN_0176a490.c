/* Ghidra address: 0176a490 */
/* Ghidra symbol: FUN_0176a490 */


int FUN_0176a490(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar1 = FUN_019954d0();
    iVar1 = (iVar1 - *(int *)(param_1 + 100)) + 1;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}

