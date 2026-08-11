/* Ghidra address: 00c28ba0 */
/* Ghidra symbol: FUN_00c28ba0 */


void FUN_00c28ba0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

