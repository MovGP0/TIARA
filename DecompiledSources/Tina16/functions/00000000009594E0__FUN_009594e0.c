/* Ghidra address: 009594e0 */
/* Ghidra symbol: FUN_009594e0 */


void FUN_009594e0(longlong *param_1,longlong *param_2,char param_3,undefined1 *param_4,
                 undefined1 *param_5)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_d8 [32];
  byte *local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined1 *local_70;
  uint local_60;
  uint local_5c;
  uint local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  int local_38;
  int local_34;
  int local_30;
  byte local_2b;
  ushort local_2a;
  longlong local_28;
  longlong *local_20;
  
  local_70 = auStack_d8;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  *param_5 = 1;
  *param_4 = 1;
  (**(code **)(*param_2 + 0x160))(param_2,&local_78);
  uVar3 = FUN_00950640(param_2);
  uVar5 = FUN_00414520(&local_40);
  local_b8 = &local_2b;
  (**(code **)(*param_1 + 0x58))(param_1,local_78,uVar3,uVar5);
  if (local_2b != 0) {
    if (local_2b < 0xa0) {
      bVar8 = ((byte)(&DAT_01e328f0)[(longlong)(int)(uint)local_2b >> 3] >> (local_2b & 7) & 1) != 0
      ;
    }
    else {
      bVar8 = false;
    }
    if (!bVar8) {
      *param_4 = 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x70))(param_1,local_2b,0,param_2);
    if (cVar2 == '\0') {
      *param_5 = 0;
      goto LAB_0095a20e;
    }
  }
  plVar6 = (longlong *)(**(code **)(*param_2 + 0x2d0))(param_2);
  (**(code **)(*plVar6 + 0xe8))(plVar6,&local_80);
  (**(code **)(*param_2 + 0xe8))(param_2,&local_88);
  local_28 = (**(code **)(*param_1 + 0x20))(param_1,local_80,local_88);
  if (local_28 == 0) {
    *param_4 = 0;
    cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0x27,0,param_2);
    if (cVar2 == '\0') {
      *param_5 = 0;
    }
  }
  else {
    if ((*(char *)(local_28 + 0x48) == '\x01') && (cVar2 = FUN_009581c0(param_1), cVar2 != '\0')) {
      cVar2 = (**(code **)(*param_2 + 0x2d8))(param_2);
      if (cVar2 == '\0') {
        *param_4 = 0;
        cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0x2f,local_28,param_2);
        if (cVar2 == '\0') {
          *param_5 = 0;
          goto LAB_0095a20e;
        }
      }
      (**(code **)(*param_2 + 0x160))(param_2,&local_90);
      uVar5 = FUN_00414520(&local_48);
      local_b8 = &local_2b;
      FUN_00958700(param_1,local_90,0,uVar5);
      if (local_2b < 0xa0) {
        bVar8 = ((byte)(&DAT_01e328f0)[(longlong)(int)(uint)local_2b >> 3] >> (local_2b & 7) & 1) !=
                0;
      }
      else {
        bVar8 = false;
      }
      if ((bVar8) && (iVar4 = FUN_00416420(local_48,local_40), iVar4 != 0)) {
        *param_4 = 0;
        cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0x2d,local_28,param_2);
        if (cVar2 == '\0') {
          *param_5 = 0;
          goto LAB_0095a20e;
        }
      }
    }
    if (param_3 == '\0') {
      local_20 = (longlong *)FUN_008f7f70(&PTR_FUN_008f67c0,1);
      local_58 = 0;
      if (local_40 != 0) {
        local_58 = *(uint *)(local_40 + -4) >> 1;
      }
      local_30 = 1;
      for (uVar7 = local_58; uVar7 != 0; uVar7 = uVar7 - 1) {
        local_2a = *(ushort *)(local_40 + -2 + (longlong)local_30 * 2);
        if (local_2a < 0x23) {
          if (local_2a == 0x22) {
            (**(code **)(*local_20 + 0x28))(local_20,L"&quot;");
          }
          else if (local_2a == 9) {
            (**(code **)(*local_20 + 0x28))(local_20,L"&#x9;");
          }
          else if (local_2a == 10) {
            (**(code **)(*local_20 + 0x28))(local_20,L"&#xA;");
          }
          else {
            if (local_2a != 0xd) goto LAB_009599da;
            (**(code **)(*local_20 + 0x28))(local_20,L"&#xD;");
          }
        }
        else if (local_2a == 0x26) {
          (**(code **)(*local_20 + 0x28))(local_20,L"&amp;");
        }
        else if (local_2a == 0x3c) {
          (**(code **)(*local_20 + 0x28))(local_20,L"&lt;");
        }
        else {
LAB_009599da:
          (**(code **)(*local_20 + 0x18))(local_20,local_2a);
        }
        local_30 = local_30 + 1;
      }
      (**(code **)(*local_20 + 0x48))(local_20,&local_98);
      (**(code **)(*param_2 + 0x1a0))(param_2,local_98);
      FUN_00410f20(local_20);
    }
    bVar1 = *(byte *)(local_28 + 0x28);
    if (bVar1 < 5) {
      if (bVar1 == 4) {
        cVar2 = FUN_008ff7c0(local_40);
        if (cVar2 == '\0') {
          *param_4 = 0;
          cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0xd,local_28,param_2);
          if (cVar2 == '\0') {
            *param_5 = 0;
            goto LAB_0095a20e;
          }
        }
        local_34 = 1;
        local_38 = 0;
        local_5c = 0;
        if (local_40 != 0) {
          local_5c = *(uint *)(local_40 + -4) >> 1;
        }
        local_30 = 1;
        for (uVar7 = local_5c; uVar7 != 0; uVar7 = uVar7 - 1) {
          if (*(short *)(local_40 + -2 + (longlong)local_30 * 2) == DAT_01e32944) {
            FUN_00416430(&local_50,local_40,local_34,local_38);
            (**(code **)(*(longlong *)param_1[3] + 0x70))((longlong *)param_1[3],local_50,param_2);
            local_34 = local_30 + 1;
            local_38 = 0;
          }
          else {
            local_38 = local_38 + 1;
          }
          local_30 = local_30 + 1;
        }
        FUN_00416430(&local_50,local_40,local_34,local_38);
        (**(code **)(*(longlong *)param_1[3] + 0x70))((longlong *)param_1[3],local_50,param_2);
      }
      else if (bVar1 == 0) {
        cVar2 = FUN_008ff570(local_40);
        if (cVar2 == '\0') {
          *param_4 = 0;
          cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0xd,local_28,param_2);
          if (cVar2 == '\0') {
            *param_5 = 0;
          }
        }
      }
      else if (bVar1 == 1) {
        cVar2 = FUN_00959400(auStack_d8,local_28,local_40);
        if (cVar2 == '\0') {
          *param_4 = 0;
          cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0xd,local_28,param_2);
          if (cVar2 == '\0') {
            *param_5 = 0;
          }
        }
      }
      else if (bVar1 == 2) {
        cVar2 = FUN_008ff6c0(local_40);
        if (cVar2 == '\0') {
          *param_4 = 0;
          cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0xd,local_28,param_2);
          if (cVar2 == '\0') {
            *param_5 = 0;
            goto LAB_0095a20e;
          }
        }
        uVar5 = (**(code **)(*param_2 + 0x2d0))(param_2);
        (**(code **)(*(longlong *)param_1[2] + 0x70))((longlong *)param_1[2],local_40,uVar5);
      }
      else if (bVar1 == 3) {
        cVar2 = FUN_008ff6c0(local_40);
        if (cVar2 == '\0') {
          *param_4 = 0;
          cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0xd,local_28,param_2);
          if (cVar2 == '\0') {
            *param_5 = 0;
            goto LAB_0095a20e;
          }
        }
        (**(code **)(*(longlong *)param_1[3] + 0x70))((longlong *)param_1[3],local_40,param_2);
      }
    }
    else if (bVar1 == 5) {
      cVar2 = FUN_008ff6c0(local_40);
      if (cVar2 == '\0') {
        *param_4 = 0;
        cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0xd,local_28,param_2);
        if (cVar2 == '\0') {
          *param_5 = 0;
        }
      }
      else {
        cVar2 = FUN_009586d0(param_1,local_40);
        if (cVar2 == '\0') {
          *param_4 = 0;
          cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0x2c,local_28,param_2);
          if (cVar2 == '\0') {
            *param_5 = 0;
          }
        }
      }
    }
    else if (bVar1 == 6) {
      cVar2 = FUN_008ff7c0(local_40);
      if (cVar2 == '\0') {
        *param_4 = 0;
        cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0xd,local_28,param_2);
        if (cVar2 == '\0') {
          *param_5 = 0;
        }
      }
      else {
        local_34 = 1;
        local_38 = 0;
        local_60 = 0;
        if (local_40 != 0) {
          local_60 = *(uint *)(local_40 + -4) >> 1;
        }
        local_30 = 1;
        for (uVar7 = local_60; uVar7 != 0; uVar7 = uVar7 - 1) {
          if (*(short *)(local_40 + -2 + (longlong)local_30 * 2) == DAT_01e32944) {
            FUN_00416430(&local_a0,local_40,local_34,local_38);
            cVar2 = FUN_009586d0(param_1,local_a0);
            if (cVar2 == '\0') {
              *param_4 = 0;
              cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0x2c,local_28,param_2);
              if (cVar2 == '\0') {
                *param_5 = 0;
                goto LAB_0095a20e;
              }
            }
            local_34 = local_30 + 1;
            local_38 = 0;
          }
          else {
            local_38 = local_38 + 1;
          }
          local_30 = local_30 + 1;
        }
        FUN_00416430(&local_a8,local_40,local_34,local_38);
        cVar2 = FUN_009586d0(param_1,local_a8);
        if (cVar2 == '\0') {
          *param_4 = 0;
          cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0x2c,local_28,param_2);
          if (cVar2 == '\0') {
            *param_5 = 0;
          }
        }
      }
    }
    else if (bVar1 == 7) {
      cVar2 = FUN_008ff900(local_40);
      if (cVar2 == '\0') {
        *param_4 = 0;
        cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0xd,local_28,param_2);
        if (cVar2 == '\0') {
          *param_5 = 0;
        }
      }
      else {
        cVar2 = FUN_00959400(auStack_d8,local_28,local_40);
        if (cVar2 == '\0') {
          *param_4 = 0;
          cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0xd,local_28,param_2);
          if (cVar2 == '\0') {
            *param_5 = 0;
          }
        }
      }
    }
    else if ((bVar1 == 8) && (cVar2 = FUN_008ff9d0(local_40), cVar2 == '\0')) {
      *param_4 = 0;
      cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0xd,local_28,param_2);
      if (cVar2 == '\0') {
        *param_5 = 0;
      }
    }
  }
LAB_0095a20e:
  FUN_004145c0(&local_a8,7);
  FUN_004145c0(&local_50,3);
  return;
}

