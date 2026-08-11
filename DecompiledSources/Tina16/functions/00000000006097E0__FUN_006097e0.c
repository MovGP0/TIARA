/* Ghidra address: 006097e0 */
/* Ghidra symbol: FUN_006097e0 */


void FUN_006097e0(longlong *param_1,longlong *param_2,int *param_3,byte param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  HDC pHVar7;
  longlong lVar8;
  BLENDFUNCTION local_5c;
  undefined4 local_54;
  undefined4 local_50;
  char local_49;
  undefined8 local_48;
  char local_39;
  longlong local_38;
  longlong local_30;
  
  lVar1 = param_1[0xc];
  (**(code **)(*param_2 + 0x58))(param_2,0xf);
  FUN_0060a750(param_1);
  local_48 = 0;
  local_39 = 0;
  lVar8 = *(longlong *)(lVar1 + 0x20);
  if (lVar8 != 0) {
    local_48 = thunk_FUN_0418f5de(param_2[0xc],lVar8,0xffffffff);
    thunk_FUN_03a5de49(param_2[0xc]);
  }
  local_39 = lVar8 != 0;
  iVar3 = thunk_FUN_03e5bd07(param_2[0xc],0xc);
  iVar4 = thunk_FUN_03e5bd07(param_2[0xc],0xe);
  if ((iVar3 * iVar4 < 9) &&
     (iVar3 * iVar4 < (int)((uint)*(ushort *)(lVar1 + 0x52) * (uint)*(ushort *)(lVar1 + 0x50)))) {
    local_49 = '\x01';
  }
  else {
    local_49 = '\0';
  }
  if (local_49 == '\0') {
    cVar2 = FUN_00609f50(param_1);
    if (cVar2 == '\0') {
      uVar6 = FUN_005ffa40(param_2);
      thunk_FUN_041e8c78(uVar6,3);
    }
  }
  else {
    thunk_FUN_04131f42(param_2[0xc],&local_54);
    thunk_FUN_041e8c78(param_2[0xc],4);
    thunk_FUN_03b0b419(param_2[0xc],local_54,local_50,&local_54);
  }
  cVar2 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar2 != '\0') {
    FUN_0060a6d0(param_1);
  }
  plVar5 = (longlong *)FUN_00609e10(param_1);
  (**(code **)(*plVar5 + 0x58))(plVar5,0xf);
  cVar2 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar2 == '\0') {
    if (*(short *)(lVar1 + 0x6e) == 0x20) {
      local_5c._0_3_ = (uint3)param_4 << 0x10;
      local_5c.AlphaFormat = '\x01';
      pHVar7 = (HDC)FUN_005ffa40(param_2);
      iVar3 = *param_3;
      iVar4 = param_3[1];
      lVar8 = FUN_00609e10(param_1);
      AlphaBlend(pHVar7,iVar3,iVar4,param_3[2] - iVar3,param_3[3] - iVar4,*(HDC *)(lVar8 + 0x60),0,0
                 ,*(int *)(lVar1 + 0x44),*(int *)(lVar1 + 0x48),local_5c);
    }
    else {
      local_5c = (BLENDFUNCTION)((uint)param_4 << 0x10);
      pHVar7 = (HDC)FUN_005ffa40(param_2);
      iVar3 = *param_3;
      iVar4 = param_3[1];
      lVar8 = FUN_00609e10(param_1);
      AlphaBlend(pHVar7,iVar3,iVar4,param_3[2] - iVar3,param_3[3] - iVar4,*(HDC *)(lVar8 + 0x60),0,0
                 ,*(int *)(lVar1 + 0x44),*(int *)(lVar1 + 0x48),local_5c);
    }
  }
  else {
    local_30 = 0;
    local_38 = 0;
    uVar6 = thunk_FUN_04137b5f(0);
    local_38 = FUN_005fffe0(uVar6);
    local_30 = thunk_FUN_041a19a1(local_38,*(undefined8 *)(lVar1 + 0x18));
    iVar3 = *param_3;
    iVar4 = param_3[1];
    FUN_00609e10(param_1);
    FUN_00600290(param_2[0xc],iVar3,iVar4,param_3[2] - iVar3);
    if (local_30 != 0) {
      thunk_FUN_041a19a1(local_38,local_30);
    }
    if (local_38 != 0) {
      thunk_FUN_041a2fd8(local_38);
    }
  }
  if (local_39 != '\0') {
    thunk_FUN_0418f5de(param_2[0xc],local_48,0xffffffff);
  }
  return;
}

