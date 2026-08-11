/* Ghidra address: 013b49f0 */
/* Ghidra symbol: FUN_013b49f0 */


void FUN_013b49f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_00b94e60();
  for (lVar2 = 0x52; puVar1 = puVar1 + 1, lVar2 != 0; lVar2 = lVar2 + -1) {
    *param_3 = *puVar1;
    param_3 = param_3 + 1;
  }
  return;
}

