/* Ghidra address: 010f9eb0 */
/* Ghidra symbol: FUN_010f9eb0 */


void FUN_010f9eb0(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 extraout_var;
  uint uVar12;
  ulonglong uVar13;
  ulonglong in_stack_ffffffffffffff18;
  undefined8 in_stack_ffffffffffffff20;
  undefined4 uVar15;
  undefined8 uVar14;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90 [2];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [32];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  uint local_34;
  longlong local_30 [2];
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  uVar6 = (undefined4)(in_stack_ffffffffffffff18 >> 0x20);
  local_90[0] = 0;
  local_98 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  lVar9 = *(longlong *)(param_1 + 0x9b0);
  lVar10 = *(longlong *)(lVar9 + 0x50);
  if (lVar10 == 0) goto LAB_010fae97;
  uVar13 = (ulonglong)*(byte *)(param_1 + 0x7a8);
  if (uVar13 < 0xb) {
    if (uVar13 == 10) {
      FUN_0064e140(param_1,10);
      FUN_01a8de70(*(undefined8 *)(lVar9 + 0x68),*(undefined4 *)(param_1 + 0x768),
                   *(undefined4 *)(param_1 + 0x76c),*(undefined4 *)(param_1 + 0x770),
                   CONCAT44(uVar6,*(undefined4 *)(param_1 + 0x774)));
      *(uint *)(param_1 + 0x770) = param_4;
      *(int *)(param_1 + 0x774) = param_5;
      FUN_01a8de70(*(undefined8 *)(lVar9 + 0x68),*(undefined4 *)(param_1 + 0x768),
                   *(undefined4 *)(param_1 + 0x76c),*(undefined4 *)(param_1 + 0x770),param_5);
      goto LAB_010fae97;
    }
    if (5 < uVar13) {
      if (uVar13 == 6) {
        FUN_0064e140(param_1,5);
        iVar1 = *(int *)(param_1 + 0xae0);
        iVar2 = *(int *)(param_1 + 0xae4);
        uVar13 = in_stack_ffffffffffffff18 & 0xffffffff00000000;
        FUN_00498350(local_a8,0,0,0,uVar13);
        uVar13 = CONCAT44((int)(uVar13 >> 0x20),iVar2 + *(int *)(param_1 + 0xad8));
        FUN_01a8dd40(*(undefined8 *)(lVar9 + 0x68),iVar1,iVar2,iVar1 + *(int *)(param_1 + 0xadc),
                     uVar13,local_a8);
        *(uint *)(param_1 + 0xae0) = param_4;
        *(int *)(param_1 + 0xae4) = param_5;
        iVar1 = *(int *)(param_1 + 0xae0);
        FUN_00498350(local_a8,0,0,0,uVar13 & 0xffffffff00000000);
        FUN_01a8dd40(*(undefined8 *)(lVar9 + 0x68),iVar1,param_5,iVar1 + *(int *)(param_1 + 0xadc),
                     param_5 + *(int *)(param_1 + 0xad8),local_a8);
      }
      else if (uVar13 == 7) {
        FUN_0064e140(param_1,0xb);
      }
      else if (uVar13 == 8) {
        FUN_0064e140(param_1,0xb);
        plVar11 = *(longlong **)(param_1 + 0xab0);
        (**(code **)(*plVar11 + 0x78))(plVar11,*(undefined8 *)(lVar9 + 0x68));
        lVar10 = FUN_00498310(param_4,param_5);
        plVar11[0xe] = lVar10;
        (**(code **)(*plVar11 + 0x78))(plVar11,*(undefined8 *)(lVar9 + 0x68));
      }
      else if (uVar13 == 9) {
        FUN_0064e140(param_1,10);
      }
      goto LAB_010fae97;
    }
    if (uVar13 == 5) {
      FUN_0064e140(param_1,0xfff2);
      FUN_01ad3f00(*(undefined8 *)(lVar9 + 0x50),param_4,param_5,param_1 + 0x778);
      goto LAB_010fae97;
    }
    if (2 < uVar13) {
      if (uVar13 == 3) {
        cVar3 = FUN_01ace900(lVar10,param_4,param_5);
        if (cVar3 == '\0') {
          FUN_0064e140(param_1,0);
        }
        else {
          FUN_0064e140(param_1,0xfffd);
        }
      }
      else if (uVar13 == 4) {
        FUN_0064e140(param_1,0xfff2);
        FUN_01ad3cf0(*(undefined8 *)(lVar9 + 0x50),param_4,param_5,param_1 + 0x778);
        FUN_010f6de0(param_1,local_70);
      }
      goto LAB_010fae97;
    }
    if (uVar13 == 2) {
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0xad0) + 0x150))
                        (*(longlong **)(param_1 + 0xad0),param_4,param_5);
      if (cVar3 == '\0') {
        FUN_0064e140(param_1,0);
      }
      else {
        FUN_0064e140(param_1,8);
      }
      local_38 = param_5;
      local_34 = param_4;
      FUN_01ce2130(*(undefined8 *)(param_1 + 0xad0),&local_34,&local_38);
      (**(code **)(**(longlong **)(param_1 + 0xad0) + 0x140))
                (*(longlong **)(param_1 + 0xad0),*(undefined4 *)(param_1 + 0x768),
                 *(undefined4 *)(param_1 + 0x76c),*(undefined4 *)(param_1 + 0x770),
                 CONCAT44(uVar6,*(undefined4 *)(param_1 + 0x774)),*(undefined8 *)(lVar9 + 0x68));
      *(uint *)(param_1 + 0x770) = local_34;
      *(int *)(param_1 + 0x774) = local_38;
      (**(code **)(**(longlong **)(param_1 + 0xad0) + 0x140))
                (*(longlong **)(param_1 + 0xad0),*(undefined4 *)(param_1 + 0x768),
                 *(undefined4 *)(param_1 + 0x76c),*(undefined4 *)(param_1 + 0x770),local_38,
                 *(undefined8 *)(lVar9 + 0x68));
      goto LAB_010fae97;
    }
    if (uVar13 != 0) {
      if (uVar13 == 1) {
        FUN_0064e140(param_1,8);
      }
      goto LAB_010fae97;
    }
