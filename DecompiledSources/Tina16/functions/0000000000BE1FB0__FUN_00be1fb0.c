/* Ghidra address: 00be1fb0 */
/* Ghidra symbol: FUN_00be1fb0 */


void FUN_00be1fb0(longlong param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    param_2 = param_2 - 1;
  }
  if ((*(uint *)(param_1 + 0x1c) != param_2) &&
     (*(uint *)(param_1 + 0x1c) = param_2, *(longlong *)(param_1 + 0x20) != 0)) {
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28),param_1);
  }
  return;
}

