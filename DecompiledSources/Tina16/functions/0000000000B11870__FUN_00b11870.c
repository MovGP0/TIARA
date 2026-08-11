/* Ghidra address: 00b11870 */
/* Ghidra symbol: FUN_00b11870 */


void FUN_00b11870(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + -1;
  if (*(int *)(param_1 + 0x61c) == 0) {
    plVar2 = (longlong *)FUN_00b11070(param_1);
    iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (*(int *)(param_1 + 0x620) != iVar1) {
      FUN_00b11730(param_1);
    }
  }
  return;
}

