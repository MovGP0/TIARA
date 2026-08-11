/* Ghidra address: 01143190 */
/* Ghidra symbol: FUN_01143190 */


void FUN_01143190(longlong param_1)

{
  if (*(char *)(param_1 + 0x1055dc) != '\0') {
    FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,*(undefined4 *)(param_1 + 0x9c));
    *(undefined1 *)(param_1 + 0x1055dc) = 0;
  }
  return;
}

