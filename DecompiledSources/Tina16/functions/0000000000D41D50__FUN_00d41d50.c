/* Ghidra address: 00d41d50 */
/* Ghidra symbol: FUN_00d41d50 */


void FUN_00d41d50(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 unaff_RBX;
  undefined7 uVar10;
  int iVar11;
  int iVar12;
  undefined8 local_b0 [2];
  undefined4 local_9c;
  longlong local_98;
  undefined4 local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  longlong local_70 [4];
  int local_4c;
  int local_48;
  undefined1 local_44 [16];
  undefined4 local_34 [3];
  
  local_b0[0] = 0;
  local_78 = 0;
  local_98 = 0;
  FUN_00787f40(*(undefined8 *)(param_1 + 0x18),&local_78);
  FUN_00787be0(*(undefined8 *)(param_1 + 0x18),local_44);
  cVar1 = FUN_00787c60(*(undefined8 *)(param_1 + 0x18));
  uVar10 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (cVar1 == '\0') {
    uVar6 = CONCAT71(uVar10,5);
  }
  else {
    uVar6 = CONCAT71(uVar10,2);
  }
  uVar3 = (undefined4)uVar6;
  uVar10 = (undefined7)((ulonglong)uVar6 >> 8);
  if (*(char *)(param_1 + 0x70) == '\0') {
    if (*(char *)(param_1 + 0x60) == '\0') {
      cVar1 = FUN_00788bc0(param_1);
      if (cVar1 != '\0') {
        uVar3 = (undefined4)CONCAT71(uVar10,6);
      }
    }
    else {
      uVar3 = (undefined4)CONCAT71(uVar10,3);
    }
  }
  else {
    uVar3 = (undefined4)CONCAT71(uVar10,4);
  }
  plVar5 = (longlong *)FUN_00781840();
  (**(code **)(*plVar5 + 200))(plVar5,local_34,uVar3);
  FUN_00787be0(*(undefined8 *)(param_1 + 0x18),&local_88);
  uVar6 = FUN_00781840();
  uVar7 = FUN_005ffa40(param_2);
  uVar3 = 0;
  FUN_00778dc0(uVar6,uVar7,local_34,local_44,0,0);
  iVar2 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x1603,0,local_70);
  if ((iVar2 != 0) && (local_70[0] != 0)) {
    iVar2 = thunk_FUN_0400423a(local_70[0],&local_48,&local_4c);
    if (iVar2 != 0) {
      uVar8 = thunk_FUN_04118143(*(undefined8 *)(param_1 + 8),0xfffffff0);
      if ((uVar8 & 0xe) == 0xe) {
        iVar2 = local_84 + 0xf;
      }
      else {
        iVar2 = FUN_004230c0(&local_88);
        iVar2 = local_84 + (iVar2 - local_4c) / 2;
      }
      uVar6 = FUN_005ffa40(param_2);
      thunk_FUN_04153868(local_70[0],0,uVar6,local_88 + 3,CONCAT44(uVar3,iVar2),0);
      local_88 = local_88 + local_48 + 3;
    }
  }
  cVar1 = FUN_00d41ae0(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_00d41c00(param_1);
    if (cVar1 != '\0') {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      uVar7 = FUN_00781840();
      uVar3 = FUN_007793c0(uVar7,0xff000010);
      FUN_005fd4e0(param_2[0xf],uVar3);
      iVar2 = FUN_00787fa0(uVar6);
      (**(code **)(*param_2 + 200))(param_2,iVar2 + -0xf,3);
      iVar2 = FUN_00787fa0(uVar6);
      iVar4 = FUN_00787c80(uVar6);
      (**(code **)(*param_2 + 0xc0))(param_2,iVar2 + -0xf,iVar4 + -3);
      cVar1 = FUN_00787c60(uVar6);
      if (cVar1 == '\0') {
        lVar9 = FUN_00787d90(uVar6);
        FUN_005fd4e0(param_2[0xf],*(undefined4 *)(lVar9 + 0x28));
      }
      else {
        uVar7 = FUN_00781840();
        uVar3 = FUN_007793c0(uVar7,0xff000014);
        FUN_005fd4e0(param_2[0xf],uVar3);
      }
      iVar2 = FUN_00787fa0(uVar6);
      (**(code **)(*param_2 + 200))(param_2,iVar2 + -0xe,3);
      iVar2 = FUN_00787fa0(uVar6);
      iVar4 = FUN_00787c80(uVar6);
      (**(code **)(*param_2 + 0xc0))(param_2,iVar2 + -0xe,iVar4 + -3);
      lVar9 = FUN_00787d90(uVar6);
      FUN_005fd4e0(param_2[0xf],*(undefined4 *)(lVar9 + 0x28));
      iVar2 = FUN_00787fa0(uVar6);
      iVar4 = FUN_00787c80(uVar6);
      iVar11 = 3;
      do {
        iVar12 = (iVar4 / 2 + 1) - iVar11;
        (**(code **)(*param_2 + 200))(param_2,(iVar2 + -8) - iVar11,iVar12);
        (**(code **)(*param_2 + 0xc0))(param_2,iVar2 + -8 + iVar11 + 1,iVar12);
        iVar11 = iVar11 + -1;
      } while (iVar11 != -1);
    }
  }
  else {
    if (local_70[0] == 0) {
      local_88 = local_88 + 0x23;
    }
    local_84 = local_84 + 0xf;
    local_88 = local_88 + 5;
    uVar6 = FUN_00787d90(*(undefined8 *)(param_1 + 0x18));
    FUN_005ff880(param_2,uVar6);
    uVar3 = FUN_0060f580(0);
    uVar3 = FUN_0060f570(uVar3);
    uVar6 = FUN_00781840();
    cVar1 = FUN_007790b0(uVar6,local_34,2,&local_8c);
    if (cVar1 != '\0') {
      FUN_005fc860(param_2[0xe],local_8c);
    }
    uVar6 = FUN_00781840();
    uVar7 = FUN_005ffa40(param_2);
    FUN_00778f70(uVar6,uVar7,local_34,local_78,&local_88,uVar3,*(undefined4 *)(param_2[0xe] + 0x28),
                 0);
    lVar9 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x160b,0,0);
    FUN_004169f0(&local_98,lVar9 + 1);
    iVar2 = 0;
    if (local_98 != 0) {
      iVar2 = *(int *)(local_98 + -4);
    }
    if (iVar2 != 0) {
      local_9c = 0;
      if (local_98 != 0) {
        local_9c = *(undefined4 *)(local_98 + -4);
      }
      uVar6 = *(undefined8 *)(param_1 + 8);
      uVar7 = FUN_00416740(local_98);
      iVar2 = thunk_FUN_041b2403(uVar6,0x160a,&local_9c,uVar7);
      if (iVar2 != 0) {
        uVar3 = FUN_0060f580(0x10);
        uVar3 = FUN_0060f570(uVar3);
        iVar2 = FUN_005fdfd0(param_2,&DAT_00d424e0);
        local_84 = local_84 + iVar2 + 2;
        FUN_005fce30(param_2[0xe],8);
        uVar6 = FUN_00781840();
        uVar7 = FUN_005ffa40(param_2);
        FUN_00778f70(uVar6,uVar7,local_34,local_98,&local_88,uVar3,
                     *(undefined4 *)(param_2[0xe] + 0x28),0);
      }
    }
    if (local_70[0] == 0) {
      if (*(char *)(param_1 + 0x70) == '\0') {
        if (*(char *)(param_1 + 0x60) == '\0') {
          cVar1 = FUN_00787c60(*(undefined8 *)(param_1 + 0x18));
          if (cVar1 == '\0') {
            plVar5 = (longlong *)FUN_00781840();
            (**(code **)(*plVar5 + 200))(plVar5,local_34,0x30);
          }
          else {
            plVar5 = (longlong *)FUN_00781840();
            (**(code **)(*plVar5 + 200))(plVar5,local_34,0x2d);
          }
        }
        else {
          plVar5 = (longlong *)FUN_00781840();
          (**(code **)(*plVar5 + 200))(plVar5,local_34,0x2e);
        }
      }
      else {
        plVar5 = (longlong *)FUN_00781840();
        (**(code **)(*plVar5 + 200))(plVar5,local_34,0x2f);
      }
      local_80 = 0x23;
      local_88 = 3;
      local_84 = 10;
      local_7c = 0x2a;
      uVar6 = FUN_00781840();
      uVar7 = FUN_005ffa40(param_2);
      FUN_00778dc0(uVar6,uVar7,local_34,&local_88,0,0);
    }
  }
  cVar1 = FUN_00d41a80(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_00d41ae0(param_1);
    if (cVar1 == '\0') {
      uVar3 = 0x54004;
      uVar8 = FUN_00787d50(*(undefined8 *)(param_1 + 0x18));
      if ((uVar8 & 0x2000) == 0x2000) {
        uVar3 = 0x70004;
      }
      uVar6 = FUN_005ffa40(param_2);
      FUN_00787f40(*(undefined8 *)(param_1 + 0x18),local_b0);
      FUN_00788830(param_1,uVar6,local_34,local_b0[0],local_44,uVar3);
    }
  }
  FUN_00414480(local_b0);
  FUN_00414480(&local_98);
  FUN_00414480(&local_78);
  return;
}

