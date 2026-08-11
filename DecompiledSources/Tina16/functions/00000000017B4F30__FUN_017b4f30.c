/* Ghidra address: 017b4f30 */
/* Ghidra symbol: FUN_017b4f30 */


void FUN_017b4f30(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x58),(longlong)(*(int *)(param_1 + 0x60) * 8));
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x18);
  return;
}

