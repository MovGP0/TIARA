/* Ghidra address: 00dde660 */
/* Ghidra symbol: FUN_00dde660 */


void FUN_00dde660(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    thunk_FUN_03d5bf3d(*(longlong *)(param_1 + 0x4a8));
    *(undefined8 *)(param_1 + 0x4a8) = 0;
  }
  return;
}

