/* Ghidra address: 005fe970 */
/* Ghidra symbol: FUN_005fe970 */


void FUN_005fe970(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 200) == 0) {
    if (*(longlong *)(param_2 + 0xc0) != 0) {
      thunk_FUN_041a19a1(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(param_2 + 0xc0));
    }
    thunk_FUN_041a2fd8(*(undefined8 *)(param_2 + 0xb8));
  }
  else {
    FUN_00410f20(*(undefined8 *)(param_2 + 200));
  }
  return;
}

