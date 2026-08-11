/* Ghidra address: 00454830 */
/* Ghidra symbol: FUN_00454830 */


longlong FUN_00454830(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *local_48;
  undefined1 local_40;
  
  if (param_2 < 0) {
    local_48 = L"Index";
    local_40 = 0x11;
    uVar3 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02005608,&local_48,0);
    FUN_004134c0(uVar3);
  }
  if (*(int *)(param_1 + 0x10) < param_2) {
    local_48 = (wchar_t *)CONCAT44(local_48._4_4_,param_2);
    local_40 = 0;
    uVar3 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02004940,&local_48,0);
    FUN_004134c0(uVar3);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (param_3 != 0) {
    iVar2 = (int)*(undefined8 *)(param_3 + -8);
  }
  FUN_00455960(param_1,iVar1 + iVar2);
  if (0 < iVar1) {
    lVar4 = FUN_00414de0(param_1 + 8);
    lVar5 = FUN_00414de0(param_1 + 8);
    lVar6 = 0;
    if (param_3 != 0) {
      lVar6 = *(longlong *)(param_3 + -8);
    }
    FUN_00409a70(lVar4 + (longlong)param_2 * 2,lVar5 + (param_2 + lVar6) * 2,(longlong)(iVar1 * 2));
  }
  lVar4 = FUN_00414de0(param_1 + 8);
  lVar6 = 0;
  if (param_3 != 0) {
    lVar6 = *(longlong *)(param_3 + -8);
  }
  FUN_00409a70(param_3,lVar4 + (longlong)param_2 * 2,lVar6 * 2);
  return param_1;
}

