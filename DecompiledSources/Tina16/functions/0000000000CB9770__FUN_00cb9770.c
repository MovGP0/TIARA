/* Ghidra address: 00cb9770 */
/* Ghidra symbol: FUN_00cb9770 */


void FUN_00cb9770(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x180) != 0) {
    (**(code **)(param_1 + 0x180))(*(undefined8 *)(param_1 + 0x188),param_1);
  }
  return;
}

