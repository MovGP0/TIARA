/* Ghidra address: 00bbb8c0 */
/* Ghidra symbol: FUN_00bbb8c0 */


void FUN_00bbb8c0(longlong param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x24) != param_2) &&
     (*(int *)(param_1 + 0x24) = param_2, *(longlong *)(param_1 + 0x28) != 0)) {
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),param_1);
  }
  return;
}

