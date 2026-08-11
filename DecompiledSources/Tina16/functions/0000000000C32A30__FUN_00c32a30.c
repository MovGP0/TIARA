/* Ghidra address: 00c32a30 */
/* Ghidra symbol: FUN_00c32a30 */


void FUN_00c32a30(longlong param_1)

{
  if (*(char *)(param_1 + 0x50) != '\0') {
    FUN_00742ed0(*(undefined8 *)(param_1 + 0x88));
    FUN_00742eb0(*(undefined8 *)(param_1 + 0x88),1);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  return;
}

