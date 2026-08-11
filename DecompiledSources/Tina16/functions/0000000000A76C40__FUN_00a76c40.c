/* Ghidra address: 00a76c40 */
/* Ghidra symbol: FUN_00a76c40 */


void FUN_00a76c40(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x388) != 0) {
    uVar1 = FUN_005ffa40(*(undefined8 *)(param_2 + 0x400));
    thunk_FUN_041a19a1(uVar1,*(undefined8 *)(param_2 + 0x380));
    thunk_FUN_0416f828(*(undefined8 *)(param_2 + 0x388));
  }
  return;
}

