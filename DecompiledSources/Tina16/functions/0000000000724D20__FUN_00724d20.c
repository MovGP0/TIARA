/* Ghidra address: 00724d20 */
/* Ghidra symbol: FUN_00724d20 */


void FUN_00724d20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x160) != 0) {
    (**(code **)(param_1 + 0x160))(*(undefined8 *)(param_1 + 0x168));
  }
  return;
}

