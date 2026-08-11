/* Ghidra address: 00b6f760 */
/* Ghidra symbol: FUN_00b6f760 */


void FUN_00b6f760(longlong param_1)

{
  if (*(char *)(param_1 + 0x78) == '\0') {
    param_1 = FUN_0044d490(&PTR_FUN_00b6aec8,1,L"Cipher not initialized");
    FUN_004134c0(param_1);
  }
  FUN_00409a70(param_1 + 0x98);
  return;
}

