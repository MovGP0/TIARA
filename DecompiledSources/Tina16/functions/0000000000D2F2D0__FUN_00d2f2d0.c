/* Ghidra address: 00d2f2d0 */
/* Ghidra symbol: FUN_00d2f2d0 */


void FUN_00d2f2d0(void)

{
  int iVar1;
  
  DAT_0201a0dc = DAT_0201a0dc + -1;
  if (DAT_0201a0dc != -1) {
    return;
  }
  FUN_00409da0(&DAT_01eccba8,1);
  DAT_01eccbb0 = FUN_00409d20();
  if (DAT_01eccbb0 != 0) {
    iVar1 = FUN_004170c0(L"regserver",DAT_01eccba8,1);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_004170c0(L"yqwuhsxj",DAT_01eccba8,1);
    if (iVar1 != 0) {
      return;
    }
  }
  FUN_00d2ede0();
  FUN_00d2efb0();
  return;
}

