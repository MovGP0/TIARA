/* Ghidra address: 01868620 */
/* Ghidra symbol: FUN_01868620 */


void FUN_01868620(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((**(byte **)(param_2 + 0xb8) & 0x20) != 0) {
    uVar1 = FUN_005ffa40(*(undefined8 *)(param_2 + 0xc0));
    thunk_FUN_039bba01(uVar1,*(undefined8 *)(param_2 + 0x78));
    thunk_FUN_0416f828(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}

