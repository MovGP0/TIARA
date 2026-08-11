/* Ghidra address: 01d3a360 */
/* Ghidra symbol: FUN_01d3a360 */


undefined8 * FUN_01d3a360(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_res10 [3];
  undefined8 local_9a [15];
  
  puVar1 = local_9a;
  for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = *param_3;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  *(undefined2 *)puVar1 = *(undefined2 *)param_3;
  local_res10[0] = param_2;
  puVar1 = (undefined8 *)FUN_00410920(param_1,local_res10);
  if (puVar1 != (undefined8 *)0xffffffffffffffff) {
    FUN_00b94d80(puVar1,0);
    puVar3 = local_9a;
    puVar4 = puVar1;
    for (lVar2 = 0xe; puVar4 = puVar4 + 1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
    FUN_00414480(puVar1 + 0x10);
    param_1 = puVar1;
  }
  return param_1;
}

