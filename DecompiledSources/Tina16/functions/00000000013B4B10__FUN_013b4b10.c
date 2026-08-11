/* Ghidra address: 013b4b10 */
/* Ghidra symbol: FUN_013b4b10 */


void FUN_013b4b10(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  for (lVar1 = 0x52; param_2 = param_2 + 1, lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_2 = *param_3;
    param_3 = param_3 + 1;
  }
  return;
}

