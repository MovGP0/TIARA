/* Ghidra address: 00bbb150 */
/* Ghidra symbol: FUN_00bbb150 */


void FUN_00bbb150(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x68)) {
    *(int *)(param_1 + 0x68) = param_2;
    if (param_2 < 2) {
      *(undefined4 *)(param_1 + 0x68) = 2;
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_1);
    }
  }
  return;
}

