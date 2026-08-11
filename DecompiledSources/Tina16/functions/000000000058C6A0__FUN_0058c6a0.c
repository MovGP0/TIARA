/* Ghidra address: 0058c6a0 */
/* Ghidra symbol: FUN_0058c6a0 */


void FUN_0058c6a0(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined1 local_68;
  undefined8 local_60 [2];
  byte *local_50;
  byte *local_48;
  byte *local_40;
  byte *local_38;
  longlong local_30;
  longlong local_28;
  short *local_20;
  
  local_78 = 0;
  local_60[0] = 0;
  local_28 = 0;
  local_90 = param_1;
  local_88 = param_2;
  local_80 = param_3;
  iVar4 = FUN_0058c240(param_1);
  FUN_0040d200(local_80,(longlong)iVar4,0);
  if (local_88 != 0) {
    local_20 = (short *)FUN_00416740(local_88);
    while( true ) {
      if ((ushort)(*local_20 - 0x20U) < 0x40) {
        bVar8 = (1L << ((byte)(*local_20 - 0x20U) & 0x3f) & 0x800000000000001U) != 0;
      }
      else {
        bVar8 = false;
      }
      if (!bVar8) break;
      local_20 = local_20 + 1;
    }
    local_30 = local_90;
    local_40 = (byte *)(local_90 + 1);
    plVar2 = *(longlong **)(local_90 + 3 + (ulonglong)*local_40);
    if (plVar2 == (longlong *)0x0) {
      uVar5 = 0;
    }
    else {
      local_50 = (byte *)(*plVar2 + 1);
      uVar5 = *(uint *)(*plVar2 + 3 + (ulonglong)*local_50);
      local_48 = local_50;
    }
    local_38 = local_40;
    FUN_0058c5e0(auStack_c8,local_60,&local_20);
    FUN_00414b50(&local_28,local_60[0]);
    while (local_28 != 0) {
      iVar4 = FUN_00589bc0(*plVar2,local_28);
      lVar6 = (longlong)iVar4;
      if (lVar6 < 0) {
        local_70 = local_28;
        local_68 = 0x11;
        local_a8 = 0;
        uVar7 = FUN_0044d8d0(&PTR_FUN_00587ce8,1,PTR_PTR_02002540,&local_70);
        lVar6 = FUN_004134c0(uVar7);
      }
      uVar1 = lVar6 - (int)(uVar5 & 0xfffffff8);
      pbVar3 = (byte *)(local_80 + ((longlong)(uVar1 & 0xff) >> 3));
      *pbVar3 = *pbVar3 | '\x01' << (uVar1 & 7);
      FUN_0058c5e0(auStack_c8,&local_78,&local_20);
      FUN_00414b50(&local_28,local_78);
    }
  }
  FUN_00414480(&local_78);
  FUN_00414480(local_60);
  FUN_00414480(&local_28);
  return;
}

