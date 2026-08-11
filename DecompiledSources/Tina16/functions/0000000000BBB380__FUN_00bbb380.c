/* Ghidra address: 00bbb380 */
/* Ghidra symbol: FUN_00bbb380 */


void FUN_00bbb380(longlong param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x10)) &&
     (*(char *)(param_1 + 0x10) = param_2, *(longlong *)(param_1 + 0x28) != 0)) {
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),param_1);
  }
  return;
}

