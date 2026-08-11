/* Ghidra address: 00c28ad0 */
/* Ghidra symbol: FUN_00c28ad0 */


void FUN_00c28ad0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}

