/* Ghidra address: 01710d00 */
/* Ghidra symbol: FUN_01710d00 */


void FUN_01710d00(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_004b6930(&PTR_FUN_0170be50,1);
  *param_1 = lVar1;
  FUN_004b67b0(*param_1,1);
  *(undefined1 *)(*param_1 + 0x49) = 1;
  *(undefined1 *)(*param_1 + 0x78) = 1;
  return;
}