LAB_010fa04b:
    cVar3 = FUN_01ace170(lVar10,param_4,param_5);
    if (cVar3 == '\0') {
      FUN_0064e140(param_1,0);
    }
    else {
      FUN_0064e140(param_1,0xfffd);
    }
    local_30[0] = 0;
    cVar3 = FUN_01ace420(*(undefined8 *)(lVar9 + 0x50),param_4,param_5,local_30);
    if (cVar3 == '\b') {
      uVar8 = FUN_004aeac0(local_30[0],0);
      cVar3 = FUN_004113d0(uVar8,&PTR_FUN_010eecc0);
      if (cVar3 == '\0') {
        uVar8 = FUN_004aeac0(local_30[0],0);
        cVar3 = FUN_004113d0(uVar8,&LAB_00f12330);
        if (cVar3 != '\0') {
          lVar9 = FUN_004aeac0(local_30[0],0);
          FUN_00414b50(&local_50,*(undefined8 *)(lVar9 + 0xe8));
          lVar9 = FUN_004aeac0(local_30[0],0);
          lVar10 = FUN_004aeac0(local_30[0],0);
          uVar5 = FUN_00f060d0(*(undefined8 *)(lVar10 + 0xb8));
          uVar8 = CONCAT44(uVar6,2);
          uVar14 = CONCAT44(uVar15,uVar5);
          FUN_00f05e70(local_90,*(undefined8 *)(lVar9 + 0xb8),0x3ff0000000000000,1,uVar8,uVar14);
          uVar5 = (undefined4)((ulonglong)uVar14 >> 0x20);
          uVar15 = (undefined4)((ulonglong)uVar8 >> 0x20);
          lVar9 = FUN_004aeac0(local_30[0],0);
          lVar10 = FUN_004aeac0(local_30[0],0);
          uVar6 = FUN_00f060d0(*(undefined8 *)(lVar10 + 0xc0));
          FUN_00f05e70(&local_98,*(undefined8 *)(lVar9 + 0xc0),0x3ff0000000000000,1,
                       CONCAT44(uVar15,2),CONCAT44(uVar5,uVar6));
          FUN_00416cd0(&local_50,6,local_50,&DAT_010faf14,local_90[0],&DAT_010faf28,local_98,
                       &DAT_010faf38);
        }
      }
      else {
        uVar8 = FUN_004aeac0(local_30[0],0);
        bVar4 = FUN_010ef5e0(uVar8,param_4,param_5);
        if (bVar4 < 6) {
          if ((bVar4 == 5) || (bVar4 == 1)) {
            FUN_0064e140(param_1,0x1e);
          }
          else {
            if (bVar4 == 2) goto LAB_010fa15e;
            if (bVar4 == 3) goto LAB_010fa170;
            if (bVar4 == 4) goto LAB_010fa182;
          }
        }
        else if (bVar4 == 6) {
LAB_010fa15e:
          FUN_0064e140(param_1,0xfff9);
        }
        else if (bVar4 == 7) {
LAB_010fa170:
          FUN_0064e140(param_1,0x1e);
        }
        else if (bVar4 == 8) {
LAB_010fa182:
          FUN_0064e140(param_1,0xfff7);
        }
      }
      FUN_00410f20(local_30[0]);
    }
    local_30[0] = 0;
    goto LAB_010fae97;
  }
  if (0x10 < uVar13) {
    if (uVar13 - 0x11 < 2) {
      FUN_0064e140(param_1,0xfff4);
      if (*(char *)(param_1 + 0x7a8) == '\x12') {
        (**(code **)(**(longlong **)(param_1 + 0xac8) + 0x78))
                  (*(longlong **)(param_1 + 0xac8),*(undefined8 *)(lVar9 + 0x68));
      }
      (**(code **)(**(longlong **)(param_1 + 0xac8) + 0xa8))
                (*(longlong **)(param_1 + 0xac8),param_4 - *(int *)(param_1 + 0x768),
                 param_5 - *(int *)(param_1 + 0x76c));
      (**(code **)(**(longlong **)(param_1 + 0xac8) + 0xe8))(*(longlong **)(param_1 + 0xac8));
      *(uint *)(param_1 + 0xae0) = (*(int *)(param_1 + 0xae0) + param_4) - *(int *)(param_1 + 0x768)
      ;
      *(int *)(param_1 + 0xae4) = (*(int *)(param_1 + 0xae4) + param_5) - *(int *)(param_1 + 0x76c);
      (**(code **)(**(longlong **)(param_1 + 0xac8) + 0x78))
                (*(longlong **)(param_1 + 0xac8),*(undefined8 *)(lVar9 + 0x68));
      uVar7 = param_4 - *(int *)(param_1 + 0x768);
      uVar12 = (int)uVar7 >> 0x1f;
      if ((0 < (int)((uVar7 ^ uVar12) - uVar12)) ||
         (uVar7 = param_5 - *(int *)(param_1 + 0x76c), uVar12 = (int)uVar7 >> 0x1f,
         0 < (int)((uVar7 ^ uVar12) - uVar12))) {
        *(undefined1 *)(param_1 + 0x7a8) = 0x12;
      }
      *(uint *)(param_1 + 0x768) = param_4;
      *(int *)(param_1 + 0x76c) = param_5;
      goto LAB_010fae97;
    }
    if (uVar13 != 0x14) {
      if (uVar13 != 0x15) {
        if (uVar13 == 0x16) {
          lVar10 = *(longlong *)(param_1 + 0xac8);
          FUN_010ef4e0(lVar10,*(undefined8 *)(lVar9 + 0x68));
          FUN_010ef8a0(lVar10,&local_80);
          bVar4 = *(byte *)(lVar10 + 0x58);
          if (bVar4 < 6) {
            if (bVar4 == 5) {
              FUN_00498350(local_a8,local_80,local_7c,param_4,CONCAT44(uVar6,param_5));
              FUN_010ef870(lVar10,local_a8);
            }
            else if (bVar4 == 1) {
              FUN_00498350(local_a8,param_4,param_5,local_78,CONCAT44(uVar6,local_74));
              FUN_010ef870(lVar10,local_a8);
            }
            else if (bVar4 == 2) {
              FUN_00498350(local_a8,local_80,param_5,local_78,CONCAT44(uVar6,local_74));
              FUN_010ef870(lVar10,local_a8);
            }
            else if (bVar4 == 3) {
              FUN_00498350(local_a8,local_80,param_5,param_4,CONCAT44(uVar6,local_74));
              FUN_010ef870(lVar10,local_a8);
            }
            else if (bVar4 == 4) {
              FUN_00498350(local_a8,local_80,local_7c,param_4,CONCAT44(uVar6,local_74));
              FUN_010ef870(lVar10,local_a8);
            }
          }
          else if (bVar4 == 6) {
            FUN_00498350(local_a8,local_80,local_7c,local_78,CONCAT44(uVar6,param_5));
            FUN_010ef870(lVar10,local_a8);
          }
          else if (bVar4 == 7) {
            FUN_00498350(local_a8,param_4,local_7c,local_78,CONCAT44(uVar6,param_5));
            FUN_010ef870(lVar10,local_a8);
          }
          else if (bVar4 == 8) {
            FUN_00498350(local_a8,param_4,local_7c,local_78,CONCAT44(uVar6,local_74));
            FUN_010ef870(lVar10,local_a8);
          }
          FUN_010ef4e0(lVar10,*(undefined8 *)(lVar9 + 0x68));
        }
        goto LAB_010fae97;
      }
      goto LAB_010fa04b;
    }
    local_30[0] = 0;
    cVar3 = FUN_01ace420(*(undefined8 *)(lVar9 + 0x50),param_4,param_5,local_30);
    if (cVar3 == '\x02') {
LAB_010fa342:
      FUN_0064e140(param_1,0x11);
    }
    else {
      if (0 < *(int *)(local_30[0] + 0x10)) {
        uVar8 = FUN_004aeac0(local_30[0],0);
        cVar3 = FUN_004113d0(uVar8,&LAB_00f12330);
        if (cVar3 != '\0') goto LAB_010fa342;
      }
      FUN_0064e140(param_1,0x10);
    }
    FUN_00410f20(local_30[0]);
    local_30[0] = 0;
    FUN_00410f20(0);
    goto LAB_010fae97;
  }
  if (uVar13 == 0x10) {
    FUN_0064e140(param_1,0xfff4);
    iVar1 = *(int *)(param_1 + 0xae0);
    iVar2 = *(int *)(param_1 + 0xae4);
    uVar13 = in_stack_ffffffffffffff18 & 0xffffffff00000000;
    FUN_00498350(local_a8,0,0,0,uVar13);
    uVar13 = CONCAT44((int)(uVar13 >> 0x20),iVar2 + *(int *)(param_1 + 0xad8));
    FUN_01a8dd40(*(undefined8 *)(lVar9 + 0x68),iVar1,iVar2,iVar1 + *(int *)(param_1 + 0xadc),uVar13,
                 local_a8);
    *(uint *)(param_1 + 0xae0) = param_4;
    *(int *)(param_1 + 0xae4) = param_5;
    iVar1 = *(int *)(param_1 + 0xae0);
    FUN_00498350(local_a8,0,0,0,uVar13 & 0xffffffff00000000);
    FUN_01a8dd40(*(undefined8 *)(lVar9 + 0x68),iVar1,param_5,iVar1 + *(int *)(param_1 + 0xadc),
                 param_5 + *(int *)(param_1 + 0xad8),local_a8);
    goto LAB_010fae97;
  }
  if (uVar13 == 0xc) {
    local_30[0] = 0;
    cVar3 = FUN_01ace420(*(undefined8 *)(lVar9 + 0x50),param_4,param_5,local_30);
    if (cVar3 == '\x02') {
      FUN_0064e140(param_1,0xd);
    }
    else {
      FUN_0064e140(param_1,0xc);
    }
    FUN_00410f20(local_30[0]);
    goto LAB_010fae97;
  }
  if (uVar13 == 0xd) {
    local_30[0] = 0;
    cVar3 = FUN_01ace420(*(undefined8 *)(lVar9 + 0x50),param_4,param_5,local_30);
    if (cVar3 == '\x02') {
      FUN_0064e140(param_1,0xf);
    }
    else {
      FUN_0064e140(param_1,0xe);
    }
    FUN_00410f20(local_30[0]);
    goto LAB_010fae97;
  }
  if (uVar13 != 0xe) {
    if (uVar13 != 0xf) goto LAB_010fae97;
    local_30[0] = 0;
    cVar3 = FUN_01ace420(*(undefined8 *)(lVar9 + 0x50),param_4,param_5,local_30);
    if (cVar3 == '\x02') {
      plVar11 = (longlong *)FUN_004aeac0(local_30[0],0);
      local_b0 = (**(code **)(**(longlong **)(param_1 + 0xab8) + 0xd0))
                           (*(longlong **)(param_1 + 0xab8));
      cVar3 = (**(code **)(*plVar11 + 0x110))(plVar11,&local_b0);
      if (cVar3 == '\0') goto LAB_010fad68;
      FUN_0064e140(param_1,0x11);
    }
    else {
LAB_010fad68:
      FUN_0064e140(param_1,0x10);
    }
    FUN_01a8de70(*(undefined8 *)(lVar9 + 0x68),*(undefined4 *)(param_1 + 0x768),
                 *(undefined4 *)(param_1 + 0x76c),*(undefined4 *)(param_1 + 0x770),
                 CONCAT44(uVar6,*(undefined4 *)(param_1 + 0x774)));
    uVar6 = FUN_01a8e3e0(param_4,param_5,*(undefined4 *)(param_1 + 0xae0),
                         *(undefined4 *)(param_1 + 0xae4),*(undefined4 *)(param_1 + 0xadc),
                         CONCAT44(uVar15,*(undefined4 *)(param_1 + 0xad8)));
    *(undefined4 *)(param_1 + 0x768) = uVar6;
    FUN_01a8e3e0(param_4,param_5,*(undefined4 *)(param_1 + 0xae0),*(undefined4 *)(param_1 + 0xae4),
                 *(undefined4 *)(param_1 + 0xadc),*(undefined4 *)(param_1 + 0xad8));
    *(undefined4 *)(param_1 + 0x76c) = extraout_var;
    *(uint *)(param_1 + 0x770) = param_4;
    *(int *)(param_1 + 0x774) = param_5;
    FUN_01a8de70(*(undefined8 *)(lVar9 + 0x68),*(undefined4 *)(param_1 + 0x768),
                 *(undefined4 *)(param_1 + 0x76c),*(undefined4 *)(param_1 + 0x770),param_5);
    FUN_00410f20(local_30[0]);
    goto LAB_010fae97;
  }
  local_30[0] = 0;
  cVar3 = FUN_01ace420(*(undefined8 *)(lVar9 + 0x50),param_4,param_5,local_30);
  if (cVar3 == '\b') {
    uVar8 = FUN_004aeac0(local_30[0],0);
    cVar3 = FUN_004113d0(uVar8,&PTR_FUN_01a5c280);
    if (cVar3 == '\0') goto LAB_010facce;
    FUN_0064e140(param_1,0x13);
  }
  else {
LAB_010facce:
    FUN_0064e140(param_1,0x12);
  }
  FUN_00410f20(local_30[0]);
LAB_010fae97:
  FUN_00414560(&local_98,2);
  FUN_00414560(&local_50,3);
  return;
}

