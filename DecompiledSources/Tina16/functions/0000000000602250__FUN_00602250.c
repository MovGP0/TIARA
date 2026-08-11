/* Ghidra address: 00602250 */
/* Ghidra symbol: FUN_00602250 */


void FUN_00602250(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30));
  }
  return;
}

