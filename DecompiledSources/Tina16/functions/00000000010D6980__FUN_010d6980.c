/* Ghidra address: 010d6980 */
/* Ghidra symbol: FUN_010d6980 */


void FUN_010d6980(longlong param_1)

{
  if (*(char *)(param_1 + 0xb8) != '\0') {
    FUN_010d6a50(param_1,2,0);
  }
  *(undefined1 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    thunk_FUN_041652c2(*(longlong *)(param_1 + 0x60));
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    thunk_FUN_041d2921(*(longlong *)(param_1 + 0x58));
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    thunk_FUN_041d2921(*(longlong *)(param_1 + 0xa0));
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    thunk_FUN_041d2921(*(longlong *)(param_1 + 0xa8));
  }
  return;
}

