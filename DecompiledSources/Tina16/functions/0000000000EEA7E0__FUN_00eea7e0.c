/* Ghidra address: 00eea7e0 */
/* Ghidra symbol: FUN_00eea7e0 */


int FUN_00eea7e0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined8 local_110;
  undefined8 local_108;
  int local_ec;
  longlong *local_e8;
  int local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_71;
  undefined8 uStack_69;
  undefined4 uStack_61;
  undefined1 uStack_5d;
  int local_5c;
  longlong local_58;
  undefined8 local_50;
  longlong local_48 [3];
  
  local_d8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_48[0] = 0;
  local_50 = 0;
  local_58 = 0;
  local_ec = -1;
  local_e8 = param_1;
  local_dc = param_2;
  cVar3 = FUN_01d01970(*param_1);
  if (cVar3 == '\0') {
    uVar4 = (**(code **)(*(longlong *)*local_e8 + 0xf8))((longlong *)*local_e8);
    cVar3 = FUN_01d3d620(uVar4);
    if (cVar3 == '\0') {
      uVar4 = (**(code **)(*(longlong *)*local_e8 + 0xf8))((longlong *)*local_e8);
      cVar3 = FUN_01d42330(uVar4);
      if (cVar3 == '\0') {
        cVar3 = FUN_01d04d40(*local_e8);
        if (cVar3 == '\0') {
          uVar4 = (**(code **)(*(longlong *)*local_e8 + 0xf8))((longlong *)*local_e8);
          cVar3 = FUN_01d421b0(uVar4);
          if (cVar3 == '\0') {
            uVar4 = (**(code **)(*(longlong *)*local_e8 + 0xf8))((longlong *)*local_e8);
            cVar3 = FUN_01d42220(uVar4);
            if (cVar3 == '\0') {
              uVar4 = (**(code **)(*(longlong *)*local_e8 + 0xf8))((longlong *)*local_e8);
              cVar3 = FUN_01d422d0(uVar4);
              if (cVar3 == '\0') {
                uVar4 = (**(code **)(*(longlong *)*local_e8 + 0xf8))((longlong *)*local_e8);
                cVar3 = FUN_01d42370(uVar4);
                if (cVar3 == '\0') {
                  FUN_01d04330(*local_e8,&local_a8);
                  local_118 = 0;
                  local_110 = 0;
                  local_108 = 0;
                  FUN_00ececc0(local_48,4,local_a8,*(undefined8 *)(*local_e8 + 0x4f8));
                }
                else {
                  FUN_01d04330(*local_e8,&local_a0);
                  local_118 = 0;
                  local_110 = 0;
                  local_108 = 0;
                  FUN_00ececc0(local_48,5,local_a0,*(undefined8 *)(*local_e8 + 0x4f8));
                }
              }
              else {
                FUN_01d04330(*local_e8,&local_98);
                local_118 = 0;
                local_110 = 0;
                local_108 = 0;
                FUN_00ececc0(local_48,2,local_98,*(undefined8 *)(*local_e8 + 0x4f8));
              }
            }
            else {
              FUN_01d04330(*local_e8,&local_90);
              local_118 = 0;
              local_110 = 0;
              local_108 = 0;
              FUN_00ececc0(local_48,1,local_90,*(undefined8 *)(*local_e8 + 0x4f8));
            }
          }
          else {
            FUN_01d04330(*local_e8,&local_88);
            local_118 = 0;
            local_110 = 0;
            local_108 = 0;
            FUN_00ececc0(local_48,3,local_88,*(undefined8 *)(*local_e8 + 0x4f8));
          }
        }
        else if (*(char *)(*local_e8 + 0x1a0) == '\x02') {
          FUN_01d04330(*local_e8,&local_b8);
          local_118 = 0;
          local_110 = 0;
          local_108 = 0;
          FUN_00ececc0(local_48,0,local_b8,*(undefined8 *)(*local_e8 + 0x4f8));
        }
        else {
          FUN_01d04330(*local_e8,&local_b0);
          local_118 = 0;
          local_110 = 0;
          local_108 = 0;
          FUN_00ececc0(local_48,4,local_b0,*(undefined8 *)(*local_e8 + 0x4f8));
        }
        goto LAB_00eeac0a;
      }
    }
  }
  FUN_01d04330(*local_e8,&local_80);
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  FUN_00ec34f0(local_48,local_80,*(undefined8 *)(*local_e8 + 0x4f8),1);
LAB_00eeac0a:
  if (local_48[0] != 0) {
    iVar5 = -1;
    if (-1 < local_dc) {
      do {
        FUN_00ea9ab0(&local_c0,local_48);
        FUN_00ea9ef0(&local_58,local_c0);
        if (local_58 == 0) {
          FUN_00414b50(&local_58,&PTR_DAT_00eeb070);
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_dc);
    }
    iVar5 = FUN_00416db0(local_58,&PTR_DAT_00eeb070);
    if (iVar5 != 0) {
      iVar5 = FUN_004170c0(&DAT_00eeb084,local_58,1);
      if (iVar5 < 1) {
        if (*(int *)(*local_e8 + 0x18c) != 1) {
          lVar8 = FUN_00eea740(auStack_138,*local_e8,1);
          *local_e8 = lVar8;
        }
      }
      else {
        iVar5 = FUN_004170c0(&DAT_00eeb084,local_58,1);
        uVar4 = 0;
        if (local_58 != 0) {
          uVar4 = *(undefined4 *)(local_58 + -4);
        }
        FUN_00416dc0(&local_50,local_58,iVar5 + 1,uVar4);
        FUN_0040e860(local_50,&local_5c);
        if (local_5c == 0) {
          iVar5 = FUN_0043fc00(local_50);
          uVar6 = FUN_004170c0(&DAT_00eeb084,local_58,1);
          uVar4 = 0;
          if (local_58 != 0) {
            uVar4 = *(undefined4 *)(local_58 + -4);
          }
          FUN_00416e20(&local_58,uVar6,uVar4);
        }
        else {
          iVar5 = 1;
        }
        if (*(int *)(*local_e8 + 0x18c) != iVar5) {
          lVar8 = FUN_00eea740(auStack_138,*local_e8,iVar5);
          *local_e8 = lVar8;
        }
      }
      if (*local_e8 != 0) {
        cVar3 = FUN_01d01970(*local_e8);
        if (cVar3 == '\0') {
          iVar9 = 0;
          iVar5 = FUN_004170c0(&DAT_00eeb094,local_58,1);
          uVar4 = 0;
          if (local_58 != 0) {
            uVar4 = *(undefined4 *)(local_58 + -4);
          }
          FUN_00416dc0(&local_58,local_58,iVar5 + 1,uVar4);
          iVar5 = FUN_004170c0(&LAB_00eeb0a4,local_58,1);
          if (0 < iVar5) {
            iVar5 = FUN_004170c0(&LAB_00eeb0a4,local_58,1);
            FUN_00416dc0(&local_58,local_58,1,iVar5 + -1);
          }
          while( true ) {
            (**(code **)(*(longlong *)*local_e8 + 0x298))((longlong *)*local_e8,&local_d8,iVar9);
            iVar5 = FUN_00416db0(local_58,local_d8);
            if (iVar5 == 0) break;
            iVar5 = (**(code **)(*(longlong *)*local_e8 + 0x1c8))((longlong *)*local_e8);
            if (iVar5 <= iVar9) break;
            iVar9 = iVar9 + 1;
          }
          iVar5 = (**(code **)(*(longlong *)*local_e8 + 0x1c8))((longlong *)*local_e8);
          if (iVar9 < iVar5) {
            local_ec = iVar9;
          }
        }
        else {
          lVar8 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)(*local_e8 + 0xba));
          iVar5 = *(int *)(lVar8 + 0xaf);
          lVar8 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)(*local_e8 + 0xba));
          bVar2 = *(byte *)(lVar8 + 0xb3);
          iVar9 = 0;
          puVar1 = (undefined8 *)(*(longlong *)PTR_DAT_02001338 + -0x15 + (longlong)iVar5 * 0x15);
          local_71 = *puVar1;
          uStack_69 = puVar1[1];
          uStack_61 = *(undefined4 *)(puVar1 + 2);
          uStack_5d = *(undefined1 *)((longlong)puVar1 + 0x14);
          while( true ) {
            FUN_004169a0(&local_d0,(longlong)&local_71 + 5);
            FUN_00eaa0b0(&local_c8,local_d0);
            iVar7 = FUN_00416db0(local_58,local_c8);
            if ((iVar7 == 0) || ((int)(uint)bVar2 <= iVar9)) break;
            iVar9 = iVar9 + 1;
            if (iVar9 < (int)(uint)bVar2) {
              puVar1 = (undefined8 *)
                       (*(longlong *)PTR_DAT_02001338 + -0x15 + (longlong)(iVar5 + iVar9) * 0x15);
              local_71 = *puVar1;
              uStack_69 = puVar1[1];
              uStack_61 = *(undefined4 *)(puVar1 + 2);
              uStack_5d = *(undefined1 *)((longlong)puVar1 + 0x14);
            }
          }
          if (iVar9 < (int)(uint)bVar2) {
            local_ec = iVar9;
          }
        }
      }
    }
  }
  FUN_00414560(&local_d8,0xc);
  FUN_00414560(&local_58,3);
  return local_ec;
}

