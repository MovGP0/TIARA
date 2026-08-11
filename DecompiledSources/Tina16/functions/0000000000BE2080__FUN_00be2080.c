/* Ghidra address: 00be2080 */
/* Ghidra symbol: FUN_00be2080 */


void FUN_00be2080(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x18) != param_2) &&
     (*(char *)(param_1 + 0x18) = param_2, *(longlong *)(param_1 + 0x20) != 0)) {
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28),param_1);
  }
  return;
}

