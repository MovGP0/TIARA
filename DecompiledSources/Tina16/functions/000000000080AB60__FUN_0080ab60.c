/* Ghidra address: 0080ab60 */
/* Ghidra symbol: FUN_0080ab60 */


void FUN_0080ab60(longlong param_1)

{
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
  if ((*(int *)(param_1 + 0x180) == 1) && (*(longlong *)(param_1 + 0x210) != 0)) {
    (**(code **)(param_1 + 0x210))(*(undefined8 *)(param_1 + 0x218),param_1);
  }
  return;
}

