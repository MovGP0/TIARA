/* Ghidra address: 00455670 */
/* Ghidra symbol: FUN_00455670 */


longlong FUN_00455670(longlong param_1,short param_2,short param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  short *psVar4;
  int iVar5;
  wchar_t *local_48;
  undefined1 local_40;
  
  if (param_5 != 0) {
    if (param_4 < 0) {
      local_48 = L"StartIndex";
      local_40 = 0x11;
      uVar1 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02005608,&local_48,0);
      FUN_004134c0(uVar1);
    }
    if (param_5 < 0) {
      local_48 = L"Count";
      local_40 = 0x11;
      uVar1 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02005608,&local_48,0);
      FUN_004134c0(uVar1);
    }
    FUN_00453ab0(param_1,param_4);
    iVar5 = param_4 + param_5 + -1;
    FUN_00453ab0(param_1,iVar5);
    lVar2 = FUN_00414de0(param_1 + 8);
    lVar3 = FUN_00414de0(param_1 + 8);
    for (psVar4 = (short *)(lVar3 + (longlong)param_4 * 2);
        psVar4 <= (short *)(lVar2 + (longlong)iVar5 * 2); psVar4 = psVar4 + 1) {
      if (*psVar4 == param_2) {
        *psVar4 = param_3;
      }
    }
  }
  return param_1;
}

