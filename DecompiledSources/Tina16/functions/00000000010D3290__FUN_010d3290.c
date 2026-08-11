/* Ghidra address: 010d3290 */
/* Ghidra symbol: FUN_010d3290 */


void FUN_010d3290(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_00b94e60();
  for (lVar2 = 0x5e; puVar1 = puVar1 + 1, lVar2 != 0; lVar2 = lVar2 + -1) {
    *param_3 = *puVar1;
    param_3 = param_3 + 1;
  }
  return;
}

