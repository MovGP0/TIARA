/* Ghidra address: 00892130 */
/* Ghidra symbol: FUN_00892130 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00892130(undefined8 param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 local_res8;
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
  FUN_0089be20(local_res8,0);
  _DAT_01e232d8 = local_res8;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

