/* Ghidra address: 013b2750 */
/* Ghidra symbol: FUN_013b2750 */


undefined8 * FUN_013b2750(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  puVar1 = (undefined8 *)FUN_00410920(param_1,local_res10);
  if (puVar1 != (undefined8 *)0xffffffffffffffff) {
    FUN_00b94d80(puVar1,0);
    lVar2 = 0x52;
    puVar3 = puVar1;
    while( true ) {
      puVar3 = puVar3 + 1;
      param_3 = param_3 + 1;
      param_1 = puVar1;
      if (lVar2 == 0) break;
      lVar2 = lVar2 + -1;
      *puVar3 = *param_3;
    }
  }
  return param_1;
}

