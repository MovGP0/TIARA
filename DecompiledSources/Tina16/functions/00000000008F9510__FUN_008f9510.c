/* Ghidra address: 008f9510 */
/* Ghidra symbol: FUN_008f9510 */


longlong * FUN_008f9510(longlong *param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  longlong *local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  uint local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00410e60(local_res8,0);
  local_1c = 0;
  if (param_3 != 0) {
    local_1c = *(uint *)(param_3 + -4) >> 1;
  }
  (**(code **)(*local_res8 + 8))(local_res8,local_1c * 2);
  FUN_00409a70(param_3,local_res8[1],(longlong)(int)local_res8[2]);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

