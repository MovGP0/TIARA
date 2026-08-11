/* Ghidra address: 015c2060 */
/* Ghidra symbol: FUN_015c2060 */


longlong FUN_015c2060(longlong param_1,char param_2)

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
  *(undefined1 *)(local_res8 + 8) = 1;
  *(undefined1 *)(local_res8 + 9) = 1;
  *(undefined1 *)(local_res8 + 0xb) = 1;
  *(undefined1 *)(local_res8 + 0xc) = 1;
  *(undefined1 *)(local_res8 + 0xd) = 1;
  *(undefined1 *)(local_res8 + 0xe) = 1;
  *(undefined4 *)(local_res8 + 0x10) = 0x28bf;
  *(undefined1 *)(local_res8 + 10) = 4;
  *(undefined1 *)(local_res8 + 0x14) = 1;
  *(undefined1 *)(local_res8 + 0x15) = 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

