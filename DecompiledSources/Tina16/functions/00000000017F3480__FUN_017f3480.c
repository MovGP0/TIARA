/* Ghidra address: 017f3480 */
/* Ghidra symbol: FUN_017f3480 */


ulonglong FUN_017f3480(void)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  int iVar2;
  
  lVar1 = thunk_FUN_0413ebab(L"LVDChild",L"TINA Control Panel");
  if (lVar1 != 0) {
    thunk_FUN_0413e052(lVar1,0x401,0,0);
    for (iVar2 = 0; (lVar1 != 0 && (iVar2 < 100)); iVar2 = iVar2 + 1) {
      FUN_00f835c0(100);
      lVar1 = thunk_FUN_0413ebab(L"LVDChild",L"TINA Control Panel");
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1) & 0xffffffff;
}

