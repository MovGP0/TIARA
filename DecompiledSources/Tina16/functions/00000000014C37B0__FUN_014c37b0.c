/* Ghidra address: 014c37b0 */
/* Ghidra symbol: FUN_014c37b0 */


void FUN_014c37b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 char param_5)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_78 [48];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_30 = auStack_78;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  local_28 = (longlong *)FUN_0061d050(&PTR_FUN_014bb5c0,1,0);
  FUN_014bbcc0(local_28,local_res10);
  FUN_00416ba0(&local_38,local_res18,local_res20);
  FUN_014bc020(local_28,local_38);
  FUN_014bbff0(local_28,local_20);
  if (param_5 != '\0') {
    local_28[0x29] = param_1;
    local_28[0x28] = (longlong)FUN_014c1630;
  }
  (**(code **)(*local_28 + 0xb0))(local_28,0);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),0);
  }
  FUN_00410f20(local_28);
  FUN_00414560(&local_48,3);
  FUN_00414480(local_20);
  FUN_00414560(&local_res10,3);
  return;
}

