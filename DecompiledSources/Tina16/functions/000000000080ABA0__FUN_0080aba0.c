/* Ghidra address: 0080aba0 */
/* Ghidra symbol: FUN_0080aba0 */


void FUN_0080aba0(longlong param_1)

{
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + -1;
  if ((*(int *)(param_1 + 0x180) == 0) && (*(longlong *)(param_1 + 0x220) != 0)) {
    (**(code **)(param_1 + 0x220))(*(undefined8 *)(param_1 + 0x228),param_1);
  }
  return;
}

