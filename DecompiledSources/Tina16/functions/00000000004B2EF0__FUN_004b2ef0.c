/* Ghidra address: 004b2ef0 */
/* Ghidra symbol: FUN_004b2ef0 */


void FUN_004b2ef0(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  int local_1c;
  
  local_30 = auStack_58;
  FUN_004b3260(param_1);
  local_28 = param_2;
  if (param_2 != 0) {
    local_28 = *(longlong *)(param_2 + -8);
  }
  iVar1 = (int)local_28;
  local_1c = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_2 + (longlong)local_1c * 8));
      local_1c = local_1c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004b3390(param_1);
  return;
}

