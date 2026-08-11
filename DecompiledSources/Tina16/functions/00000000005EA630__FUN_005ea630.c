/* Ghidra address: 005ea630 */
/* Ghidra symbol: FUN_005ea630 */


void FUN_005ea630(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    if (*(char *)(param_1 + 0x18) == '\0') {
      thunk_FUN_041dab97(*(longlong *)(param_1 + 8));
    }
    thunk_FUN_0418fb4b(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_00414480(param_1 + 0x20);
  }
  return;
}

