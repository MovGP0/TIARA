/* Ghidra address: 00e06db0 */
/* Ghidra symbol: FUN_00e06db0 */


undefined8 * FUN_00e06db0(undefined8 *param_1,char param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *local_res8;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined8 local_58 [7];
  
  local_60 = auStack_88;
  puVar4 = local_58;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_004119e0(param_1,param_2);
    puVar1 = local_60;
  }
  local_60 = puVar1;
  puVar3 = local_58;
  puVar4 = local_res8;
  for (lVar2 = 6; puVar4 = puVar4 + 1, lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
  }
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

