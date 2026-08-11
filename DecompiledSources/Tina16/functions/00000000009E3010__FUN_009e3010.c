/* Ghidra address: 009e3010 */
/* Ghidra symbol: FUN_009e3010 */


undefined8 FUN_009e3010(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_48;
  undefined1 *local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = auStack_78;
  local_48 = 0;
  local_20[0] = 0;
  FUN_00414480(local_20);
  local_28 = FUN_0045ae90();
  (**(code **)(*param_1 + 0x20))(param_1,&local_48,param_3,param_4);
  local_30 = local_48;
  local_38 = local_48;
  if (local_48 != 0) {
    local_38 = *(longlong *)(local_48 + -8);
  }
  local_58 = (undefined4)local_38;
  FUN_0045aba0(local_28,local_20,local_48,0);
  FUN_00414ad0(param_2,local_20[0]);
  FUN_00414480(local_20);
  FUN_00419430(&local_48,&DAT_00406578);
  FUN_00414480(local_20);
  return param_2;
}

