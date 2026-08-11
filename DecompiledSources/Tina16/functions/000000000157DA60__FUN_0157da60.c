/* Ghidra address: 0157da60 */
/* Ghidra symbol: FUN_0157da60 */


undefined4 FUN_0157da60(longlong param_1)

{
  if (*(char *)(param_1 + 8) == '\0') {
    param_1 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_02001f60);
    FUN_004134c0();
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x10);
}

