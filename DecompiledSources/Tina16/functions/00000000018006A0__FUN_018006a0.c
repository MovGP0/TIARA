/* Ghidra address: 018006a0 */
/* Ghidra symbol: FUN_018006a0 */


void FUN_018006a0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_04128719();
  *(undefined8 *)(param_1 + 0x6e8) = uVar1;
  uVar1 = FUN_0065b870(param_1);
  uVar1 = FUN_007f94c0(uVar1);
  *(undefined8 *)(param_1 + 0x6e0) = uVar1;
  return;
}

