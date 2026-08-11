/* Ghidra address: 00d45540 */
/* Ghidra symbol: FUN_00d45540 */


longlong * FUN_00d45540(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong *local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  uint local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_1c = thunk_FUN_04118143(param_3,0xfffffff0);
  if (((local_1c & 3) != 3) && ((local_1c & 0xe) != 0xe)) {
    FUN_00788130(local_res8,0,param_3);
  }
  *(undefined4 *)(local_res8 + 0xc) = 0;
  FUN_00788d90(local_res8,7);
  (**(code **)(*local_res8 + 0x48))(local_res8);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

