/* Ghidra address: 00cf8f40 */
/* Ghidra symbol: FUN_00cf8f40 */


undefined8 * FUN_00cf8f40(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_00cf8ec0(param_1);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar3 = param_2;
  for (lVar1 = 0x1e; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}

