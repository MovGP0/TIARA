/* Ghidra address: 019c2000 */
/* Ghidra symbol: FUN_019c2000 */


undefined4 FUN_019c2000(int *param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (param_1 != (int *)0x0) {
    lVar1 = *(longlong *)(param_1 + -2);
  }
  if (lVar1 != 2) {
    param_1 = (int *)FUN_0044d490(&PTR_FUN_004334c0,1,L"IsSegm: error");
    FUN_004134c0();
  }
  return CONCAT31((int3)((uint)*param_1 >> 8),*param_1 == param_1[2]);
}

