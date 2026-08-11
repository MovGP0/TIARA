/* Ghidra address: 00687b40 */
/* Ghidra symbol: FUN_00687b40 */


void FUN_00687b40(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x20),param_1);
  }
  return;
}

