/* Ghidra address: 00d2f1d0 */
/* Ghidra symbol: FUN_00d2f1d0 */


void FUN_00d2f1d0(void)

{
  int iVar1;
  
  DAT_0201a0dc = DAT_0201a0dc + 1;
  if (DAT_0201a0dc == 0) {
    if ((DAT_01eccbb0 == 0) ||
       ((iVar1 = FUN_004170c0(L"regserver",DAT_01eccba8,1), iVar1 == 0 &&
        (iVar1 = FUN_004170c0(L"yqwuhsxj",DAT_01eccba8,1), iVar1 == 0)))) {
      FUN_00d2f190();
      FUN_00d2f1b0();
    }
    FUN_00417840(&PTR_DAT_01ecb488,&DAT_00d2b418,0x7b);
    FUN_00417840(&PTR_s_Sparkey_USB_01eccb98,"\n\nAnsiString",2);
    FUN_00414480(&DAT_01eccba8);
    return;
  }
  return;
}

