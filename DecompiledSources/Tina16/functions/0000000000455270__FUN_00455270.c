/* Ghidra address: 00455270 */
/* Ghidra symbol: FUN_00455270 */


longlong FUN_00455270(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  wchar_t *local_48;
  undefined1 local_40;
  
  if (param_3 != 0) {
    if (param_2 < 0) {
      local_48 = L"StartIndex";
      local_40 = 0x11;
      uVar1 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02005608,&local_48,0);
      FUN_004134c0(uVar1);
    }
    if (param_3 < 0) {
      local_48 = L"RemLength";
      local_40 = 0x11;
      uVar1 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02005608,&local_48,0);
      FUN_004134c0(uVar1);
    }
    FUN_00453ab0(param_1,param_2);
    iVar4 = param_2 + param_3;
    FUN_00453ab0(param_1,iVar4 + -1);
    if (0 < *(int *)(param_1 + 0x10) - iVar4) {
      lVar2 = FUN_00414de0(param_1 + 8);
      lVar3 = FUN_00414de0(param_1 + 8);
      FUN_00409a70(lVar2 + (longlong)iVar4 * 2,lVar3 + (longlong)param_2 * 2,
                   (longlong)((*(int *)(param_1 + 0x10) - iVar4) * 2));
    }
    FUN_00455960(param_1,*(int *)(param_1 + 0x10) - param_3);
    FUN_00455210(param_1);
  }
  return param_1;
}

