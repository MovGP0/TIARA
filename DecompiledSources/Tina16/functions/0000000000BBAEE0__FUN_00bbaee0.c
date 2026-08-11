/* Ghidra address: 00bbaee0 */
/* Ghidra symbol: FUN_00bbaee0 */


void FUN_00bbaee0(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x4a) != param_2) &&
     (*(char *)(param_1 + 0x4a) = param_2, *(longlong *)(param_1 + 0x38) != 0)) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_1);
  }
  return;
}

