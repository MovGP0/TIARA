/* Ghidra address: 00e80c50 */
/* Ghidra symbol: FUN_00e80c50 */


void FUN_00e80c50(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x6e0);
  for (lVar1 = 7; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

