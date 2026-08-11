/* Ghidra address: 00665a70 */
/* Ghidra symbol: FUN_00665a70 */


void FUN_00665a70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28),param_1);
  }
  return;
}

