/* Ghidra address: 01817280 */
/* Ghidra symbol: FUN_01817280 */


ulonglong FUN_01817280(void)

{
  ulonglong uVar1;
  
  if (DAT_02110288 == (code *)0x0) {
    uVar1 = (ulonglong)*(uint *)(*(longlong *)PTR_DAT_02005950 + 0x98);
  }
  else {
    uVar1 = (*DAT_02110288)();
  }
  return uVar1;
}

