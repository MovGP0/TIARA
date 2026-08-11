/* Ghidra address: 01594c60 */
/* Ghidra symbol: FUN_01594c60 */


void FUN_01594c60(int *param_1,int *param_2,int param_3)

{
  param_3 = *param_1 + *param_2 + param_3;
  *param_1 = param_3 >> 0x1f;
  *param_2 = param_3;
  return;
}

