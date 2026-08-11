/* Ghidra address: 009fa190 */
/* Ghidra symbol: FUN_009fa190 */


longlong FUN_009fa190(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4)

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
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_00410e60(local_res8,0);
  FUN_00414ad0(local_res8 + 8,local_res18);
  *(undefined4 *)(local_res8 + 0x10) = local_res20;
  FUN_00414480(&local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

