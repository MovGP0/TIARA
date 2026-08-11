/* Ghidra address: 00c7d520 */
/* Ghidra symbol: FUN_00c7d520 */


undefined8 FUN_00c7d520(undefined8 param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  undefined1 auStack_1b8 [40];
  undefined1 *local_190;
  
  local_190 = auStack_1b8;
  local_res8 = param_1;
  puVar1 = auStack_1b8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_190;
  }
  local_190 = puVar1;
  FUN_00410e60(local_res8,0);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

