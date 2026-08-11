/* Ghidra address: 00b62d20 */
/* Ghidra symbol: FUN_00b62d20 */


void FUN_00b62d20(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_00b173c0(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_3;
  return;
}

