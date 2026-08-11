/* Ghidra address: 00aa1650 */
/* Ghidra symbol: FUN_00aa1650 */


void FUN_00aa1650(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(*(longlong *)(param_2 + 0x180) + 0x50e) != '\0') {
    uVar1 = FUN_005ffa40(*(undefined8 *)(param_2 + 0x188));
    thunk_FUN_039bba01(uVar1,*(undefined8 *)(param_2 + 0x128));
    thunk_FUN_0416f828(*(undefined8 *)(param_2 + 0x120));
    if (*(longlong *)(param_2 + 0x128) != 0) {
      thunk_FUN_0416f828(*(undefined8 *)(param_2 + 0x128));
    }
  }
  return;
}

