/* Ghidra address: 018ab370 */
/* Ghidra symbol: FUN_018ab370 */


void FUN_018ab370(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  
  if (*(char *)((longlong)param_1 + 0x531) == '\0') {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x278))(param_1);
    (**(code **)(*plVar2 + 0x100))(plVar2,(int)param_1[0xa5] + -1);
    iVar1 = FUN_018a9b40(param_1);
    if (iVar1 <= (int)param_1[0xa5]) {
      FUN_018a9020(param_1,(int)param_1[0xa5] + -1);
    }
    FUN_018aba70(param_1);
    FUN_018a9b10(param_1);
  }
  return;
}

