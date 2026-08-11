/* Ghidra address: 00a05c20 */
/* Ghidra symbol: FUN_00a05c20 */


void FUN_00a05c20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x48));
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}

