/* Ghidra address: 0043fdb0 */
/* Ghidra symbol: FUN_0043fdb0 */


void FUN_0043fdb0(void)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (DAT_0200c5d8 != 0) {
    lVar1 = *(longlong *)(DAT_0200c5d8 + -8);
  }
  if (lVar1 == 0) {
    FUN_00419260(&DAT_0200c5d8,&DAT_00437cd8,1,1);
    FUN_00414ad0(DAT_0200c5d8,L"True");
  }
  lVar1 = 0;
  if (DAT_0200c5e0 != 0) {
    lVar1 = *(longlong *)(DAT_0200c5e0 + -8);
  }
  if (lVar1 == 0) {
    FUN_00419260(&DAT_0200c5e0,&DAT_00437d18,1,1);
    FUN_00414ad0(DAT_0200c5e0,L"False");
  }
  return;
}

