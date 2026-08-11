/* Ghidra address: 01a88390 */
/* Ghidra symbol: FUN_01a88390 */


void FUN_01a88390(longlong param_1)

{
  FUN_007e2d20(*(longlong *)(param_1 + 0xa38),
               *(char *)(*(longlong *)(param_1 + 0xa38) + 0x80) == '\0');
  FUN_00f06730(L"QuickDraw",*(undefined1 *)(*(longlong *)(param_1 + 0xa38) + 0x80));
  return;
}

