/* Ghidra address: 00be1f50 */
/* Ghidra symbol: FUN_00be1f50 */


void FUN_00be1f50(longlong param_1,int param_2)

{
  if ((*(int *)(param_1 + 0xc) != param_2) &&
     (*(int *)(param_1 + 0xc) = param_2, *(longlong *)(param_1 + 0x20) != 0)) {
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28),param_1);
  }
  return;
}

