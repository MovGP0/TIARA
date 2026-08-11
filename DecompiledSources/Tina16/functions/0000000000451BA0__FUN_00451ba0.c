/* Ghidra address: 00451ba0 */
/* Ghidra symbol: FUN_00451ba0 */


void FUN_00451ba0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_00427be0(L"kernel32.dll");
  if (lVar1 != 0) {
    PTR_FUN_01dbe7e0 = (undefined *)FUN_00427c10(lVar1,L"GetDiskFreeSpaceExW");
  }
  if (PTR_FUN_01dbe7e0 == (undefined *)0x0) {
    PTR_FUN_01dbe7e0 = FUN_00442230;
  }
  return;
}

