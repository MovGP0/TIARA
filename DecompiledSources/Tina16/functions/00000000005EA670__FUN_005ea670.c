/* Ghidra address: 005ea670 */
/* Ghidra symbol: FUN_005ea670 */


void FUN_005ea670(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x10) != param_2) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      thunk_FUN_0418fb4b(*(longlong *)(param_1 + 0x10));
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    FUN_005ea630(param_1);
  }
  return;
}

