/* Ghidra address: 008abf80 */
/* Ghidra symbol: FUN_008abf80 */


longlong * FUN_008abf80(longlong *param_1,char param_2,char param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
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
  FUN_00410e60(local_res8,0);
  *(undefined1 *)(local_res8 + 1) = 1;
  lVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_res8[5] = lVar2;
  lVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_res8[4] = lVar2;
  if (param_3 != '\0') {
    (**(code **)(*local_res8 + 8))(local_res8);
  }
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

