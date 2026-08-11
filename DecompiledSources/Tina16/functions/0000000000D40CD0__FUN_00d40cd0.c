/* Ghidra address: 00d40cd0 */
/* Ghidra symbol: FUN_00d40cd0 */


void FUN_00d40cd0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_041b2403(*(longlong *)(param_1 + 8),0x112,0xf120,0);
  }
  return;
}

