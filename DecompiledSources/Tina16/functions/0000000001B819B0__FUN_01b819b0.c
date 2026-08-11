/* Ghidra address: 01b819b0 */
/* Ghidra symbol: FUN_01b819b0 */


longlong FUN_01b819b0(longlong param_1,char param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong local_res8;
  undefined8 local_res18 [2];
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_20 = *param_4;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_00414ad0(local_res8 + 8,local_res18[0]);
  FUN_00419260(local_res8 + 0x10,&DAT_01b7cfa8,1,100);
  *(undefined4 *)(local_res8 + 0x18) = 0;
  **(undefined8 **)(local_res8 + 0x10) = local_20;
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_00414480(local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

