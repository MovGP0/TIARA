/* Ghidra address: 0045b660 */
/* Ghidra symbol: FUN_0045b660 */


longlong FUN_0045b660(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_38 = 0;
  FUN_0045b0a0(local_res8,0,0xfde9,8);
  *(undefined1 *)(local_res8 + 8) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

