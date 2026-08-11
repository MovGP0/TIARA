/* Ghidra address: 01572330 */
/* Ghidra symbol: FUN_01572330 */


longlong FUN_01572330(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     undefined8 param_5,undefined4 param_6)

{
  longlong local_res8;
  undefined8 local_res18;
  undefined4 local_res20;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(param_5);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_00414ad0(local_res8 + 8,local_res18);
  FUN_00414ad0(local_res8 + 0x10,param_5);
  *(undefined4 *)(local_res8 + 0x18) = local_res20;
  *(undefined4 *)(local_res8 + 0x1c) = param_6;
  FUN_00414480(&local_res18);
  FUN_00414480(&param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

