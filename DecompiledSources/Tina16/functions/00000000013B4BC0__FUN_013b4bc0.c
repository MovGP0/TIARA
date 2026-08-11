/* Ghidra address: 013b4bc0 */
/* Ghidra symbol: FUN_013b4bc0 */


void FUN_013b4bc0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_00b94e60();
  puVar3 = (undefined8 *)(lVar1 + 0x230);
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  return;
}

