/* Ghidra address: 00d424f0 */
/* Ghidra symbol: FUN_00d424f0 */


undefined8 FUN_00d424f0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_58;
  undefined1 *local_50;
  int local_44;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_30 [4];
  int local_2c;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_50 = auStack_88;
  local_58 = 0;
  local_20[0] = 0;
  local_28 = thunk_FUN_040ef593(*(undefined8 *)(param_1 + 8));
  local_38 = *(undefined8 *)(param_1 + 0x18);
  local_20[0] = 0;
  FUN_00787f40(local_38,local_20);
  FUN_00787f40(local_38,&local_58);
  local_40 = local_58;
  local_44 = 0;
  if (local_58 != 0) {
    local_44 = *(int *)(local_58 + -4);
  }
  uVar2 = FUN_00416740(local_20[0]);
  thunk_FUN_0418ae1a(local_28,uVar2,local_44 + -1,local_30);
  FUN_00414480(local_20);
  uVar1 = FUN_00787fa0(local_38);
  local_68 = FUN_00787c80(local_38);
  FUN_004238d0(param_2,0,local_2c / 2 + 1,uVar1);
  thunk_FUN_041a9b5c(*(undefined8 *)(param_1 + 8),local_28);
  thunk_FUN_041a2fd8(local_28);
  FUN_00414480(&local_58);
  return param_2;
}

