/* Ghidra address: 012cc9b0 */
/* Ghidra symbol: FUN_012cc9b0 */


void FUN_012cc9b0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_04128719();
  *(undefined8 *)(param_1 + 0x710) = uVar1;
  uVar1 = FUN_0065b870(param_1);
  uVar1 = FUN_007f94c0(uVar1);
  *(undefined8 *)(param_1 + 0x708) = uVar1;
  uVar1 = FUN_00448ea0();
  *(undefined8 *)(param_1 + 0x750) = uVar1;
  FUN_00742eb0(*(undefined8 *)(param_1 + 0x6e8),1);
  return;
}

