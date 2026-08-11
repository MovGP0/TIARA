/* Ghidra address: 00d43a20 */
/* Ghidra symbol: FUN_00d43a20 */


void FUN_00d43a20(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                 char param_5)

{
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  FUN_0040d200(&local_78,0x40,0);
  local_78 = 3;
  local_74 = thunk_FUN_04133d57(*(undefined8 *)(param_1 + 8));
  local_6c = 1;
  local_58 = FUN_005ffa40(param_2);
  local_60 = *(undefined8 *)(param_1 + 8);
  local_50 = *param_4;
  uStack_48 = param_4[1];
  local_70 = param_3;
  local_40 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x80),0x199,0,0);
  if (param_5 != '\0') {
    local_68 = local_68 | 0x11;
  }
  thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x2b,*(undefined8 *)(param_1 + 8),&local_78);
  return;
}

