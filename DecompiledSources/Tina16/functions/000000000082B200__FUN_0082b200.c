/* Ghidra address: 0082b200 */
/* Ghidra symbol: FUN_0082b200 */


void FUN_0082b200(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined7 uVar9;
  undefined8 uVar8;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  undefined8 in_stack_ffffffffffffff18;
  ulonglong in_stack_ffffffffffffff20;
  undefined1 local_89;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined8 local_4c;
  undefined8 local_44;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  local_88 = 0;
  local_80 = 0;
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  FUN_005ffb10(param_1[0xa3],uVar8);
  (**(code **)(*param_1 + 0xe0))(param_1,&local_38);
  FUN_005ffb10(param_1[0xa3],uVar8);
  FUN_005ff880(param_1[0xa3],param_1[0x17]);
  uVar5 = *(uint *)(param_2 + 0x10);
  bVar11 = (uVar5 & 1) == 0;
  bVar12 = (uVar5 & 0x10) != 0;
  cVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar2 == '\0') {
    local_89 = 1;
  }
  else if (bVar11) {
    local_89 = 0;
  }
  else {
    local_89 = 2;
  }
  cVar2 = FUN_00777ce0(param_1);
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0xe0))(param_1,&local_38);
    uVar10 = 0x2010;
    if (!bVar11) {
      uVar10 = 0x2210;
    }
    if ((uVar5 & 4) != 0) {
      uVar10 = uVar10 | 0x100;
    }
    if (*(char *)((longlong)param_1 + 0x534) != '\0' || bVar12) {
      FUN_005fd4e0(*(undefined8 *)(param_1[0xa3] + 0x78),0xff000006);
      FUN_005fd6d0(*(undefined8 *)(param_1[0xa3] + 0x78),1);
      FUN_005fdcb0(*(undefined8 *)(param_1[0xa3] + 0x80),1);
      uVar7 = CONCAT44(uVar4,local_2c);
      (**(code **)(*(longlong *)param_1[0xa3] + 0xf8))
                ((longlong *)param_1[0xa3],local_38,local_34,local_30,uVar7);
      uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
      FUN_00423b10(&local_38,0xffffffff,0xffffffff);
    }
    if (bVar11) {
      thunk_FUN_03ea73e5(uVar8,&local_38,4,uVar10);
    }
    else {
      FUN_005fd4e0(*(undefined8 *)(param_1[0xa3] + 0x78),0xff000010);
      FUN_005fd6d0(*(undefined8 *)(param_1[0xa3] + 0x78),1);
      FUN_005fdab0(*(undefined8 *)(param_1[0xa3] + 0x80),0xff00000f);
      (**(code **)(*(longlong *)param_1[0xa3] + 0xf8))
                ((longlong *)param_1[0xa3],local_38,local_34,local_30,CONCAT44(uVar4,local_2c));
      FUN_00423b10(&local_38,0xffffffff,0xffffffff);
    }
    if (*(char *)((longlong)param_1 + 0x534) != '\0') {
      (**(code **)(*param_1 + 0xe0))(param_1,&local_38);
      FUN_00423b10(&local_38,0xffffffff,0xffffffff);
    }
    FUN_005ff880(param_1[0xa3],param_1[0x17]);
    if (!bVar11) {
      FUN_00423b50(&local_38,1,1);
    }
    uVar3 = FUN_00777ce0(param_1);
    lVar1 = param_1[0xa4];
    *(undefined1 *)(lVar1 + 0x3c) = uVar3;
    local_68 = 0;
    local_64 = 0;
    FUN_0064dd90(param_1,&local_88);
    uVar5 = FUN_006520b0(param_1,0);
    FUN_00829020(lVar1,local_78,param_1[0xa3],&local_38,&local_68,local_88,
                 *(undefined1 *)((longlong)param_1 + 0x52a),(int)param_1[0xa6],
                 *(undefined4 *)((longlong)param_1 + 0x52c),local_89,0,
                 uVar5 | *(uint *)(&DAT_01e1797c +
                                  (ulonglong)*(byte *)((longlong)param_1 + 0x491) * 4));
    if ((bVar12 & *(byte *)((longlong)param_1 + 0x534)) != 0) {
      (**(code **)(*param_1 + 0xe0))(param_1,&local_38);
      FUN_00423b10(&local_38,0xfffffffc,0xfffffffc);
      FUN_005fd4e0(*(undefined8 *)(param_1[0xa3] + 0x78),0xff000006);
      FUN_005fdab0(*(undefined8 *)(param_1[0xa3] + 0x80),0xff00000f);
      uVar8 = FUN_005ffa40(param_1[0xa3]);
      thunk_FUN_03b3ef59(uVar8,&local_38);
    }
  }
  else {
    plVar6 = (longlong *)FUN_00781840();
    uVar7 = (**(code **)(*param_1 + 0xf0))(param_1);
    uVar9 = (undefined7)((ulonglong)uVar7 >> 8);
    if ((char)uVar7 == '\0') {
      uVar4 = (undefined4)CONCAT71(uVar9,5);
    }
    else if (bVar11) {
      if (*(char *)((longlong)param_1 + 0x536) == '\0') {
        if (*(char *)((longlong)param_1 + 0x534) == '\0' && !bVar12) {
          uVar4 = 2;
        }
        else {
          uVar4 = 6;
        }
      }
      else {
        uVar4 = (undefined4)CONCAT71((int7)((ulonglong)param_1 >> 8),3);
      }
    }
    else {
      uVar4 = (undefined4)CONCAT71(uVar9,4);
    }
    (**(code **)(*plVar6 + 200))(plVar6,&local_44,uVar4);
    if ((*(uint *)((longlong)param_1 + 0xa4) & 0x8000) == 0) {
      uVar7 = FUN_0065b870(param_1);
      local_58 = &local_44;
      in_stack_ffffffffffffff20 = 0;
      FUN_00778e90(plVar6,uVar7,uVar8,local_58,1,0);
    }
    else {
      uVar7 = thunk_FUN_041715dd(4);
      thunk_FUN_03984819(uVar8,&local_38,uVar7);
    }
    FUN_00778dc0(plVar6,uVar8,&local_44,param_2 + 0x28,0,
                 in_stack_ffffffffffffff20 & 0xffffffff00000000);
    uVar8 = FUN_005ffa40(param_1[0xa3]);
    FUN_007790e0(plVar6,uVar8,&local_44,param_2 + 0x28,&local_38);
    local_60 = 0;
    uStack_5c = 0;
    local_4c = 0;
    lVar1 = param_1[0xa4];
    *(bool *)(lVar1 + 0x2d) = (*(uint *)((longlong)param_1 + 0xa4) & 0x8000) != 0;
    *(undefined8 *)(lVar1 + 0x30) = local_44;
    *(undefined4 *)(lVar1 + 0x38) = uStack_3c;
    uVar3 = FUN_00777ce0(param_1);
    lVar1 = param_1[0xa4];
    *(undefined1 *)(lVar1 + 0x3c) = uVar3;
    *(bool *)(lVar1 + 0x50) = (*(byte *)(param_1 + 0x59) & 1) != 0;
    FUN_0064dd90(param_1,&local_80);
    uVar5 = FUN_006520b0(param_1,0);
    FUN_00829020(lVar1,local_78,param_1[0xa3],&local_38,&local_4c,local_80,
                 *(undefined1 *)((longlong)param_1 + 0x52a),(int)param_1[0xa6],
                 *(undefined4 *)((longlong)param_1 + 0x52c),local_89,0,
                 uVar5 | *(uint *)(&DAT_01e1797c +
                                  (ulonglong)*(byte *)((longlong)param_1 + 0x491) * 4));
    if ((bVar12 & *(byte *)((longlong)param_1 + 0x534)) != 0) {
      cVar2 = FUN_00779360(plVar6);
      if (cVar2 != '\0') {
        FUN_005fd4e0(*(undefined8 *)(param_1[0xa3] + 0x78),0xff000006);
        FUN_005fdab0(*(undefined8 *)(param_1[0xa3] + 0x80),0xff00000f);
        uVar8 = FUN_005ffa40(param_1[0xa3]);
        thunk_FUN_03b3ef59(uVar8,&local_38);
      }
    }
  }
  FUN_005ffb10(param_1[0xa3],0);
  FUN_00414560(&local_88,2);
  return;
}

