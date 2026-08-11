/* Ghidra address: 016195c0 */
/* Ghidra symbol: FUN_016195c0 */


longlong FUN_016195c0(longlong param_1,char param_2,undefined1 param_3,undefined4 param_4,
                     undefined4 param_5)

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
  *(undefined1 *)(local_res8 + 8) = param_3;
  *(undefined4 *)(local_res8 + 0xc) = param_4;
  *(undefined4 *)(local_res8 + 0x10) = param_5;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

