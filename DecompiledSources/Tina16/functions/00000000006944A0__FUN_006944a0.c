/* Ghidra address: 006944a0 */
/* Ghidra symbol: FUN_006944a0 */


void FUN_006944a0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0xf8) == 0) {
    uVar1 = FUN_005ffa40(*(undefined8 *)(param_2 + 0xc0));
    thunk_FUN_041a9b5c(*(undefined8 *)(*(longlong *)(param_2 + 0xf0) + 0x68),uVar1);
    FUN_005ffb10(*(undefined8 *)(param_2 + 0xc0),0);
  }
  else {
    FUN_005ffb10(*(undefined8 *)(param_2 + 0xc0),0);
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0xc0));
  return;
}

