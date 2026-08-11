/* Ghidra address: 01c02010 */
/* Ghidra symbol: FUN_01c02010 */


void FUN_01c02010(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_28;
  int local_1c;
  
  local_30 = auStack_58;
  iVar1 = (**(code **)(*param_1 + 0x2e8))(param_1);
  if (0 < iVar1) {
    *(short *)(param_1 + 99) = (short)param_1[99] + 1;
    local_28 = param_1;
    iVar1 = (**(code **)(*param_1 + 0x2e8))();
    local_1c = 0;
    if (-1 < iVar1 + -1) {
      do {
        plVar2 = (longlong *)(**(code **)(*param_1 + 0x2d0))(param_1,local_1c);
        (**(code **)(*plVar2 + 0x260))(plVar2);
        local_1c = local_1c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00654410(param_1);
  }
  return;
}

