/* Ghidra address: 015dae40 */
/* Ghidra symbol: FUN_015dae40 */


void FUN_015dae40(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x180) != 0) {
    (**(code **)(param_1 + 0x180))(*(undefined8 *)(param_1 + 0x188),param_1);
  }
  return;
}

