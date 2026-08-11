/* Ghidra address: 00778c60 */
/* Ghidra symbol: FUN_00778c60 */


void FUN_00778c60(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10),param_1);
  }
  return;
}

