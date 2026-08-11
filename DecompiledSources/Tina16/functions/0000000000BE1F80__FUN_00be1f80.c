/* Ghidra address: 00be1f80 */
/* Ghidra symbol: FUN_00be1f80 */


void FUN_00be1f80(longlong param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x10) != param_2) &&
     (*(int *)(param_1 + 0x10) = param_2, *(longlong *)(param_1 + 0x20) != 0)) {
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28),param_1);
  }
  return;
}

