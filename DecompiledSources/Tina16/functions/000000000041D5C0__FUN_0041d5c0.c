/* Ghidra address: 0041d5c0 */
/* Ghidra symbol: FUN_0041d5c0 */


int FUN_0041d5c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}

