/* Ghidra address: 01d2ae00 */
/* Ghidra symbol: FUN_01d2ae00 */


longlong * FUN_01d2ae00(longlong *param_1,char param_2)

{
  undefined1 *puVar1;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_01d33100(local_res8,0);
  local_res8[7] = 0;
  (**(code **)(*local_res8 + 0x50))(local_res8,0);
  *(undefined1 *)((longlong)local_res8 + 0x44) = 1;
  *(undefined1 *)((longlong)local_res8 + 0x11) = 1;
  *(undefined1 *)((longlong)local_res8 + 0x12) = 1;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

