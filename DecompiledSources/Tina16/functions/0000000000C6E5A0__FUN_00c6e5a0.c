/* Ghidra address: 00c6e5a0 */
/* Ghidra symbol: FUN_00c6e5a0 */


longlong FUN_00c6e5a0(longlong param_1,char param_2)

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
  *(undefined1 *)(local_res8 + 0xb) = 1;
  *(undefined1 *)(local_res8 + 0xc) = 1;
  *(undefined1 *)(local_res8 + 0xf) = 1;
  *(undefined1 *)(local_res8 + 0x10) = 1;
  *(undefined1 *)(local_res8 + 0x11) = 0;
  *(undefined1 *)(local_res8 + 0x12) = 2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

