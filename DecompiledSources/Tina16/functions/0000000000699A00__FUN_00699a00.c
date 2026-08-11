/* Ghidra address: 00699a00 */
/* Ghidra symbol: FUN_00699a00 */


void FUN_00699a00(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_005ffb10(*(undefined8 *)(param_2 + 0x78),0);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x78));
  if (*(longlong *)(*(longlong *)(param_2 + 0xa8) + 8) == 0) {
    uVar1 = FUN_00786090(*(undefined8 *)(param_2 + 0xa0));
    thunk_FUN_0416269d(uVar1,param_2 + 0x30);
  }
  return;
}

