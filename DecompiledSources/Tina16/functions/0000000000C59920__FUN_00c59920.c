/* Ghidra address: 00c59920 */
/* Ghidra symbol: FUN_00c59920 */


void FUN_00c59920(longlong param_1,longlong param_2)

{
  if (param_2 == *(longlong *)(param_1 + 0x490)) {
    if (*(longlong *)(param_1 + 0x4b0) != 0) {
      (**(code **)(param_1 + 0x4b0))(*(undefined8 *)(param_1 + 0x4b8),param_1);
    }
  }
  else if (*(longlong *)(param_1 + 0x4c0) != 0) {
    (**(code **)(param_1 + 0x4c0))(*(undefined8 *)(param_1 + 0x4c8),param_1);
  }
  return;
}

