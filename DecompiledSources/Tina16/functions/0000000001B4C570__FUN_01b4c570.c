/* Ghidra address: 01b4c570 */
/* Ghidra symbol: FUN_01b4c570 */


void FUN_01b4c570(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1480) != 0) {
    FUN_01b4c520(*(longlong *)(param_1 + 0x1480),*(undefined4 *)(param_1 + 0x1490));
    *(undefined8 *)(param_1 + 0x1480) = 0;
  }
  *(undefined4 *)(param_1 + 0x1490) = 0;
  *(undefined4 *)(param_1 + 0x149c) = 0;
  return;
}

