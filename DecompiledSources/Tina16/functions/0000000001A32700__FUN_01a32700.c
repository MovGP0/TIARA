/* Ghidra address: 01a32700 */
/* Ghidra symbol: FUN_01a32700 */


longlong FUN_01a32700(longlong param_1,char param_2,undefined8 param_3)

{
  longlong local_res8;
  undefined8 local_res18 [2];
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_00410e60(local_res8,0);
  *(undefined8 *)(local_res8 + 8) = 0;
  FUN_00414ad0(local_res8 + 0x18,local_res18[0]);
  FUN_00414480(local_res8 + 0x20);
  *(undefined4 *)(local_res8 + 0x28) = 0;
  *(undefined4 *)(local_res8 + 0x2c) = 0;
  *(undefined8 *)(local_res8 + 0x30) = 0;
  *(undefined4 *)(local_res8 + 0x38) = 0;
  FUN_00414480(local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

