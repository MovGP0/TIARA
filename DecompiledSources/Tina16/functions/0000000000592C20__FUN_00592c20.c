/* Ghidra address: 00592c20 */
/* Ghidra symbol: FUN_00592c20 */


int FUN_00592c20(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    FUN_004095f0();
  }
  return iVar2 + -1;
}

