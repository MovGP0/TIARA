/* Ghidra address: 00f81350 */
/* Ghidra symbol: FUN_00f81350 */


longlong FUN_00f81350(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_00414ad0(local_res8 + 8,local_res18);
  FUN_00414ad0(local_res8 + 0x10,local_res20);
  uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar1;
  *(undefined4 *)(local_res8 + 0x24) = 1;
  *(undefined1 *)(local_res8 + 0x38) = 0;
  FUN_00414560(&local_res18,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

