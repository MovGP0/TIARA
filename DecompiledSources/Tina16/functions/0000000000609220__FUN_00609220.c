/* Ghidra address: 00609220 */
/* Ghidra symbol: FUN_00609220 */


void FUN_00609220(longlong *param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  HDC hdcDest;
  longlong lVar7;
  undefined4 local_58;
  undefined4 local_54;
  char local_4d;
  undefined4 local_4c;
  undefined8 local_48;
  char local_39;
  longlong local_38;
  longlong local_30;
  
  lVar1 = param_1[0xc];
  (**(code **)(*param_2 + 0x58))(param_2,0xf);
  FUN_0060a750(param_1);
  local_48 = 0;
  local_39 = 0;
  lVar7 = *(longlong *)(lVar1 + 0x20);
  if (lVar7 != 0) {
    local_48 = thunk_FUN_0418f5de(param_2[0xc],lVar7,0xffffffff);
    thunk_FUN_03a5de49(param_2[0xc]);
  }
  local_39 = lVar7 != 0;
  uVar5 = FUN_005ffa40(param_2);
  local_4c = thunk_FUN_041d19e1(uVar5);
  iVar3 = thunk_FUN_03e5bd07(param_2[0xc],0xc);
  iVar4 = thunk_FUN_03e5bd07(param_2[0xc],0xe);
  if ((iVar3 * iVar4 < 9) &&
     (iVar3 * iVar4 < (int)((uint)*(ushort *)(lVar1 + 0x52) * (uint)*(ushort *)(lVar1 + 0x50)))) {
    local_4d = '\x01';
  }
  else {
    local_4d = '\0';
  }
  if (local_4d == '\0') {
    cVar2 = FUN_00609f50(param_1);
    if (cVar2 == '\0') {
      uVar5 = FUN_005ffa40(param_2);
      thunk_FUN_041e8c78(uVar5,3);
    }
  }
  else {
    thunk_FUN_04131f42(param_2[0xc],&local_58);
    thunk_FUN_041e8c78(param_2[0xc],4);
    thunk_FUN_03b0b419(param_2[0xc],local_58,local_54,&local_58);
  }
  cVar2 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar2 != '\0') {
    FUN_0060a6d0(param_1);
  }
  plVar6 = (longlong *)FUN_00609e10(param_1);
  (**(code **)(*plVar6 + 0x58))(plVar6,0xf);
  cVar2 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*param_1 + 0x98))(param_1);
    if (cVar2 == '\0') {
      iVar3 = *param_3;
      iVar4 = param_3[1];
      FUN_00609e10(param_1);
      thunk_FUN_03c1ffbb(param_2[0xc],iVar3,iVar4,param_3[2] - iVar3);
    }
    else {
      hdcDest = (HDC)FUN_005ffa40(param_2);
      iVar3 = *param_3;
      iVar4 = param_3[1];
      lVar7 = FUN_00609e10(param_1);
      AlphaBlend(hdcDest,iVar3,iVar4,param_3[2] - iVar3,param_3[3] - iVar4,*(HDC *)(lVar7 + 0x60),0,
                 0,*(int *)(lVar1 + 0x44),*(int *)(lVar1 + 0x48),(BLENDFUNCTION)0x1ff0000);
    }
  }
  else {
    local_30 = 0;
    local_38 = 0;
    uVar5 = thunk_FUN_04137b5f(0);
    local_38 = FUN_005fffe0(uVar5);
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
  thunk_FUN_041e8c78(param_2[0xc],local_4c);
  return;
}

