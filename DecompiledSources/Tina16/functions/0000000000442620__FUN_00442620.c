/* Ghidra address: 00442620 */
/* Ghidra symbol: FUN_00442620 */


void FUN_00442620(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(undefined4 *)(param_2 + -4);
  }
  uVar1 = FUN_00416740(param_2);
  FUN_00442580(param_1,uVar1,uVar2);
  return;
}

