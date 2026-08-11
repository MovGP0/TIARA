/* Ghidra address: 00bbb410 */
/* Ghidra symbol: FUN_00bbb410 */


void FUN_00bbb410(longlong param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x20) != param_2) &&
     (*(int *)(param_1 + 0x20) = param_2, *(longlong *)(param_1 + 0x28) != 0)) {
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),param_1);
  }
  return;
}

