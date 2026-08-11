/* Ghidra address: 00c2cd70 */
/* Ghidra symbol: FUN_00c2cd70 */


void FUN_00c2cd70(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x98) != 0) {
    thunk_FUN_041a19a1(*(undefined8 *)(param_2 + 0x90),*(undefined8 *)(param_2 + 0x98));
  }
  if (*(longlong *)(param_2 + 0x90) != 0) {
    thunk_FUN_041a2fd8(*(undefined8 *)(param_2 + 0x90));
  }
  return;
}

