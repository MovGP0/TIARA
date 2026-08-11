/* Ghidra address: 017b02a0 */
/* Ghidra symbol: FUN_017b02a0 */


undefined8 *
FUN_017b02a0(undefined8 *param_1,char param_2,undefined8 param_3,undefined1 param_4,
            undefined2 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
            undefined4 param_9,undefined4 param_10,undefined1 param_11,undefined8 *param_12,
            undefined8 param_13,undefined4 param_14)

{
  undefined8 *local_res8;
  undefined8 local_res18;
  undefined1 local_res20;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  
  local_40 = auStack_88;
  local_30 = *param_12;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_004119e0(param_1,param_2);
  }
  FUN_017b58f0(local_res8,0);
  FUN_00416910(local_res8 + 8,local_res18,0xff);
  *(undefined1 *)(local_res8 + 0x28) = local_res20;
  *(undefined2 *)((longlong)local_res8 + 0x142) = param_5;
  *(undefined1 *)((longlong)local_res8 + 0x144) = param_6;
  *(undefined1 *)((longlong)local_res8 + 0x145) = param_7;
  *(undefined1 *)((longlong)local_res8 + 0x147) = param_8;
  local_48 = FUN_00498310(param_9,param_10);
  (**(code **)*local_res8)(local_res8,&local_48);
  *(undefined1 *)(local_res8 + 0x29) = param_11;
  local_res8[0x2c] = param_13;
  *(undefined8 *)((longlong)local_res8 + 0x154) = local_30;
  local_68 = 0;
  FUN_00498350(&local_58,0,0,0);
  *(undefined8 *)((longlong)local_res8 + 0x16c) = local_58;
  *(undefined8 *)((longlong)local_res8 + 0x174) = uStack_50;
  *(undefined4 *)(local_res8 + 0x2d) = param_14;
  FUN_00414480(&local_res18);
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

