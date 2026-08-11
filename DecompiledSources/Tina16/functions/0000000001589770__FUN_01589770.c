/* Ghidra address: 01589770 */
/* Ghidra symbol: FUN_01589770 */


undefined8 FUN_01589770(undefined8 param_1,char param_2)

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
  FUN_01589810(local_res8,0,0);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

