/* Ghidra address: 00c24f30 */
/* Ghidra symbol: FUN_00c24f30 */


void FUN_00c24f30(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28));
  }
  return;
}

