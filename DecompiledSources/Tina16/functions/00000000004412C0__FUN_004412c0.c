/* Ghidra address: 004412c0 */
/* Ghidra symbol: FUN_004412c0 */


void FUN_004412c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != -1) {
    thunk_FUN_03b19720(*(longlong *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  }
  return;
}

