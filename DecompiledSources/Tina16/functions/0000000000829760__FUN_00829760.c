/* Ghidra address: 00829760 */
/* Ghidra symbol: FUN_00829760 */


void FUN_00829760(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  undefined7 uVar9;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined4 uVar10;
  undefined8 unaff_RSI;
  undefined7 uVar12;
  ulonglong uVar11;
  char cVar13;
  bool bVar14;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  ulonglong local_c0;
  undefined1 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [28];
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  local_88 = 0;
  local_80 = 0;
  cVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar2 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x33a) = 1;
    *(undefined1 *)((longlong)param_1 + 0x329) = 0;
  }
  else if (*(char *)((longlong)param_1 + 0x33a) == '\x01') {
    if (((char)param_1[0x65] == '\0') || ((int)param_1[99] == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x33a) = 0;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x33a) = 3;
    }
  }
  FUN_005ff880(param_1[0x62],param_1[0x17]);
  cVar2 = FUN_00777ce0(param_1);
  uVar9 = (undefined7)((ulonglong)param_1 >> 8);
  if (cVar2 == '\0') {
    uVar6 = 0;
    local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,*(undefined4 *)((longlong)param_1 + 0x9c));
    FUN_004238d0(local_38,0,0,(int)param_1[0x13]);
    if ((char)param_1[0x67] == '\0') {
      uVar10 = 0x2010;
      if (*(byte *)((longlong)param_1 + 0x33a) < 8) {
        bVar14 = ((int)CONCAT71(uVar9,1) << (*(byte *)((longlong)param_1 + 0x33a) & 0x1f) & 0xcU) !=
                 0;
      }
      else {
        bVar14 = false;
      }
      if (bVar14) {
        uVar10 = 0x2210;
      }
      uVar6 = FUN_005ffa40(param_1[0x62]);
      thunk_FUN_03ea73e5(uVar6,local_38,4,uVar10);
    }
    else {
      if (*(byte *)((longlong)param_1 + 0x33a) < 8) {
        bVar14 = ((int)CONCAT71(uVar9,1) << (*(byte *)((longlong)param_1 + 0x33a) & 0x1f) & 0xcU) !=
                 0;
      }
      else {
        bVar14 = false;
      }
      if ((bVar14) ||
         (((*(char *)((longlong)param_1 + 0x339) != '\0' &&
           (*(char *)((longlong)param_1 + 0x33a) != '\x01')) ||
          ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0)))) {
        uVar8 = FUN_005ffa40(param_1[0x62]);
        if (*(byte *)((longlong)param_1 + 0x33a) < 8) {
          bVar14 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) <<
                    (*(byte *)((longlong)param_1 + 0x33a) & 0x1f) & 0xcU) != 0;
        }
        else {
          bVar14 = false;
        }
        thunk_FUN_03998bad(uVar8,local_38,(&DAT_01e17968)[bVar14],
                           *(uint *)(&DAT_01e17970 + (ulonglong)*(byte *)(param_1 + 0x66) * 4) | 0xf
                          );
      }
      else if ((char)param_1[0x66] == '\0') {
        FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),(int)param_1[0x19]);
        (**(code **)(*(longlong *)param_1[0x62] + 0xa8))((longlong *)param_1[0x62],local_38);
      }
      FUN_00423b10(local_38,0xffffffff,0xffffffff);
    }
    if (*(byte *)((longlong)param_1 + 0x33a) < 8) {
      bVar14 = ((int)CONCAT71(uVar9,1) << (*(byte *)((longlong)param_1 + 0x33a) & 0x1f) & 0xcU) != 0
      ;
    }
    else {
      bVar14 = false;
    }
    if (bVar14) {
      if ((*(char *)((longlong)param_1 + 0x33a) == '\x03') &&
         (((char)param_1[0x67] == '\0' || (*(char *)((longlong)param_1 + 0x339) == '\0')))) {
        uVar6 = FUN_0060f4c0(0xff00000f,0xff000014);
        FUN_005fda60(*(undefined8 *)(param_1[0x62] + 0x80),uVar6);
        (**(code **)(*(longlong *)param_1[0x62] + 0xa8))((longlong *)param_1[0x62],local_38);
      }
      local_40 = 0x100000001;
    }
    else {
      local_40 = 0;
    }
    plVar7 = (longlong *)FUN_00781840();
    uVar5 = (**(code **)(*plVar7 + 0x98))(plVar7);
    lVar1 = param_1[100];
    *(undefined1 *)(lVar1 + 0x3c) = uVar5;
    FUN_0064dd90(param_1,&local_88);
    local_90 = FUN_006520b0(param_1,0);
    local_c8 = &local_40;
    local_c0 = local_88;
    local_b8 = *(undefined1 *)((longlong)param_1 + 0x32b);
    local_b0 = *(undefined4 *)((longlong)param_1 + 0x334);
    local_a8 = *(undefined4 *)((longlong)param_1 + 0x32c);
    local_a0 = *(undefined1 *)((longlong)param_1 + 0x33a);
    local_98 = (undefined1)param_1[0x66];
    FUN_00829020(lVar1,local_78,param_1[0x62],local_38);
    goto code_r0x0082a0f6;
  }
  cVar2 = FUN_008296f0(auStack_e8);
  if (cVar2 == '\0') {
    if ((char)param_1[0x66] == '\0') {
      uVar6 = FUN_005ffa40(param_1[0x62]);
      FUN_006487e0(param_1,uVar6);
    }
    else {
      unaff_RSI = FUN_00781840();
      uVar6 = FUN_005ffa40(param_1[0x62]);
      local_c8 = (undefined8 *)CONCAT71(local_c8._1_7_,1);
      local_c0 = 0;
      FUN_00778e90(unaff_RSI,0,uVar6,0);
    }
  }
  else {
    unaff_RSI = FUN_005ffa40(param_1[0x62]);
    (**(code **)(*param_1 + 0xe0))(param_1,local_78);
    uVar6 = thunk_FUN_041715dd(4);
    thunk_FUN_03984819(unaff_RSI,local_78,uVar6);
  }
  cVar3 = (**(code **)(*param_1 + 0xf0))(param_1);
  uVar12 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (cVar3 == '\0') {
    uVar11 = CONCAT71(uVar12,5);
  }
  else {
    if (*(byte *)((longlong)param_1 + 0x33a) < 8) {
      bVar14 = ((int)CONCAT71(uVar9,1) << (*(byte *)((longlong)param_1 + 0x33a) & 0x1f) & 0xcU) != 0
      ;
    }
    else {
      bVar14 = false;
    }
    if (bVar14) {
      uVar11 = CONCAT71(uVar12,4);
    }
    else if (*(char *)((longlong)param_1 + 0x339) == '\0') {
      uVar11 = CONCAT71(uVar12,2);
    }
    else {
      uVar11 = CONCAT71(uVar12,3);
    }
  }
  cVar13 = '\0';
  cVar3 = (char)uVar11;
  if ((char)param_1[0x67] == '\0') {
    cVar4 = FUN_00781870();
    if (cVar4 != '\0') goto LAB_00829991;
  }
  else {
LAB_00829991:
    if (cVar3 == '\x02') {
      cVar13 = '\x02';
    }
    else if (cVar3 == '\x03') {
      cVar13 = '\x03';
    }
    else if (cVar3 == '\x04') {
      cVar13 = '\x04';
    }
    else if (cVar3 == '\x05') {
      cVar13 = '\x05';
    }
  }
  (**(code **)(*param_1 + 0xe0))(param_1,local_38);
  if (cVar13 == '\0') {
    plVar7 = (longlong *)FUN_00781840();
    (**(code **)(*plVar7 + 200))(plVar7,&local_4c,uVar11 & 0xffffffff);
    uVar6 = FUN_00781840();
    uVar8 = FUN_005ffa40(param_1[0x62]);
    local_c8 = (undefined8 *)0x0;
    local_c0 = local_c0 & 0xffffffff00000000;
    FUN_00778dc0(uVar6,uVar8,&local_4c,local_38);
    uVar6 = FUN_00781840();
    uVar8 = FUN_005ffa40(param_1[0x62]);
    local_c8 = (undefined8 *)local_38;
    FUN_007790e0(uVar6,uVar8,&local_4c,local_38);
  }
  else {
    plVar7 = (longlong *)FUN_00781840();
    (**(code **)(*plVar7 + 0x200))(plVar7,&local_4c,cVar13);
    cVar4 = FUN_00781870();
    if (cVar4 == '\0') {
      uVar6 = FUN_00781840();
      uVar8 = FUN_005ffa40(param_1[0x62]);
      local_c8 = (undefined8 *)0x0;
      local_c0 = local_c0 & 0xffffffff00000000;
      FUN_00778dc0(uVar6,uVar8,&local_4c,local_38);
      if (cVar13 == '\x05') {
        plVar7 = (longlong *)FUN_00781840();
        (**(code **)(*plVar7 + 200))(plVar7,&local_4c,uVar11 & 0xffffffff);
      }
    }
    else if ((((char)param_1[0x67] == '\0') || (cVar3 == '\x04')) || (cVar3 == '\x03')) {
      uVar6 = FUN_00781840();
      uVar8 = FUN_005ffa40(param_1[0x62]);
      local_c8 = (undefined8 *)0x0;
      local_c0 = local_c0 & 0xffffffff00000000;
      FUN_00778dc0(uVar6,uVar8,&local_4c,local_38);
    }
    uVar6 = FUN_00781840();
    uVar8 = FUN_005ffa40(param_1[0x62]);
    local_c8 = (undefined8 *)local_38;
    FUN_007790e0(uVar6,uVar8,&local_4c,local_38);
  }
  local_54 = 0;
  uStack_50 = 0;
  local_40 = 0;
  if (cVar3 == '\x04') {
    if (cVar13 != '\0') {
      cVar3 = FUN_0044f0c0(6,0);
      if (cVar3 == '\0') {
        FUN_005fc860(*(undefined8 *)(param_1[0x62] + 0x70),0xff00000e);
        goto LAB_00829c4c;
      }
    }
    if ((char)param_1[0x67] != '\0') {
      local_5c = 1;
      uStack_58 = 0;
      local_40 = 1;
    }
  }
LAB_00829c4c:
  lVar1 = param_1[100];
  *(char *)(lVar1 + 0x2d) = cVar2;
  *(undefined8 *)(lVar1 + 0x30) = local_4c;
  *(undefined4 *)(lVar1 + 0x38) = uStack_44;
  *(undefined1 *)(lVar1 + 0x3c) = 1;
  lVar1 = param_1[100];
  *(bool *)(lVar1 + 0x50) = (*(byte *)(param_1 + 0x59) & 1) != 0;
  FUN_0064dd90(param_1,&local_80);
  local_90 = FUN_006520b0(param_1,0);
  local_c8 = &local_40;
  local_c0 = local_80;
  local_b8 = *(undefined1 *)((longlong)param_1 + 0x32b);
  local_b0 = *(undefined4 *)((longlong)param_1 + 0x334);
  local_a8 = *(undefined4 *)((longlong)param_1 + 0x32c);
  local_a0 = *(undefined1 *)((longlong)param_1 + 0x33a);
  local_98 = (undefined1)param_1[0x66];
  FUN_00829020(lVar1,local_78,param_1[0x62],local_38);
code_r0x0082a0f6:
  FUN_00414560(&local_88,2);
  return;
}

