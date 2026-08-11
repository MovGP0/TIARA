/* Ghidra address: 01c05060 */
/* Ghidra symbol: FUN_01c05060 */


void FUN_01c05060(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  HDC hdcTarget;
  bool bVar10;
  undefined1 auStackY_f8 [32];
  RECT local_c0;
  undefined1 *local_b0;
  RECT local_a8;
  int local_98;
  int iStack_94;
  int local_90;
  int local_8c;
  int local_88;
  int iStack_84;
  int local_80;
  int local_7c;
  int iStack_78;
  int local_74;
  int local_70;
  int local_6c;
  int iStack_68;
  int local_64;
  longlong *local_60;
  longlong *local_58;
  int local_50;
  int iStack_4c;
  undefined8 local_48;
  HPAINTBUFFER local_40;
  HDC local_38;
  longlong local_30;
  
  local_b0 = auStackY_f8;
  lVar8 = FUN_01c07120(param_1);
  if (lVar8 == 0) {
    return;
  }
  lVar8 = FUN_01c07120(param_1);
  if (*(byte *)(lVar8 + 0x4c3) < 8) {
    bVar10 = ((int)CONCAT71((int7)((ulonglong)lVar8 >> 8),1) << (*(byte *)(lVar8 + 0x4c3) & 0x1f) &
             3U) != 0;
  }
  else {
    bVar10 = false;
  }
  if (bVar10) {
    iVar5 = FUN_0064d0b0(param_1);
    local_6c = iVar5 / 2;
    iStack_68 = param_2 + -1;
    local_48 = CONCAT44(iStack_68,local_6c);
    local_64 = local_6c;
    iVar5 = FUN_0064d0b0(param_1,(longlong)iVar5 % 2 & 0xffffffff);
    local_70 = iVar5 / 2;
    iVar5 = FUN_0064d120(param_1,(longlong)iVar5 % 2 & 0xffffffff);
    iStack_78 = (iVar5 - param_2) + 1;
    local_7c = local_70;
    local_50 = local_70;
    local_74 = iStack_78;
    iStack_4c = iStack_78;
  }
  else {
    iVar5 = FUN_0064d120(param_1);
    iStack_84 = iVar5 / 2;
    local_48 = CONCAT44(iStack_84,param_2);
    local_8c = (int)param_1[0x13] - param_2;
    local_88 = param_2;
    local_80 = iStack_84;
    iStack_94 = FUN_0064d120(param_1,(longlong)iVar5 % 2 & 0xffffffff);
    iStack_94 = iStack_94 / 2;
    local_98 = local_8c;
    local_50 = local_8c;
    local_90 = iStack_94;
    iStack_4c = iStack_94;
  }
  cVar4 = FUN_00781870();
  if (cVar4 != '\0') {
    local_58 = (longlong *)param_1[0x62];
    uVar9 = FUN_00781840();
    uVar6 = FUN_007793c0(uVar9,0xff000010);
    FUN_005fd4e0(local_58[0xf],uVar6);
    iVar1 = (int)local_48;
    uVar6 = local_48._4_4_;
    (**(code **)(*local_58 + 200))(local_58,local_48 & 0xffffffff,local_48._4_4_);
    iVar5 = iStack_4c;
    (**(code **)(*local_58 + 0xc0))(local_58,local_50,iStack_4c);
    uVar9 = FUN_00781840();
    uVar7 = FUN_007793c0(uVar9,0xff000014);
    FUN_005fd4e0(local_58[0xf],uVar7);
    (**(code **)(*local_58 + 200))(local_58,iVar1 + 1,uVar6);
    (**(code **)(*local_58 + 0xc0))(local_58,iVar1 + 1,iVar5);
    return;
  }
  if ((*(uint *)((longlong)param_1 + 0xa4) & 0x8000) == 0) {
    local_60 = (longlong *)param_1[0x62];
    FUN_005fd6d0(local_60[0xf],1);
    if ((*(char *)((longlong)param_1 + 0x344) != '\0') &&
       ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0)) {
      (**(code **)(*param_1 + 0xe0))(param_1,&local_c0);
      (**(code **)(*local_60 + 0xa8))(local_60,&local_c0);
    }
    if ((param_1[100] == 0) || (cVar4 = FUN_01bfea90(param_1[100]), cVar4 == '\0')) {
      if ((int)param_1[0x19] == -0xfffff1) {
        FUN_005fd4e0(local_60[0xf],0xff000010);
      }
      else {
        uVar6 = FUN_00635930((int)param_1[0x19],0xffffffce);
        FUN_005fd4e0(local_60[0xf],uVar6);
      }
    }
    else {
      uVar9 = FUN_01c07120(param_1);
      lVar8 = FUN_01c03e40(uVar9);
      uVar6 = FUN_00635930(*(undefined4 *)(lVar8 + 0xb8),0xffffffce);
      FUN_005fd4e0(local_60[0xf],uVar6);
    }
    (**(code **)(*local_60 + 200))(local_60,local_48 & 0xffffffff,local_48._4_4_);
    (**(code **)(*local_60 + 0xc0))(local_60,local_50,iStack_4c);
    if ((param_1[100] == 0) || (cVar4 = FUN_01bfea90(param_1[100]), cVar4 == '\0')) {
      if ((int)param_1[0x19] == -0xfffff1) {
        FUN_005fd4e0(local_60[0xf],0xff000014);
      }
      else {
        uVar9 = FUN_01c07120(param_1);
        lVar8 = FUN_01c03e40(uVar9);
        FUN_005fd4e0(local_60[0xf],*(undefined4 *)(lVar8 + 0xb8));
      }
    }
    else if ((int)param_1[0x19] == -0xfffff1) {
      FUN_005fd4e0(local_60[0xf],0xff000014);
    }
    else {
      uVar9 = FUN_01c07120(param_1);
      lVar8 = FUN_01c03e40(uVar9);
      uVar6 = FUN_00635840(*(undefined4 *)(lVar8 + 0xb8),0x13);
      FUN_005fd4e0(local_60[0xf],uVar6);
    }
    iVar5 = local_50;
    if ((int)local_48 == local_50) {
      iVar5 = (int)local_48 + 1;
      (**(code **)(*local_60 + 200))(local_60,iVar5,local_48._4_4_);
      (**(code **)(*local_60 + 0xc0))(local_60,iVar5,iStack_4c);
    }
    else {
      (**(code **)(*local_60 + 200))(local_60,local_48 & 0xffffffff,local_48._4_4_ + 1);
      (**(code **)(*local_60 + 0xc0))(local_60,iVar5,iStack_4c + 1);
    }
    return;
  }
  local_30 = 0;
  hdcTarget = (HDC)FUN_005ffa40(param_1[0x62]);
  (**(code **)(*param_1 + 0xe0))(param_1,&local_c0);
  local_40 = BeginBufferedPaint(hdcTarget,&local_c0,BPBF_TOPDOWNDIB,(BP_PAINTPARAMS *)0x0,&local_38)
  ;
  if (local_40 == (HPAINTBUFFER)0x0) {
    return;
  }
  (**(code **)(*param_1 + 0xe0))(param_1,&local_c0);
  uVar9 = thunk_FUN_041715dd(4);
  thunk_FUN_03984819(local_38,&local_c0,uVar9);
  uVar9 = thunk_FUN_041715dd(0x13);
  local_30 = thunk_FUN_041a19a1(local_38,uVar9);
  uVar6 = FUN_005fbf20(0xff000010);
  thunk_FUN_03dea6db(local_38,uVar6);
  uVar3 = local_48;
  iVar2 = (int)local_48;
  uVar6 = local_48._4_4_;
  thunk_FUN_041a2b10(local_38,local_48 & 0xffffffff,local_48._4_4_,0);
  iVar1 = iStack_4c;
  iVar5 = local_50;
  thunk_FUN_04151b0d(local_38,local_50,iStack_4c);
  uVar7 = FUN_005fbf20(0xff000014);
  thunk_FUN_03dea6db(local_38,uVar7);
  thunk_FUN_041a2b10(local_38,iVar2 + 1,uVar6,0);
  thunk_FUN_04151b0d(local_38,iVar2 + 1,iVar1);
  FUN_00423010(&local_a8,uVar3 & 0xffffffff,uVar6,iVar5 + 1);
  BufferedPaintSetAlpha(local_40,&local_a8,0xff);
  if (local_30 != 0) {
    thunk_FUN_041a19a1(local_38);
  }
  EndBufferedPaint(local_40,-1);
  return;
}

