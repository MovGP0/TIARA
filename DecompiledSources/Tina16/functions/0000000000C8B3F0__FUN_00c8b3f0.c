/* Ghidra address: 00c8b3f0 */
/* Ghidra symbol: FUN_00c8b3f0 */


void FUN_00c8b3f0(longlong param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 0x30)) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_2;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - param_2;
    if (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x1c)) {
      FUN_00c8b450(param_1,1);
    }
  }
  else {
    FUN_00c8ac30(param_1);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28),param_1,param_2);
  }
  return;
}

