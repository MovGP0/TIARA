/* Ghidra address: 015749b0 */
/* Ghidra symbol: FUN_015749b0 */


longlong FUN_015749b0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  longlong local_res8;
  undefined8 local_res20;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res20 = param_4;
  FUN_00414610(param_4);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_0044d490(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 0x30) = 1;
  *(undefined8 *)(local_res8 + 0x38) = 0;
  *(undefined4 *)(local_res8 + 0x34) = 0;
  FUN_00414ad0(local_res8 + 0x48,local_res20);
  *(undefined4 *)(local_res8 + 0x5c) = param_5;
  *(undefined4 *)(local_res8 + 0x34) = param_6;
  FUN_00414480(&local_res20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

