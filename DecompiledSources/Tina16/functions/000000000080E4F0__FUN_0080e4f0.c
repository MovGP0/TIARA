/* Ghidra address: 0080e4f0 */
/* Ghidra symbol: FUN_0080e4f0 */


void FUN_0080e4f0(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  FUN_0080e550(param_1);
  uVar1 = thunk_FUN_04176ccd(0,0,param_2,PTR_FUN_01e15ca0);
  *(undefined8 *)(param_1 + 0x110) = uVar1;
  *(undefined1 *)(param_1 + 0x109) = param_3;
  if (*(longlong *)(param_1 + 0x110) == 0) {
    FUN_0080e820(param_1);
  }
  return;
}

