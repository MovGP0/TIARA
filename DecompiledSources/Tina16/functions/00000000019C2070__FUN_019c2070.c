/* Ghidra address: 019c2070 */
/* Ghidra symbol: FUN_019c2070 */


undefined4 FUN_019c2070(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + -8);
  }
  if (lVar1 != 2) {
    param_1 = FUN_0044d490(&PTR_FUN_004334c0,1,L"IsSegm: error");
    FUN_004134c0();
  }
  return CONCAT31((int3)((uint)*(int *)(param_1 + 4) >> 8),
                  *(int *)(param_1 + 4) == *(int *)(param_1 + 0xc));
}

