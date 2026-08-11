/* Ghidra address: 00d3b000 */
/* Ghidra symbol: FUN_00d3b000 */


longlong FUN_00d3b000(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00789eb0(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0xac) = 0;
  *(undefined4 *)(local_res8 + 0x78) = 0;
  *(undefined1 *)(local_res8 + 0xb5) = 0;
  *(undefined1 *)(local_res8 + 0xb6) = 1;
  *(undefined4 *)(local_res8 + 0x98) = 0;
  local_20 = 0xffffffff;
  uStack_1c = 0xffffffff;
  *(undefined8 *)(local_res8 + 0x80) = 0xffffffffffffffff;
  *(undefined4 *)(local_res8 + 0x88) = 0;
  FUN_00d3cf40(local_res8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

