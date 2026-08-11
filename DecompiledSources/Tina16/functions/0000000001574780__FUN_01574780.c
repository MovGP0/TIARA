/* Ghidra address: 01574780 */
/* Ghidra symbol: FUN_01574780 */


longlong FUN_01574780(longlong param_1,char param_2,undefined4 param_3,undefined4 param_4,
                     undefined8 param_5,undefined8 param_6)

{
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_0044d490(local_res8,0,0);
  *(undefined8 *)(local_res8 + 0x38) = 0;
  *(undefined4 *)(local_res8 + 0x34) = 0;
  *(undefined4 *)(local_res8 + 0x30) = 1;
  *(undefined4 *)(local_res8 + 0x58) = param_3;
  *(undefined4 *)(local_res8 + 0x5c) = param_4;
  FUN_00414ad0(local_res8 + 0x48,param_5);
  FUN_00414ad0(local_res8 + 0x50,param_6);
  FUN_00414560(&param_5,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

