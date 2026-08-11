/* Ghidra address: 004b6930 */
/* Ghidra symbol: FUN_004b6930 */


longlong * FUN_004b6930(longlong *param_1,char param_2)

{
  undefined1 *puVar1;
  longlong *local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  code *local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_004b28b0(local_res8,0);
  local_20 = local_res8;
  local_28 = *(code **)(*local_res8 + 0x70);
  *(bool *)((longlong)local_res8 + 0x71) = local_28 != FUN_004b68d0;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

