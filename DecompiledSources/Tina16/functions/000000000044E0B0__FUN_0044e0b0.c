/* Ghidra address: 0044e0b0 */
/* Ghidra symbol: FUN_0044e0b0 */


void FUN_0044e0b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_0044e0f0(param_1);
  if (DAT_0200c428 != (code *)0x0) {
    uVar1 = (*DAT_0200c428)(param_2);
    FUN_0044e130(param_1,uVar1);
  }
  return;
}

