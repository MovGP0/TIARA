/* Ghidra address: 00bbb3b0 */
/* Ghidra symbol: FUN_00bbb3b0 */


void FUN_00bbb3b0(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x12) != param_2) &&
     (*(char *)(param_1 + 0x12) = param_2, *(longlong *)(param_1 + 0x28) != 0)) {
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),param_1);
  }
  return;
}

