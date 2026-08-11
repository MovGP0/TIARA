/* Ghidra address: 01574660 */
/* Ghidra symbol: FUN_01574660 */


longlong FUN_01574660(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined4 param_5,undefined8 param_6)

{
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_00414610(param_6);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_0044d490(local_res8,0,param_3);
  *(undefined8 *)(local_res8 + 0x38) = param_4;
  *(undefined4 *)(local_res8 + 0x34) = 0;
  *(undefined4 *)(local_res8 + 0x30) = param_5;
  FUN_00414ad0(local_res8 + 0x40,param_6);
  FUN_00414480(&param_6);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

