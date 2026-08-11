/* Ghidra address: 00a01f50 */
/* Ghidra symbol: FUN_00a01f50 */


undefined8
FUN_00a01f50(undefined8 param_1,char param_2,undefined8 param_3,undefined4 param_4,
            undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 local_res8;
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
  local_38 = param_4;
  FUN_00a01d40(local_res8,0,param_3,param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

