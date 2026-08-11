/* Ghidra address: 01d85410 */
/* Ghidra symbol: FUN_01d85410 */


int FUN_01d85410(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == '\0') {
    LOCK();
    piVar1 = (int *)(param_1 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    iVar2 = iVar2 + -1;
  }
  else {
    LOCK();
    piVar1 = (int *)(param_1 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

