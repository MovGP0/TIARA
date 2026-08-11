/* Ghidra address: 01c913e0 */
/* Ghidra symbol: FUN_01c913e0 */


undefined8 FUN_01c913e0(undefined8 param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  
  uVar5 = 0;
  bVar2 = false;
  for (iVar6 = 0; (!bVar2 && (iVar3 = FUN_007e2ef0(param_2), iVar6 < iVar3)); iVar6 = iVar6 + 1) {
    lVar4 = FUN_007e2f10(param_2,iVar6);
    pwVar1 = *(wchar_t **)(lVar4 + 0x10);
    if (pwVar1 == L"mnTutorials") {
      bVar7 = true;
    }
    else if (pwVar1 == (wchar_t *)0x0) {
      bVar7 = false;
    }
    else {
      iVar3 = FUN_0043e420(pwVar1,L"mnTutorials");
      bVar7 = iVar3 == 0;
    }
    if (bVar7) {
      uVar5 = FUN_007e2f10(param_2,iVar6);
      bVar2 = true;
    }
  }
  return uVar5;
}

