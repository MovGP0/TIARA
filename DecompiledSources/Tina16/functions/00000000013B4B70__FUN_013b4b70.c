/* Ghidra address: 013b4b70 */
/* Ghidra symbol: FUN_013b4b70 */


void FUN_013b4b70(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_2 + 0x230);
  for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  return;
}

