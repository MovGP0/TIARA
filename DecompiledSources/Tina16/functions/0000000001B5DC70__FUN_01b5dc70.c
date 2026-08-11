/* Ghidra address: 01b5dc70 */
/* Ghidra symbol: FUN_01b5dc70 */


void FUN_01b5dc70(longlong param_1)

{
  if (*(char *)(param_1 + 0x5b) != '\0') {
    FUN_00e1d330();
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_00410f20(*(longlong *)(param_1 + 0x80));
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined1 *)(param_1 + 0x5b) = 0;
  }
  return;
}

