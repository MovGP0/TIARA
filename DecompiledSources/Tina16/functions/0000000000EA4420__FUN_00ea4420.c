/* Ghidra address: 00ea4420 */
/* Ghidra symbol: FUN_00ea4420 */


int FUN_00ea4420(longlong param_1)

{
  if (*(int *)(param_1 + 0x504) < 1) {
    param_1 = FUN_0044d710(&PTR_FUN_00ea2d28,1,PTR_PTR_02001290);
    FUN_004134c0();
  }
  return *(int *)(param_1 + 0x504) + -1;
}

