/* Ghidra address: 00409e20 */
/* Ghidra symbol: FUN_00409e20 */


void FUN_00409e20(void)

{
  int iVar1;
  uint uVar2;
  ulonglong local_10 [2];
  
  iVar1 = thunk_FUN_04115c23(local_10);
  if (iVar1 == 0) {
    uVar2 = FUN_004070e0();
    local_10[0] = (ulonglong)uVar2;
  }
  iVar1 = FUN_00409e80(0x7fffffff);
  (*(code *)PTR_FUN_01db9070)((longlong)iVar1 << 0x20 ^ local_10[0]);
  return;
}

