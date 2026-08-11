/* Ghidra address: 00c11430 */
/* Ghidra symbol: FUN_00c11430 */


void FUN_00c11430(longlong param_1)

{
  FUN_00610f20(param_1);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),param_1);
  }
  return;
}

