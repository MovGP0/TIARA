/* Ghidra address: 0041d550 */
/* Ghidra symbol: FUN_0041d550 */


int FUN_0041d550(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  return iVar2;
}

