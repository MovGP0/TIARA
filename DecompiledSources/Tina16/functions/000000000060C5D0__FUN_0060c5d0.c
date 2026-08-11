/* Ghidra address: 0060c5d0 */
/* Ghidra symbol: FUN_0060c5d0 */


void FUN_0060c5d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    thunk_FUN_041dba40(*(longlong *)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

