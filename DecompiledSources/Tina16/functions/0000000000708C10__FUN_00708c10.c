/* Ghidra address: 00708c10 */
/* Ghidra symbol: FUN_00708c10 */


void FUN_00708c10(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xa8) == 0) {
    thunk_FUN_0416269d(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x60) + 0x48),
                       param_2 + 0x60);
  }
  FUN_005ffb10(*(undefined8 *)(param_2 + 0x58),0);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x58));
  return;
}

