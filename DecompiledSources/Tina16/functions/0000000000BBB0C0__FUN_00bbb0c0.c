/* Ghidra address: 00bbb0c0 */
/* Ghidra symbol: FUN_00bbb0c0 */


void FUN_00bbb0c0(longlong param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x5c)) &&
     (*(char *)(param_1 + 0x5c) = param_2, *(longlong *)(param_1 + 0x38) != 0)) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_1);
  }
  return;
}

