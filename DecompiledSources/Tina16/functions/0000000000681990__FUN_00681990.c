/* Ghidra address: 00681990 */
/* Ghidra symbol: FUN_00681990 */


void FUN_00681990(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [40];
  undefined1 *local_a0;
  int local_94 [15];
  int local_58 [15];
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_a0 = auStack_c8;
  local_10 = thunk_FUN_040ef593(0);
  thunk_FUN_04172119(local_10,local_58);
  uVar2 = FUN_005fc8c0(param_1[0x17]);
  local_18 = thunk_FUN_041a19a1(local_10,uVar2);
  thunk_FUN_04172119(local_10,local_94);
  thunk_FUN_041a19a1(local_10,local_18);
  thunk_FUN_041a9b5c(0,local_10);
  if (*PTR_DAT_02003210 == '\0') {
    local_1c = local_58[0];
    if (local_94[0] < local_58[0]) {
      local_1c = local_94[0];
    }
    iVar1 = (**(code **)(*param_1 + 0x1a0))(param_1,6);
    local_1c = local_1c / 4 + iVar1 * 4;
  }
  else {
    if ((char)param_1[0x72] == '\0') {
      local_1c = 6;
    }
    else {
      local_1c = 8;
    }
    iVar1 = (**(code **)(*param_1 + 0x1a0))(param_1,6);
    local_1c = local_1c * iVar1;
  }
  FUN_0064cc50(param_1,local_94[0] + local_1c);
  return;
}

