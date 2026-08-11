/* Ghidra address: 0044c520 */
/* Ghidra symbol: FUN_0044c520 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044c520(undefined4 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 *local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  uint local_20;
  int local_1c;
  
  local_80 = auStack_a8;
  local_88 = 0;
  puVar1 = auStack_a8;
  if (*(longlong *)PTR_PTR_02002ff8 == 0) {
    FUN_004098e0(0x1a);
    puVar1 = local_80;
  }
  local_80 = puVar1;
  uVar3 = FUN_004121f0(DAT_0200c668);
  FUN_00411f00(uVar3,0xffffffff);
  _DAT_0200c658 = 0;
  FUN_00419260(&DAT_0200c660,&DAT_0044c2e8,1,0);
  FUN_0044b710(&local_88,param_1,0x100b,&DAT_0044c994);
  uVar6 = 0;
  local_20 = FUN_0043fc50(local_88,1);
  if (local_20 < 8) {
    uVar7 = (int)CONCAT71((int7)(uVar6 >> 8),1) << ((byte)local_20 & 0x1f);
    uVar6 = (ulonglong)uVar7;
    bVar8 = (uVar7 & 0x38) != 0;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    uVar2 = thunk_FUN_04195d02();
    thunk_FUN_0412cb17(FUN_0044c3b0,uVar2,local_20,4);
    local_30 = DAT_0200c660;
    local_38 = DAT_0200c660;
    if (DAT_0200c660 != 0) {
      local_38 = *(longlong *)(DAT_0200c660 + -8);
    }
    iVar5 = (int)local_38;
    local_1c = 0;
    if (-1 < iVar5 + -1) {
      do {
        *(undefined4 *)(DAT_0200c660 + 8 + (longlong)local_1c * 0x20) = 0xffffffff;
        local_1c = local_1c + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    uVar2 = thunk_FUN_04195d02();
    thunk_FUN_0412cb17(FUN_0044c460,uVar2,local_20,3);
  }
  else {
    if (local_20 < 8) {
      bVar8 = ((int)CONCAT71((int7)(uVar6 >> 8),1) << ((byte)local_20 & 0x1f) & 6U) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      _DAT_0200c658 = 1;
      FUN_00419260(&DAT_0200c660,&DAT_0044c2e8,1,1);
      FUN_00414ad0(DAT_0200c660,L"B.C.");
      *(undefined4 *)(DAT_0200c660 + 8) = 0;
      *(undefined8 *)(DAT_0200c660 + 0x10) = 0xc1dfffffffc00000;
      FUN_00448c80(0xc1dfffffffc00001,1,1);
      lVar4 = FUN_0040c840();
      *(double *)(DAT_0200c660 + 0x18) = (double)lVar4;
      uVar2 = thunk_FUN_04195d02();
      thunk_FUN_0412cb17(FUN_0044c3b0,uVar2,local_20,4);
      local_40 = DAT_0200c660;
      local_48 = DAT_0200c660;
      if (DAT_0200c660 != 0) {
        local_48 = *(longlong *)(DAT_0200c660 + -8);
      }
      local_1c = 1;
      if (0 < (int)(local_48 - 1U)) {
        uVar6 = local_48 - 1U & 0xffffffff;
        do {
          *(undefined4 *)(DAT_0200c660 + 8 + (longlong)local_1c * 0x20) = 0xffffffff;
          local_1c = local_1c + 1;
          uVar7 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar7;
        } while (uVar7 != 0);
      }
      uVar2 = thunk_FUN_04195d02();
      thunk_FUN_0412cb17(FUN_0044c460,uVar2,local_20,3);
    }
  }
  local_50 = DAT_0200c660;
  local_58 = DAT_0200c660;
  if (DAT_0200c660 != 0) {
    local_58 = *(longlong *)(DAT_0200c660 + -8);
  }
  FUN_00419260(param_2 + 0x170,&DAT_004377c0,1,local_58);
  local_60 = DAT_0200c660;
  local_68 = DAT_0200c660;
  if (DAT_0200c660 != 0) {
    local_68 = *(longlong *)(DAT_0200c660 + -8);
  }
  iVar5 = (int)local_68;
  local_1c = 0;
  if (-1 < iVar5 + -1) {
    do {
      FUN_00417c40(*(longlong *)(param_2 + 0x170) + (longlong)local_1c * 0x20,
                   DAT_0200c660 + (longlong)local_1c * 0x20,&DAT_00437628);
      local_1c = local_1c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00419430(&DAT_0200c660,&DAT_0044c2e8);
  local_70 = DAT_0200c660;
  local_78 = DAT_0200c660;
  if (DAT_0200c660 != 0) {
    local_78 = *(longlong *)(DAT_0200c660 + -8);
  }
  _DAT_0200c658 = (undefined4)local_78;
  FUN_00412130(DAT_0200c668);
  FUN_00414480(&local_88);
  return;
}

