/* Ghidra address: 01b81670 */
/* Ghidra symbol: FUN_01b81670 */


longlong FUN_01b81670(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  longlong local_res8;
  undefined8 local_res20;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_6);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  *(undefined8 *)(local_res8 + 8) = param_3;
  FUN_00414ad0(local_res8 + 0x10,local_res20);
  *(undefined4 *)(local_res8 + 0x20) = param_5;
  *(undefined4 *)(local_res8 + 0x24) = param_7;
  FUN_00414ad0(local_res8 + 0x18,param_6);
  FUN_00414480(&local_res20);
  FUN_00414480(&param_6);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

