/* Ghidra address: 00ac4b90 */
/* Ghidra symbol: FUN_00ac4b90 */


undefined8 FUN_00ac4b90(undefined8 param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_38 = *(undefined1 *)(param_3 + 0x18);
  FUN_00ac4a80(local_res8,0,param_3 + 8,*(undefined8 *)(param_3 + 0x10));
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

