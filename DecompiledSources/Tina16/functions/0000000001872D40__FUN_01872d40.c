/* Ghidra address: 01872d40 */
/* Ghidra symbol: FUN_01872d40 */


void FUN_01872d40(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  FUN_01873240(param_1,1);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  local_1c = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),local_1c);
      FUN_00410f20(uVar1);
      local_1c = local_1c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10));
  FUN_018733b0(param_1,1);
  return;
}

