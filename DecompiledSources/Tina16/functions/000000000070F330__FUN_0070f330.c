/* Ghidra address: 0070f330 */
/* Ghidra symbol: FUN_0070f330 */


void FUN_0070f330(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_00785c20(param_1);
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  uVar1 = FUN_00786090(param_1);
  thunk_FUN_041543e0(uVar1,0,0,1);
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}

