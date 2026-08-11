/* Ghidra address: 016ab210 */
/* Ghidra symbol: FUN_016ab210 */


void FUN_016ab210(ulonglong *param_1,ulonglong *param_2)

{
  *param_1 = *param_2 ^ 0x8000000000000000;
  param_1[1] = param_2[1] ^ 0x8000000000000000;
  return;
}

