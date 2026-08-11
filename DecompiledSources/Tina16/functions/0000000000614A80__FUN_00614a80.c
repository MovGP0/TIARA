/* Ghidra address: 00614a80 */
/* Ghidra symbol: FUN_00614a80 */


void FUN_00614a80(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 8));
  }
  return;
}

