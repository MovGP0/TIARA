/* Ghidra address: 00f2d4e0 */
/* Ghidra symbol: FUN_00f2d4e0 */


longlong FUN_00f2d4e0(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     undefined4 param_5,char param_6)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410e60(local_res8,0);
  FUN_00f2d360(local_res8,param_3,param_4,param_5);
  *(char *)(local_res8 + 0x20) = param_6;
  if (param_6 != '\0') {
    FUN_00f2d640(local_res8);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

