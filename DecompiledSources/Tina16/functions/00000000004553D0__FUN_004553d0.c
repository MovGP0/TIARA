/* Ghidra address: 004553d0 */
/* Ghidra symbol: FUN_004553d0 */


longlong FUN_004553d0(longlong param_1,short *param_2,longlong param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  short *psVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int local_8c;
  wchar_t *local_88;
  undefined1 local_80;
  int local_78;
  undefined1 local_70;
  wchar_t *local_68;
  undefined1 local_60;
  int local_58;
  undefined1 local_50;
  wchar_t *local_48;
  undefined1 local_40;
  
  if (param_5 != 0) {
    if (param_4 < 0) {
      local_48 = L"StartIndex";
      local_40 = 0x11;
      uVar3 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02005608,&local_48,0);
      FUN_004134c0(uVar3);
    }
    if (param_5 < 0) {
      local_48 = L"Count";
      local_40 = 0x11;
      uVar3 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02005608,&local_48,0);
      FUN_004134c0(uVar3);
    }
    if (*(int *)(param_1 + 0x10) < param_4 + param_5) {
      local_88 = L"StartIndex";
      local_80 = 0x11;
      local_70 = 0;
      local_68 = L"Count";
      local_60 = 0x11;
      local_58 = param_5;
      local_50 = 0;
      local_78 = param_4;
      uVar3 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02002f78,&local_88,3);
      FUN_004134c0(uVar3);
    }
    iVar6 = 0;
    if (param_2 != (short *)0x0) {
      iVar6 = *(int *)(param_2 + -2);
    }
    iVar8 = 0;
    if (param_3 != 0) {
      iVar8 = *(int *)(param_3 + -4);
    }
    lVar4 = FUN_00414de0(param_1 + 8);
    psVar5 = (short *)(lVar4 + (longlong)param_4 * 2);
    iVar9 = (param_4 + param_5) - iVar6;
    lVar4 = FUN_00414de0(param_1 + 8);
    psVar7 = (short *)(lVar4 + (longlong)iVar9 * 2);
    local_8c = param_4;
    if (psVar5 <= psVar7) {
      do {
        if (*psVar5 == *param_2) {
          uVar3 = FUN_00416740(param_2);
          iVar2 = FUN_00442880(psVar5,uVar3,iVar6);
          if (iVar2 == 0) {
            cVar1 = FUN_00455df0(param_1,local_8c,param_2,param_3);
            if (cVar1 != '\0') {
              lVar4 = FUN_00414de0(param_1 + 8);
              psVar5 = (short *)(lVar4 + (longlong)local_8c * 2);
              lVar4 = FUN_00414de0(param_1 + 8);
              psVar7 = (short *)(lVar4 + (longlong)iVar9 * 2);
            }
            psVar5 = psVar5 + (iVar8 + -1);
            local_8c = local_8c + iVar8 + -1;
            psVar7 = psVar7 + (iVar8 - iVar6);
            iVar9 = iVar9 + (iVar8 - iVar6);
          }
        }
        psVar5 = psVar5 + 1;
        local_8c = local_8c + 1;
      } while (psVar5 <= psVar7);
    }
  }
  return param_1;
}

