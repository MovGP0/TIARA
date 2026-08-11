/* Ghidra address: 00f03b40 */
/* Ghidra symbol: FUN_00f03b40 */


void FUN_00f03b40(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  (**(code **)(*param_1 + 0x40))(param_1);
  iVar1 = FUN_00f03870();
  local_1c = 0;
  if (-1 < iVar1 + -1) {
    do {
      plVar2 = (longlong *)FUN_00f03860(param_1,local_1c);
      (**(code **)(*plVar2 + 0x78))(plVar2);
      local_1c = local_1c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}

