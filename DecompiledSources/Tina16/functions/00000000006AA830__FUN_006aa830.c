/* Ghidra address: 006aa830 */
/* Ghidra symbol: FUN_006aa830 */


void FUN_006aa830(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x150) != 0) {
    (**(code **)(param_1 + 0x150))(*(undefined8 *)(param_1 + 0x158),param_1);
  }
  return;
}

