/* Ghidra address: 00bf1a10 */
/* Ghidra symbol: FUN_00bf1a10 */


undefined8 FUN_00bf1a10(longlong param_1,int *param_2)

{
  return CONCAT44((param_2[1] - *(int *)(param_1 + 0x534)) * *(int *)(param_1 + 0x52c),
                  (*param_2 + -1) * *(int *)(param_1 + 0x4d4) + *(int *)(param_1 + 0x530));
}

