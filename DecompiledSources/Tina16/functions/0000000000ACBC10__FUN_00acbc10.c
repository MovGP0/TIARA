/* Ghidra address: 00acbc10 */
/* Ghidra symbol: FUN_00acbc10 */


void FUN_00acbc10(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x158);
  if (9 < *(int *)(param_1 + 0x108)) {
    FUN_0064cc50(plVar1,*(int *)(param_1 + 0x108));
  }
  if (*(char *)(param_1 + 0xbc) == '\0') {
    if ((*(int *)(param_1 + 0x10c) < 10) || (*(char *)(param_1 + 0xbc) != '\0')) {
      iVar2 = (**(code **)(*plVar1 + 0x1a0))(plVar1,2);
      FUN_0064d0e0(plVar1,*(int *)(param_1 + 0x154) + iVar2 + 10);
    }
    else {
      FUN_0064cbf0(plVar1,*(int *)(param_1 + 0x10c));
    }
  }
  else {
    FUN_0064cb30(plVar1,0xfffff060);
    FUN_0064cbf0(plVar1,10);
  }
  return;
}

