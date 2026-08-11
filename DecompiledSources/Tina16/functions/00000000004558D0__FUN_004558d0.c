/* Ghidra address: 004558d0 */
/* Ghidra symbol: FUN_004558d0 */


void FUN_004558d0(longlong param_1,int param_2,undefined2 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  wchar_t *local_38;
  undefined1 local_30;
  
  if (param_2 < 0) {
    local_38 = L"Index";
    local_30 = 0x11;
    uVar1 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02005608,&local_38,0);
    FUN_004134c0(uVar1);
  }
  FUN_00453ab0(param_1,param_2);
  lVar2 = FUN_00414de0(param_1 + 8);
  *(undefined2 *)(lVar2 + (longlong)param_2 * 2) = param_3;
  return;
}

