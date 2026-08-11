/* Ghidra address: 010d3800 */
/* Ghidra symbol: FUN_010d3800 */


void FUN_010d3800(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_00b94e60(param_1,*(int *)(param_1 + 0x10) + -1);
  puVar3 = (undefined8 *)(lVar1 + 0x10);
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

