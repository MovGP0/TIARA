/* Ghidra address: 01b914b0 */
/* Ghidra symbol: FUN_01b914b0 */


void FUN_01b914b0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_04128719();
  *(undefined8 *)(param_1 + 0x6d8) = uVar1;
  uVar1 = FUN_0065b870(param_1);
  uVar1 = FUN_007f94c0(uVar1);
  *(undefined8 *)(param_1 + 0x6d0) = uVar1;
  *(undefined1 *)(param_1 + 0x6c8) = 0;
  return;
}

