/* Ghidra address: 00985570 */
/* Ghidra symbol: FUN_00985570 */


void FUN_00985570(longlong param_1,int param_2)

{
  if (param_2 < 0x400) {
    param_2 = CONCAT31((int3)((uint)param_2 >> 8),1);
    param_1 = FUN_0044d490(&PTR_FUN_009013a8,param_2,L"BufferSize must not be less than 1024.");
    FUN_004134c0();
  }
  *(int *)(param_1 + 0x90) = param_2;
  return;
}

