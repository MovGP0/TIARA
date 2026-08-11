/* Ghidra address: 01c7eb70 */
/* Ghidra symbol: FUN_01c7eb70 */


undefined8 FUN_01c7eb70(void)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  iVar2 = FUN_00808090();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar4 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,iVar5);
      pwVar1 = *(wchar_t **)(lVar4 + 0x10);
      if (pwVar1 == L"PercentageDlg") {
        bVar6 = true;
      }
      else if (pwVar1 == (wchar_t *)0x0) {
        bVar6 = false;
      }
      else {
        iVar3 = FUN_0043e420(pwVar1,L"PercentageDlg");
        bVar6 = iVar3 == 0;
      }
      if (bVar6) {
        return 1;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

