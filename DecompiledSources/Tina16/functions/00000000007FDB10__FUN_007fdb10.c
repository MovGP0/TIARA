/* Ghidra address: 007fdb10 */
/* Ghidra symbol: FUN_007fdb10 */


void FUN_007fdb10(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x600) != 0) {
    (**(code **)(param_1 + 0x600))(*(undefined8 *)(param_1 + 0x608),param_1);
  }
  return;
}

