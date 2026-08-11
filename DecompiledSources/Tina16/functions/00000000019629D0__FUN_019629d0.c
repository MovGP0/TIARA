/* Ghidra address: 019629d0 */
/* Ghidra symbol: FUN_019629d0 */


void FUN_019629d0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  int local_3c [7];
  
  local_110 = 0;
  local_108 = 0;
  local_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  FUN_0195c680(param_1);
  uVar5 = 0;
  iVar4 = FUN_004b2060(param_1[0x59]);
  if (iVar4 == 0) {
    FUN_004b1ca0(param_1[0x59]);
  }
  cVar2 = FUN_005fcf90(param_1[0xf]);
  if ((cVar2 == '\x01') || (cVar2 = FUN_0195f670(param_1,0xb), cVar2 != '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  cVar2 = FUN_0195b980(param_1);
  if (cVar2 == '\0') {
    cVar2 = FUN_0195f670(param_1,0);
    if (cVar2 != '\0') {
      (**(code **)(*(longlong *)param_1[0x61] + 0x38))((longlong *)param_1[0x61],&local_48);
      local_3c[0] = 1;
      FUN_004168e0(&local_60,param_1[0x5a]);
      iVar4 = FUN_00417170(&LAB_01963418,local_60,1);
      FUN_00416430(&local_68,local_60,iVar4 + 1,0xff);
      iVar4 = FUN_00417170(&LAB_01963418,local_60,1);
      FUN_00416430(&local_60,local_60,1,iVar4 + -1);
      iVar9 = 0;
      iVar4 = FUN_00417170(local_60,local_48,1);
      if (iVar4 != 0) {
LAB_01962ec4:
        do {
          iVar4 = FUN_00414cc0(local_48);
          if (local_3c[0] < iVar4) {
            uVar5 = FUN_00414cc0(local_60);
            FUN_00416430(&local_b0,local_48,local_3c[0],uVar5);
            iVar4 = FUN_00416420(local_b0,local_60);
            if (iVar4 != 0) {
              local_3c[0] = local_3c[0] + 1;
              goto LAB_01962ec4;
            }
          }
          FUN_0180d9f0(&local_50,local_48,local_60,local_68,local_3c,&local_40);
          if (local_3c[0] != local_40) {
            FUN_00416490(&local_48,local_3c[0],(local_40 - local_3c[0]) + 1);
            uVar7 = FUN_0195e770(param_1[0x59],iVar9);
            FUN_01963480(param_1,&local_58,local_50,uVar7);
            FUN_00416550(local_58,&local_48,local_3c[0]);
            iVar4 = FUN_00414cc0(local_58);
            local_3c[0] = local_3c[0] + iVar4;
            local_40 = 0;
            iVar4 = FUN_004b2060(param_1[0x59]);
            if (iVar9 < iVar4 + -1) {
              iVar9 = iVar9 + 1;
            }
          }
        } while (local_3c[0] != local_40);
        (**(code **)(*(longlong *)param_1[0x61] + 0x58))((longlong *)param_1[0x61],local_48);
      }
    }
  }
  else {
    cVar2 = (**(code **)(*(longlong *)param_1[0x36] + 800))((longlong *)param_1[0x36],param_1[0x35])
    ;
    if (cVar2 == '\0') {
      (**(code **)(*(longlong *)param_1[0x36] + 0x2c8))
                ((longlong *)param_1[0x36],&local_80,param_1[0x35]);
      FUN_00461840(param_1 + 0x69,&local_80);
      lVar8 = FUN_0195f5e0(param_1);
      if (*(char *)(lVar8 + 0x30) == '\0') {
        if (bVar1) {
          (**(code **)(*(longlong *)param_1[0x36] + 0x2b0))
                    ((longlong *)param_1[0x36],&local_90,param_1[0x35]);
          FUN_00415530(&local_98,local_90,0);
          uVar3 = FUN_005fcf90(param_1[0xf]);
          FUN_01807bd0(&local_88,local_98,uVar3,0);
          (**(code **)(*(longlong *)param_1[0x61] + 0x58))((longlong *)param_1[0x61],local_88);
        }
        else {
          (**(code **)(*(longlong *)param_1[0x36] + 0x2b0))
                    ((longlong *)param_1[0x36],&local_a0,param_1[0x35]);
          (**(code **)(*(longlong *)param_1[0x61] + 0x58))((longlong *)param_1[0x61],local_a0);
        }
      }
      else {
        FUN_01963c20(param_1,&local_a8,param_1 + 0x69,0);
        (**(code **)(*(longlong *)param_1[0x61] + 0x58))((longlong *)param_1[0x61],local_a8);
      }
      cVar2 = FUN_0195f670(param_1,0xf);
      if ((((cVar2 != '\0') && (cVar2 = FUN_0046c3d0(param_1 + 0x69), cVar2 == '\0')) &&
          ((short)param_1[0x69] != 0x100)) &&
         (((short)param_1[0x69] != 0x102 && ((short)param_1[0x69] != 8)))) {
        uVar7 = FUN_00464c60(param_1 + 0x69);
        lVar8 = (**(code **)(*param_1 + 0x118))(param_1);
        cVar2 = FUN_00527160(uVar7,0,*(undefined8 *)(*(longlong *)(lVar8 + 0x1a8) + 0x38));
        if (cVar2 != '\0') {
          (**(code **)(*(longlong *)param_1[0x61] + 0x58))((longlong *)param_1[0x61],0);
        }
      }
    }
    else {
      if (bVar1) {
        uVar5 = thunk_FUN_04195d02();
        uVar3 = FUN_005fcf90(param_1[0xf]);
        uVar6 = FUN_01807d50(uVar3);
        thunk_FUN_03bddb86(uVar6);
      }
      (**(code **)(*(longlong *)param_1[0x36] + 0x348))
                ((longlong *)param_1[0x36],param_1[0x35],param_1[0x61]);
      if (bVar1) {
        thunk_FUN_03bddb86(uVar5);
      }
    }
  }
  uVar7 = (**(code **)(*param_1 + 0x118))(param_1);
  FUN_01977570(uVar7,param_1 + 0x69);
  iVar4 = FUN_004b2060();
  local_3c[0] = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar8 = FUN_0195e660(param_1[0x5f],local_3c[0]);
      if (*(longlong *)(lVar8 + 0x28) != 0) {
        uVar7 = (**(code **)(*param_1 + 0x118))(param_1);
        lVar8 = FUN_0195e660(param_1[0x5f],local_3c[0]);
        FUN_01970cf0(uVar7,&local_c8,*(undefined8 *)(lVar8 + 0x28),0);
        FUN_00468820(&local_e0,1);
        cVar2 = FUN_0046f320(&local_c8,&local_e0);
        if (cVar2 != '\0') {
          FUN_01962880(param_1);
          uVar7 = FUN_0195e660(param_1[0x5f],local_3c[0]);
          FUN_01964540(param_1,uVar7);
          break;
        }
      }
      local_3c[0] = local_3c[0] + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  cVar2 = FUN_0195f670(param_1,7);
  if (cVar2 != '\0') {
    (**(code **)(*(longlong *)param_1[0x61] + 0x38))((longlong *)param_1[0x61],&local_e8);
    FUN_004689d0(&local_100,local_e8);
    cVar2 = FUN_0046f320(param_1 + 0x73,&local_100);
    if (cVar2 == '\0') {
      (**(code **)(*(longlong *)param_1[0x61] + 0x38))((longlong *)param_1[0x61],&local_108);
      FUN_004689d0(param_1 + 0x73,local_108);
    }
    else {
      (**(code **)(*(longlong *)param_1[0x61] + 0x58))((longlong *)param_1[0x61],0);
    }
  }
  if (param_1[0x5b] != 0) {
    (**(code **)(*param_1 + 0x330))(param_1);
    (**(code **)(*param_1 + 0x328))(param_1);
    (**(code **)(*(longlong *)param_1[0x5b] + 0x358))((longlong *)param_1[0x5b],param_1[0x72]);
    FUN_0195f6f0(param_1[0x5b],0,0);
  }
  cVar2 = FUN_0195f670(param_1,0xe);
  if (cVar2 != '\0') {
    local_3c[0] = (**(code **)(*(longlong *)param_1[0x61] + 0x28))((longlong *)param_1[0x61]);
    while (local_3c[0] = local_3c[0] + -1, -1 < local_3c[0]) {
      (**(code **)(*(longlong *)param_1[0x61] + 0x18))
                ((longlong *)param_1[0x61],&local_110,local_3c[0]);
      iVar4 = FUN_00416420(local_110,0);
      if (iVar4 == 0) {
        (**(code **)(*(longlong *)param_1[0x61] + 0x98))((longlong *)param_1[0x61],local_3c[0]);
      }
    }
  }
  FUN_004145c0(&local_110,2);
  FUN_00460ba0(&local_100);
  FUN_00414520(&local_e8);
  FUN_00417840(&local_e0,&DAT_004013d8,2);
  FUN_004145c0(&local_b0,3);
  FUN_004144d0(&local_98);
  FUN_004145c0(&local_90,2);
  FUN_00460ba0(&local_80);
  FUN_004145c0(&local_68,5);
  return;
}

