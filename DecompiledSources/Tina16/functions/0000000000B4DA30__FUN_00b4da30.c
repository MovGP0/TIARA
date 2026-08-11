/* Ghidra address: 00b4da30 */
/* Ghidra symbol: FUN_00b4da30 */


void FUN_00b4da30(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x20) != param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),param_1);
  }
  return;
}

