/* Ghidra address: 01807e90 */
/* Ghidra symbol: FUN_01807e90 */


void FUN_01807e90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_01fa7e48 != (code *)0x0) {
    uVar1 = FUN_00416740(param_2);
    (*DAT_01fa7e48)(param_1,uVar1,1,0);
  }
  return;
}

