/* Ghidra address: 00658ea0 */
/* Ghidra symbol: FUN_00658ea0 */


void FUN_00658ea0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    (**(code **)(param_1 + 0x3b8))(*(undefined8 *)(param_1 + 0x3c0),param_1);
  }
  return;
}

