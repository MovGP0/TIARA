/* Ghidra address: 00bbb340 */
/* Ghidra symbol: FUN_00bbb340 */


void FUN_00bbb340(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 8) != param_2) {
    *(longlong *)(param_1 + 8) = param_2;
    if (param_2 != 0) {
      FUN_004d26c0(param_2,*(undefined8 *)(param_1 + 0x18));
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
      (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),param_1);
    }
  }
  return;
}

