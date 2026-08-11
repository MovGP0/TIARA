/* Ghidra address: 014c9f50 */
/* Ghidra symbol: FUN_014c9f50 */


longlong FUN_014c9f50(longlong param_1,char param_2,undefined8 param_3)

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
  *(undefined8 *)(local_res8 + 0x22b0) = param_3;
  *(undefined8 *)(local_res8 + 0x12a0) = 0;
  *(undefined4 *)(local_res8 + 0x22c0) = 0;
  *(undefined4 *)(local_res8 + 0x22c4) = 0xffffffff;
  *(undefined8 *)(local_res8 + 0x23e8) = 0;
  *(undefined4 *)(local_res8 + 0x22c8) = 0;
  FUN_00410e60(local_res8,0);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

