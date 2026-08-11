/* Ghidra address: 00454a50 */
/* Ghidra symbol: FUN_00454a50 */


longlong FUN_00454a50(longlong param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *local_48;
  undefined1 local_40;
  
  if (param_2 < 0) {
    local_48 = L"Index";
    local_40 = 0x11;
    uVar2 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02005608,&local_48,0);
    FUN_004134c0(uVar2);
  }
  if (*(int *)(param_1 + 0x10) < param_2) {
    local_48 = (wchar_t *)CONCAT44(local_48._4_4_,param_2);
    local_40 = 0;
    uVar2 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02004940,&local_48,0);
    FUN_004134c0(uVar2);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  FUN_00455960(param_1,iVar1 + 1);
  if (param_2 < iVar1) {
    lVar3 = FUN_00414de0(param_1 + 8);
    lVar4 = FUN_00414de0(param_1 + 8);
    FUN_00409a70(lVar3 + (longlong)param_2 * 2,lVar4 + (longlong)(param_2 + 1) * 2,
                 (longlong)((iVar1 - param_2) * 2));
  }
  lVar3 = FUN_00414de0(param_1 + 8);
  *(undefined2 *)(lVar3 + (longlong)param_2 * 2) = param_3;
  return param_1;
}

