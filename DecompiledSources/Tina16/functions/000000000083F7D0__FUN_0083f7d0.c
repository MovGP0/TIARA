/* Ghidra address: 0083f7d0 */
/* Ghidra symbol: FUN_0083f7d0 */


void FUN_0083f7d0(longlong param_1,undefined2 param_2)

{
  undefined8 uVar1;
  
  FUN_0083f7b0(param_1);
  if (*(longlong *)(param_1 + 0x510) != 0) {
    uVar1 = FUN_0065b870(*(longlong *)(param_1 + 0x510));
    thunk_FUN_0413e052(uVar1,0x102,param_2,0);
  }
  return;
}

