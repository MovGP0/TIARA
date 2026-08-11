/* Ghidra address: 00622130 */
/* Ghidra symbol: FUN_00622130 */


int FUN_00622130(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x1c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    (**(code **)(*param_1 + -0x20))(param_1,1);
  }
  return iVar2 + -1;
}

