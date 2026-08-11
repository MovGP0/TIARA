/* Ghidra address: 00c35d60 */
/* Ghidra symbol: FUN_00c35d60 */


void FUN_00c35d60(longlong *param_1,short param_2,longlong param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong local_res18;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  int local_2c;
  longlong *local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_res18 = param_3;
  puVar1 = auStack_68;
  if (param_3 == 0) {
    local_res18 = thunk_FUN_0413b85d(param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  if ((local_res18 == 0) || (param_2 != DAT_01e9f530)) {
    if ((local_res18 == 0) || (param_2 != 2)) {
      FUN_0041ddd0(&local_48,PTR_PTR_02004180);
      FUN_00c1a320(local_48);
    }
    else {
      local_28 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      (**(code **)(*local_28 + 0xd0))(local_28,2,local_res18,param_4);
      (**(code **)(*param_1 + 0x10))(param_1,local_28);
      FUN_00410f20(local_28);
    }
  }
  else {
    local_2c = thunk_FUN_0420b4c4(local_res18);
    local_38 = thunk_FUN_0416a623(local_res18);
    local_20 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    (**(code **)(*local_20 + 8))(local_20,local_2c);
    FUN_00409a70(local_38,local_20[1],(longlong)local_2c);
    (**(code **)(*param_1 + 0xc0))(param_1,local_20);
    FUN_00410f20(local_20);
    thunk_FUN_04172795(local_res18);
  }
  FUN_00414480(&local_48);
  return;
}

