/* Ghidra address: 013b26e0 */
/* Ghidra symbol: FUN_013b26e0 */


undefined8 * FUN_013b26e0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_res10 [3];
  undefined8 local_2b8 [83];
  
  puVar1 = local_2b8;
  for (lVar2 = 0x52; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = *param_3;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  local_res10[0] = param_2;
  puVar1 = (undefined8 *)FUN_00410920(param_1,local_res10);
  if (puVar1 != (undefined8 *)0xffffffffffffffff) {
    FUN_00b94d80(puVar1,0);
    puVar3 = local_2b8;
    puVar4 = puVar1;
    for (lVar2 = 0x52; puVar4 = puVar4 + 1, param_1 = puVar1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
    }
  }
  return param_1;
}

