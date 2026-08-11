/* Ghidra address: 00aa16b0 */
/* Ghidra symbol: FUN_00aa16b0 */


void FUN_00aa16b0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x118) != 0) {
    uVar1 = FUN_005ffa40(*(undefined8 *)(param_2 + 0x188));
    thunk_FUN_039bba01(uVar1,*(undefined8 *)(param_2 + 0x118));
    thunk_FUN_0416f828(*(undefined8 *)(param_2 + 0x118));
  }
  return;
}

