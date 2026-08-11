/* Ghidra address: 00723db0 */
/* Ghidra symbol: FUN_00723db0 */


void FUN_00723db0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x140) != 0) {
    (**(code **)(param_1 + 0x140))(*(undefined8 *)(param_1 + 0x148),param_1);
  }
  return;
}

