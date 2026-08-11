/* Ghidra address: 00b063e0 */
/* Ghidra symbol: FUN_00b063e0 */


void FUN_00b063e0(longlong param_1,longlong param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  bool bVar3;
  
  pwVar1 = *(wchar_t **)(*(longlong *)(param_2 + 0x10) + 0x10);
  if (pwVar1 == L"FDropBtn") {
    bVar3 = true;
  }
  else if (pwVar1 == (wchar_t *)0x0) {
    bVar3 = false;
  }
  else {
    iVar2 = FUN_0043e420(pwVar1,L"FDropBtn");
    bVar3 = iVar2 == 0;
  }
  if ((!bVar3) && (*(longlong *)(param_1 + 0x530) != 0)) {
    FUN_0064dbe0(*(longlong *)(param_1 + 0x530),0);
  }
  return;
}

