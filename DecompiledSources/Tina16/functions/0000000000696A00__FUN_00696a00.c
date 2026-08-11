/* Ghidra address: 00696a00 */
/* Ghidra symbol: FUN_00696a00 */


void FUN_00696a00(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_00786780(param_1,param_2);
  FUN_00785c20(param_1,param_2);
  uVar1 = FUN_00786090(param_1);
  thunk_FUN_041543e0(uVar1,0,0,0x101);
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}

