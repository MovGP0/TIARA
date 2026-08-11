/* Ghidra address: 00d44c60 */
/* Ghidra symbol: FUN_00d44c60 */


undefined8 FUN_00d44c60(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  bool bVar5;
  wchar_t *local_10;
  
  local_10 = (wchar_t *)0x0;
  FUN_00788be0(param_1,param_2);
  cVar1 = FUN_00787ad0(*(undefined8 *)(param_1 + 0x18));
  if (cVar1 != '\0') {
    FUN_004238d0(param_2,2,2,2,2);
  }
  FUN_00787c20(*(undefined8 *)(param_1 + 0x18),&local_10);
  if (local_10 == L"ComboLBox") {
    bVar5 = true;
  }
  else if (local_10 == (wchar_t *)0x0) {
    bVar5 = false;
  }
  else {
    iVar2 = FUN_0043e420(local_10,L"ComboLBox");
    bVar5 = iVar2 == 0;
  }
  if (bVar5) {
    uVar3 = FUN_00787cc0(*(undefined8 *)(param_1 + 0x18));
    uVar4 = FUN_00787d50(uVar3);
    if ((uVar4 & 1) != 1) {
      FUN_004238d0(param_2,1,1,1,1);
    }
  }
  FUN_00414480(&local_10);
  return param_2;
}

