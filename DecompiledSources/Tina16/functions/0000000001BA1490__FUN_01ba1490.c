/* Ghidra address: 01ba1490 */
/* Ghidra symbol: FUN_01ba1490 */


longlong FUN_01ba1490(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined4 param_6)

{
  longlong local_res8;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  *(undefined8 *)(local_res8 + 0x970) = local_res20;
  *(undefined8 *)(local_res8 + 0x968) = param_5;
  FUN_00414ad0(local_res8 + 0x978,local_res18);
  FUN_00414480(local_res8 + 0x20);
  *(undefined4 *)(local_res8 + 0x73c) = param_6;
  FUN_00414480(&local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

