/* Ghidra address: 00bbaeb0 */
/* Ghidra symbol: FUN_00bbaeb0 */


void FUN_00bbaeb0(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x4b) != param_2) &&
     (*(char *)(param_1 + 0x4b) = param_2, *(longlong *)(param_1 + 0x38) != 0)) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_1);
  }
  return;
}

