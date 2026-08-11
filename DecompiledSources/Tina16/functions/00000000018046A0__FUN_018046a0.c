/* Ghidra address: 018046a0 */
/* Ghidra symbol: FUN_018046a0 */


void FUN_018046a0(longlong param_1)

{
  if (*(char *)(param_1 + 0x20) != '\0') {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_004412f0(*(undefined8 *)(param_1 + 0x18));
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x30));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}

