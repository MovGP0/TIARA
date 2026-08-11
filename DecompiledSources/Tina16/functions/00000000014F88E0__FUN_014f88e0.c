/* Ghidra address: 014f88e0 */
/* Ghidra symbol: FUN_014f88e0 */


longlong FUN_014f88e0(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410e60(local_res8,0);
  *(undefined4 *)(local_res8 + 8) = 0;
  *(undefined4 *)(local_res8 + 0xc) = 0;
  *(undefined4 *)(local_res8 + 0x10) = 0;
  *(undefined1 *)(local_res8 + 0x14) = 0;
  FUN_00448ea0();
  local_38 = local_res8 + 0x24;
  FUN_00448ad0();
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

