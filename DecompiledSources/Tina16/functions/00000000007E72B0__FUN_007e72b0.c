/* Ghidra address: 007e72b0 */
/* Ghidra symbol: FUN_007e72b0 */


void FUN_007e72b0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x98))(param_1,0,0,0);
  if (param_1[0x11] != 0) {
    thunk_FUN_041b2403(param_1[0x11],0xb015,0,0);
  }
  return;
}

