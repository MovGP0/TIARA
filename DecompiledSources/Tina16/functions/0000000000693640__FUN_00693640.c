/* Ghidra address: 00693640 */
/* Ghidra symbol: FUN_00693640 */


void FUN_00693640(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_005ffb10(*(undefined8 *)(param_2 + 0xb8),0);
  FUN_00410f20(*(undefined8 *)(param_2 + 0xb8));
  if (*(longlong *)(param_2 + 0xa8) == 0) {
    uVar1 = FUN_00786090(*(undefined8 *)(param_2 + 0xe0));
    thunk_FUN_0416269d(uVar1,param_2 + 0x60);
  }
  return;
}

