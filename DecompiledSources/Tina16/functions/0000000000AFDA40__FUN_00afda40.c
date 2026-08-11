/* Ghidra address: 00afda40 */
/* Ghidra symbol: FUN_00afda40 */


void FUN_00afda40(longlong param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_0043e1a0(&local_28,*(undefined8 *)(param_1 + 0x70));
  iVar2 = FUN_004170c0(L"<head>",local_28,1);
  bVar1 = iVar2 < 1;
  if (bVar1) {
    iVar2 = FUN_004170c0(L"<html>",local_28,1);
  }
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  FUN_0043f750(&local_38,
               *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x70) + 0x4c0));
  uVar3 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x70) + 0x4b0);
  pwVar4 = L"\"; }</style>";
  FUN_00416cd0(&local_30,5,L"<style> body {font-size: ",local_38,L"pt; font-family: \"",uVar3,
               L"\"; }</style>");
  FUN_009ec420(&local_20,local_30);
  if (bVar1) {
    FUN_00416cd0(&local_20,3,L"<head>",local_20,L"</head>",uVar3,pwVar4);
  }
  FUN_00416ea0(local_20,param_1 + 0x70,iVar2);
  FUN_00414560(&local_38,4);
  return;
}

