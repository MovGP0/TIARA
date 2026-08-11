/* Ghidra address: 0064d000 */
/* Ghidra symbol: FUN_0064d000 */


void FUN_0064d000(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x90);
  param_2[1] = *(undefined4 *)(param_1 + 0x94);
  param_2[2] = *(int *)(param_1 + 0x90) + *(int *)(param_1 + 0x98);
  param_2[3] = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x9c);
  return;
}

