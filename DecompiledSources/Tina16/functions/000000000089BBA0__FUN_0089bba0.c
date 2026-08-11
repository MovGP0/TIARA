/* Ghidra address: 0089bba0 */
/* Ghidra symbol: FUN_0089bba0 */


undefined8 FUN_0089bba0(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_38 = param_4;
  FUN_0089ba00(local_res8,0,param_3,1);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

