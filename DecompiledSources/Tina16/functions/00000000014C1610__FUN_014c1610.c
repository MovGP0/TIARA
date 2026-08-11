/* Ghidra address: 014c1610 */
/* Ghidra symbol: FUN_014c1610 */


void FUN_014c1610(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),param_4);
  }
  return;
}

