/* Ghidra address: 00bbb890 */
/* Ghidra symbol: FUN_00bbb890 */


void FUN_00bbb890(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),param_1);
  }
  return;
}

