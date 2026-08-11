/* Ghidra address: 005dcb50 */
/* Ghidra symbol: FUN_005dcb50 */


longlong *
FUN_005dcb50(longlong *param_1,char param_2,undefined8 param_3,undefined8 param_4,undefined1 param_5
            )

{
  undefined1 *puVar1;
  longlong *local_res8;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_38 = param_5;
  local_30 = 1;
  (**(code **)(*local_res8 + 0xd8))(local_res8,0,param_3,param_4);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

