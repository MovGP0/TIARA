/* Ghidra address: 01d85a10 */
/* Ghidra symbol: FUN_01d85a10 */


void FUN_01d85a10(void)

{
  DAT_03567c90 = DAT_03567c90 + -1;
  if (DAT_03567c90 == -1) {
    DAT_03567c98 = FUN_00452dc0(L"OLEAUT32.DLL",0x8000);
    DAT_03567c88 = FUN_01d850a0(&PTR_FUN_01d84240,1);
    if (DAT_0200c278 == '\0') {
      PTR_FUN_02000af0 = *(undefined **)PTR_PTR_02003510;
      *(code **)PTR_PTR_02003510 = FUN_01d85920;
      FUN_00451b10(FUN_01d84f50);
    }
    DAT_03567ca0 = FUN_00427be0(L"KERNEL32");
    if (DAT_03567ca0 != 0) {
      DAT_02000ae8 = FUN_00427c10(DAT_03567ca0,L"GetLongPathNameW");
    }
  }
  return;
}

