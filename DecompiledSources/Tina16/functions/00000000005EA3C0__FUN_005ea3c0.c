/* Ghidra address: 005ea3c0 */
/* Ghidra symbol: FUN_005ea3c0 */


longlong FUN_005ea3c0(longlong param_1,char param_2)

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
  FUN_005ea670(local_res8,0xffffffff80000001);
  *(undefined4 *)(local_res8 + 0x2c) = 0xf003f;
  *(undefined1 *)(local_res8 + 0x18) = 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

