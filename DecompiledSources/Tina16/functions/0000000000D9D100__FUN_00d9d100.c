/* Ghidra address: 00d9d100 */
/* Ghidra symbol: FUN_00d9d100 */


void FUN_00d9d100(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x5c) != 0) {
    thunk_FUN_0402759f(*(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x70),
                       *(undefined4 *)(param_2 + 0x5c));
  }
  return;
}

