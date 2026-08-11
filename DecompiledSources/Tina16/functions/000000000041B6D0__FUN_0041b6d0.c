/* Ghidra address: 0041b6d0 */
/* Ghidra symbol: FUN_0041b6d0 */


void FUN_0041b6d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)PTR_DAT_01db9078;
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      *param_1 = PTR_DAT_01db9078;
      PTR_DAT_01db9078 = (undefined *)param_1;
      return;
    }
    if (puVar1 == param_1) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  return;
}

