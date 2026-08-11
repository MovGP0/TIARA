/* Ghidra address: 010d34b0 */
/* Ghidra symbol: FUN_010d34b0 */


undefined8 * FUN_010d34b0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_res10 [3];
  undefined8 local_60 [8];
  
  puVar1 = local_60;
  for (lVar2 = 7; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = *param_3;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  local_res10[0] = param_2;
  puVar1 = (undefined8 *)FUN_00410920(param_1,local_res10);
  if (puVar1 != (undefined8 *)0xffffffffffffffff) {
    puVar3 = local_60;
    puVar4 = puVar1;
    for (lVar2 = 7; puVar4 = puVar4 + 1, param_1 = puVar1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
    }
  }
  return param_1;
}

