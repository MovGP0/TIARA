/* Ghidra address: 010c9d50 */
/* Ghidra symbol: FUN_010c9d50 */


longlong FUN_010c9d50(longlong param_1,char param_2)

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
  *(undefined4 *)(local_res8 + 8) = 1;
  *(undefined4 *)(local_res8 + 0xc) = 0;
  *(undefined2 *)(local_res8 + 0x20) = 0x7c;
  *(undefined1 *)(local_res8 + 0x22) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

