/* Ghidra address: 010d32c0 */
/* Ghidra symbol: FUN_010d32c0 */


void FUN_010d32c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_00b94e60();
  for (lVar2 = 0x5e; puVar1 = puVar1 + 1, lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = *param_3;
    param_3 = param_3 + 1;
  }
  return;
}

