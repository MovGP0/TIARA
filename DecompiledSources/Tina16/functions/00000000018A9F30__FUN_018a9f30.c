/* Ghidra address: 018a9f30 */
/* Ghidra symbol: FUN_018a9f30 */


void FUN_018a9f30(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  if (*(char *)((longlong)param_1 + 0x531) == '\0') {
    lVar1 = (**(code **)(*param_1 + 0x278))(param_1);
    *(int *)(lVar1 + 0x10) = (int)param_1[0xa5];
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x278))(param_1);
    (**(code **)(*plVar2 + 0x160))(plVar2);
    (**(code **)(*param_1 + 0x2a0))(param_1,1);
  }
  return;
}

