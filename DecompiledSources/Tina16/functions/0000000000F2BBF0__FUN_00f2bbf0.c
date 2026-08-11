/* Ghidra address: 00f2bbf0 */
/* Ghidra symbol: FUN_00f2bbf0 */


bool FUN_00f2bbf0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong local_18;
  wchar_t *local_10;
  
  local_10 = (wchar_t *)0x0;
  local_18 = *(longlong *)(param_1 + 0xf8) + 1;
  FUN_00587e00(&local_18,&local_10);
  if (local_10 == L"boolean") {
    bVar2 = true;
  }
  else if (local_10 == (wchar_t *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_0043e420(local_10,L"boolean");
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    bVar2 = true;
  }
  else if (local_10 == L"bool") {
    bVar2 = true;
  }
  else if (local_10 == (wchar_t *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_0043e420(local_10,L"bool");
    bVar2 = iVar1 == 0;
  }
  FUN_00414480(&local_10);
  return bVar2;
}

