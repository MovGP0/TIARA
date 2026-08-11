/* Ghidra address: 01bbb610 */
/* Ghidra symbol: FUN_01bbb610 */


longlong FUN_01bbb610(longlong param_1,char param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined8 local_res18 [2];
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_00410e60(local_res8,0);
  *(undefined8 *)(local_res8 + 0x70) = 0;
  FUN_00414480(local_res8 + 0x18);
  FUN_00414480(local_res8 + 0x28);
  FUN_00414480(local_res8 + 0x20);
  FUN_00414ad0(local_res8 + 8,local_res18[0]);
  uVar1 = FUN_01bbb1e0(&DAT_01bb7eb0,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar1;
  local_1c = 0;
  do {
    uVar1 = FUN_01bbb1e0(&DAT_01bb7eb0,1);
    *(undefined8 *)(local_res8 + 0x38 + (longlong)local_1c * 8) = uVar1;
    local_1c = local_1c + 1;
  } while (local_1c != 2);
  local_1c = 0;
  do {
    uVar1 = FUN_01bbb290(&DAT_01bb8150,1);
    *(undefined8 *)(local_res8 + 0x48 + (longlong)local_1c * 8) = uVar1;
    *(undefined1 *)(local_res8 + 0x68 + (longlong)local_1c) = 0;
    local_1c = local_1c + 1;
  } while (local_1c != 4);
  FUN_00414480(local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

