/* Ghidra address: 00844190 */
/* Ghidra symbol: FUN_00844190 */


void FUN_00844190(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_1 + 0x4bc);
  *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_1 + 0x4c0);
  *(undefined8 *)(param_1 + 0x4a8) = *(undefined8 *)(param_1 + 0x4e8);
  *(undefined8 *)(param_1 + 0x498) = *(undefined8 *)(param_1 + 0x4a8);
  if ((*(uint *)(param_1 + 0x4d4) & 0x1000) != 0) {
    *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x4a4) + -1;
  }
  return;
}

