/* Ghidra address: 00cb97a0 */
/* Ghidra symbol: FUN_00cb97a0 */


void FUN_00cb97a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 400) != 0) {
    (**(code **)(param_1 + 400))(*(undefined8 *)(param_1 + 0x198),param_1);
  }
  return;
}

