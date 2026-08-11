/* Ghidra address: 00a06240 */
/* Ghidra symbol: FUN_00a06240 */


void FUN_00a06240(longlong param_1,int param_2)

{
  if ((param_2 < 0) || (*(int *)(*(longlong *)(param_1 + 0x38) + 0x10) <= param_2)) {
    FUN_00a074d0(0xf);
  }
  FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),param_2);
  return;
}

