/* Ghidra address: 00cb3470 */
/* Ghidra symbol: FUN_00cb3470 */


void FUN_00cb3470(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x168) != 0) {
    (**(code **)(param_1 + 0x168))(*(undefined8 *)(param_1 + 0x170),param_1);
  }
  return;
}

