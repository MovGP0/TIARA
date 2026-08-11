/* Ghidra address: 01b5e780 */
/* Ghidra symbol: FUN_01b5e780 */


void FUN_01b5e780(longlong param_1)

{
  if (*(char *)(param_1 + 0x5b) != '\0') {
    if (*(char *)(param_1 + 0x59) == '\0') {
      FUN_0153b340(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
    }
    FUN_0153b230(0,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
    *(undefined1 *)(param_1 + 0x59) = 1;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_00410f20(*(longlong *)(param_1 + 0x80));
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined1 *)(param_1 + 0x5b) = 0;
  }
  return;
}

