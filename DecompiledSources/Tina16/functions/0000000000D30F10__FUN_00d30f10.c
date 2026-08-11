/* Ghidra address: 00d30f10 */
/* Ghidra symbol: FUN_00d30f10 */


void FUN_00d30f10(void)

{
  undefined8 uVar1;
  
  DAT_0201a170 = DAT_0201a170 + -1;
  if (DAT_0201a170 == -1) {
    uVar1 = FUN_00416740(L"CAT_DRAG_COPY");
    uVar1 = thunk_FUN_03978312(PTR_IMAGE_DOS_HEADER_0200c280,uVar1);
    FUN_00808990(*(undefined8 *)PTR_DAT_02005950,0xffffffe9,uVar1);
  }
  return;
}

