/* Ghidra address: 00685030 */
/* Ghidra symbol: FUN_00685030 */


void FUN_00685030(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  int local_40;
  undefined4 local_38;
  undefined1 *local_20;
  int local_c;
  
  local_20 = auStack_68;
  local_c = (**(code **)(*param_1 + 0x2e0))(param_1);
  if (*(int *)((longlong)param_1 + 0x49c) < local_c) {
    local_c = *(int *)((longlong)param_1 + 0x49c);
  }
  if (local_c < 1) {
    local_c = 1;
  }
  *(undefined1 *)(param_1 + 0xa4) = 1;
  iVar1 = (**(code **)(*param_1 + 0x2d0))(param_1);
  local_48 = (undefined4)param_1[0x13];
  local_40 = iVar1 * local_c + *(int *)((longlong)param_1 + 0x9c) + 2;
  local_38 = 0x9e;
  thunk_FUN_041cc6e2(param_1[0xa1],0,0,0);
  *(undefined1 *)(param_1 + 0xa4) = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0x57;
  thunk_FUN_041cc6e2(param_1[0xa1],0,0,0);
  return;
}

