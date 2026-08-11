/* Ghidra address: 0069d550 */
/* Ghidra symbol: FUN_0069d550 */


void FUN_0069d550(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_0069d4b0(param_1,1);
  uVar1 = FUN_0069db00(param_1);
  uVar1 = FUN_005ffa40(uVar1);
  thunk_FUN_0415c706(uVar1);
  *(undefined1 *)(param_1 + 0x39) = 1;
  FUN_0069d650(param_1);
  *(undefined1 *)(param_1 + 0x39) = 1;
  return;
}

