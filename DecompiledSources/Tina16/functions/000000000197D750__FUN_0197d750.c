/* Ghidra address: 0197d750 */
/* Ghidra symbol: FUN_0197d750 */


void FUN_0197d750(longlong param_1,int param_2)

{
  for (; param_1 != 0; param_1 = *(longlong *)(param_1 + 8)) {
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + param_2;
  }
  return;
}

