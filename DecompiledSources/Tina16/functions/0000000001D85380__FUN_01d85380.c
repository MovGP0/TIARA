/* Ghidra address: 01d85380 */
/* Ghidra symbol: FUN_01d85380 */


int FUN_01d85380(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == '\0') {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    iVar3 = iVar3 + -1;
    if (((*(char *)(param_1 + 0x28) == '\0') && (*(char *)(param_1 + 0x29) == '\x01')) &&
       (*(longlong *)PTR_DAT_02005778 != 0)) {
      iVar2 = (**(code **)PTR_DAT_02005778)();
      if (iVar2 == 0) {
        FUN_01d85710(param_1);
      }
    }
    else if (iVar3 == 0) {
      FUN_01d85710(param_1);
    }
  }
  else {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    iVar3 = iVar3 + 1;
    if (((*(char *)(param_1 + 0x28) == '\0') && (*(char *)(param_1 + 0x29) == '\x01')) &&
       (*(longlong *)PTR_DAT_02002600 != 0)) {
      (**(code **)PTR_DAT_02002600)();
    }
  }
  return iVar3;
}

