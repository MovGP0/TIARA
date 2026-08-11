/* Ghidra address: 00695eb0 */
/* Ghidra symbol: FUN_00695eb0 */


void FUN_00695eb0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x5c) != 0) {
    uVar1 = FUN_005ffa40(*(undefined8 *)(param_2 + 0x50));
    thunk_FUN_0402759f(uVar1,*(undefined4 *)(param_2 + 0x5c));
  }
  FUN_005ffb10(*(undefined8 *)(param_2 + 0x50),0);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x50));
  return;
}

