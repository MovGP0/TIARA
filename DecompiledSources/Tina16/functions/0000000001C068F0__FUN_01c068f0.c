/* Ghidra address: 01c068f0 */
/* Ghidra symbol: FUN_01c068f0 */


void FUN_01c068f0(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_01c069b0(param_1);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    uVar1 = FUN_0065b870(*(longlong *)(param_1 + 0x78));
    thunk_FUN_0413e052(uVar1,0xb404,0,param_1);
  }
  return;
}

