/* Ghidra address: 0146c620 */
/* Ghidra symbol: FUN_0146c620 */


void FUN_0146c620(longlong param_1)

{
  FUN_007e2d20(*(longlong *)(param_1 + 0x7b8),
               *(char *)(*(longlong *)(param_1 + 0x7b8) + 0x80) == '\0');
  FUN_00682f00(*(undefined8 *)(param_1 + 0x6e8),
               *(undefined1 *)(*(longlong *)(param_1 + 0x7b8) + 0x80));
  if (*(char *)(*(longlong *)(param_1 + 0x7b8) + 0x80) == '\0') {
    FUN_00682ee0(*(undefined8 *)(param_1 + 0x6e8),3);
  }
  else {
    FUN_00682ee0(*(undefined8 *)(param_1 + 0x6e8),2);
  }
  return;
}

