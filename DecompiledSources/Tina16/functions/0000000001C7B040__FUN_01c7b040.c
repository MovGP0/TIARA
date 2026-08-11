/* Ghidra address: 01c7b040 */
/* Ghidra symbol: FUN_01c7b040 */


void FUN_01c7b040(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_238 [32];
  ulonglong *local_218;
  undefined8 local_210;
  ulonglong local_208;
  undefined8 local_200;
  uint local_1f8;
  undefined1 local_1f0;
  ulonglong local_1e8;
  undefined8 local_1e0;
  ulonglong local_1d8;
  uint local_1d0;
  undefined1 local_1c8;
  undefined4 local_1c0;
  char local_1a9;
  undefined1 local_1a8 [256];
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30 [2];
  
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  lVar7 = FUN_01c7acf0(param_1);
  if (lVar7 == 0) goto LAB_01c7bf27;
  if (lVar7 != 0) {
    cVar3 = *(char *)(lVar7 + 0x1c);
    if (cVar3 == '\x01') {
      param_2 = *(ulonglong *)(param_1 + 0x2788);
      local_218 = (ulonglong *)((ulonglong)local_218 & 0xffffffffffffff00);
      local_210 = 0;
      local_208 = 0;
      local_200 = 0;
      local_1f8 = 0x1c7;
      local_1f0 = 0;
      local_1e8 = local_1e8 & 0xffffffffffffff00;
      local_1e0 = 0;
      local_1d8 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      FUN_01320bb0(0,param_2,0,0);
    }
    else if (cVar3 == '\x02') {
      param_2 = *(ulonglong *)(param_1 + 0x2788);
      local_218 = (ulonglong *)0x0;
      local_210 = 0;
      local_208 = 0;
      local_200 = CONCAT44(local_200._4_4_,0x1c7);
      local_1f8 = local_1f8 & 0xffffff00;
      local_1f0 = 0;
      local_1e8 = 0;
      local_1e0 = 0;
      local_1d8 = local_1d8 & 0xffffffff00000000;
      local_1d0 = local_1d0 & 0xffffff00;
      FUN_013911a0(0,param_2,0,0);
    }
    else if (cVar3 == '\x05') {
      param_2 = 0;
      FUN_01373b60(*(undefined8 *)(param_1 + 0x2788),0,0,0);
    }
  }
  bVar2 = 0;
  puVar8 = PTR_DAT_020038e0;
  if (*PTR_DAT_020038e0 != '\0') {
    puVar8 = (undefined *)
             (**(code **)(**(longlong **)(param_1 + 0x1448) + 0x260))
                       (*(longlong **)(param_1 + 0x1448));
    if (-1 < (int)puVar8) {
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x1448) + 0x260))
                        (*(longlong **)(param_1 + 0x1448));
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1448) + 0x4a0);
      puVar8 = (undefined *)(**(code **)(*plVar1 + 0x28))(plVar1);
      if (iVar4 < (int)puVar8) {
        plVar1 = *(longlong **)(param_1 + 0x1448);
        uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
        (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_58,uVar5);
        plVar1 = *(longlong **)(param_1 + 0x1448);
        uVar6 = (**(code **)(*plVar1 + 0x260))(plVar1);
        param_2 = (ulonglong)uVar6;
        iVar4 = (**(code **)(*(longlong *)plVar1[0x94] + 0x30))((longlong *)plVar1[0x94],param_2);
        local_1a9 = iVar4 != 0;
        bVar2 = *(byte *)(lVar7 + 0x1c);
        if (bVar2 < 8) {
          uVar6 = (int)CONCAT71((int7)(param_2 >> 8),1) << (bVar2 & 0x1f);
          param_2 = (ulonglong)uVar6;
          bVar13 = (uVar6 & 0x26) != 0;
        }
        else {
          bVar13 = false;
        }
        if (bVar13) {
          if (bVar2 < 8 && (1 << (bVar2 & 0x1f) & 0x22U) != 0) {
            param_2 = *(ulonglong *)(param_1 + 0x13a0);
            FUN_01c7ad30(param_1,param_2,*(undefined8 *)(param_1 + 0x13a8),local_58);
          }
          else {
            iVar4 = FUN_004170c0(&DAT_01c7bf80,local_58,1);
            FUN_00416dc0(&local_60,local_58,1,iVar4 + -1);
            FUN_01c7ad30(param_1,*(undefined8 *)(param_1 + 0x13d0),*(undefined8 *)(param_1 + 0x13d8)
                         ,local_60);
            iVar4 = FUN_004170c0(&DAT_01c7bf80,local_58,1);
            FUN_00416dc0(&local_68,local_58,iVar4 + 1,0xff);
            param_2 = *(ulonglong *)(param_1 + 0x13e0);
            FUN_01c7ad30(param_1,param_2,*(undefined8 *)(param_1 + 0x13e8),local_68);
          }
        }
        puVar8 = PTR_DAT_02003b28;
        bVar2 = 0;
        if ((*PTR_DAT_02003b28 != '\0') && (puVar8 = PTR_DAT_02003d20, *PTR_DAT_02003d20 != '\0')) {
          puVar8 = (undefined *)0x0;
          if (local_1a9 == '\0') {
            bVar2 = 9;
          }
          else {
            bVar2 = 0;
          }
        }
        goto LAB_01c7b4b9;
      }
    }
    bVar2 = 9;
  }
LAB_01c7b4b9:
  if (bVar2 == 0) {
    if (*(byte *)(lVar7 + 0x1c) < 8) {
      bVar13 = ((int)CONCAT71((int7)((ulonglong)puVar8 >> 8),1) << (*(byte *)(lVar7 + 0x1c) & 0x1f)
               & 0x26U) != 0;
    }
    else {
      bVar13 = false;
    }
    if (bVar13) {
      plVar1 = *(longlong **)(param_1 + 0x1808);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + -0x20))(plVar1,1);
      }
      local_218 = (ulonglong *)0x0;
      local_210 = 0;
      local_208 = local_208 & 0xffffffffffffff00;
      lVar9 = FUN_017e1bd0(&DAT_017df868,1,0,0);
      *(longlong *)(param_1 + 0x1808) = lVar9;
      *(undefined1 *)(lVar9 + 0x5f8) = 1;
      if (*(byte *)(lVar7 + 0x1c) < 8) {
        bVar13 = ((int)CONCAT71((int7)((ulonglong)lVar9 >> 8),1) << (*(byte *)(lVar7 + 0x1c) & 0x1f)
                 & 0x22U) != 0;
      }
      else {
        bVar13 = false;
      }
      if (bVar13) {
        FUN_01c7aea0(auStack_238,&local_70,*(undefined8 *)(param_1 + 0x13a0),
                     *(undefined8 *)(param_1 + 0x13a8));
        param_2 = local_70;
        FUN_00414b50(&local_50,local_70);
        if (local_50 == 0) {
          bVar2 = 1;
        }
        else {
          param_2 = *(ulonglong *)(param_1 + 0x2788);
          local_218 = local_30;
          bVar2 = FUN_017f1230(*(undefined8 *)(param_1 + 0x1808),param_2,0,&local_50);
        }
        if (bVar2 == 0) {
          param_2 = local_30[0];
          bVar2 = FUN_012bf5d0(*PTR_DAT_02003d20,local_30[0],
                               *(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0xe30));
        }
        if ((bVar2 != 0) && (*PTR_DAT_020038e0 == '\0')) {
          if (bVar2 < 8) {
            bVar13 = ((int)CONCAT71((int7)((ulonglong)PTR_DAT_020038e0 >> 8),1) << (bVar2 & 0x1f) &
                     0x18U) != 0;
          }
          else {
            bVar13 = false;
          }
          if (bVar13) {
            param_2 = *(ulonglong *)(param_1 + 0x13a8);
            FUN_00801e40(param_1,param_2);
          }
          else {
            param_2 = *(ulonglong *)(param_1 + 0x13a0);
            FUN_00801e40(param_1,param_2);
          }
        }
      }
      else {
        FUN_01c7aea0(auStack_238,&local_78,*(undefined8 *)(param_1 + 0x13d0),
                     *(undefined8 *)(param_1 + 0x13d8));
        FUN_00414b50(&local_50,local_78);
        if (local_50 == 0) {
          bVar2 = 1;
        }
        else {
          local_218 = &local_38;
          bVar2 = FUN_017f1230(*(undefined8 *)(param_1 + 0x1808),*(undefined8 *)(param_1 + 0x2788),0
                               ,&local_50);
        }
        if (bVar2 == 0) {
          bVar2 = FUN_012bf5d0(*PTR_DAT_02003d20,local_38,
                               *(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0xe30));
        }
        if ((bVar2 == 0) || (*PTR_DAT_020038e0 != '\0')) {
          FUN_01c7aea0(auStack_238,&local_80,*(undefined8 *)(param_1 + 0x13e0),
                       *(undefined8 *)(param_1 + 0x13e8));
          param_2 = local_80;
          FUN_00414b50(&local_50,local_80);
          if (local_50 == 0) {
            bVar2 = 1;
          }
          else {
            param_2 = *(ulonglong *)(param_1 + 0x2788);
            local_218 = &local_40;
            bVar2 = FUN_017f1230(*(undefined8 *)(param_1 + 0x1808),param_2,0,&local_50);
          }
          if (bVar2 == 0) {
            param_2 = local_40;
            bVar2 = FUN_012bf5d0(*PTR_DAT_02003d20,local_40,
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0xe38));
          }
          if (((bVar2 != 0) && (bVar2 != 0)) && (*PTR_DAT_020038e0 == '\0')) {
            if (bVar2 < 8) {
              bVar13 = ((int)CONCAT71((int7)((ulonglong)PTR_DAT_020038e0 >> 8),1) << (bVar2 & 0x1f)
                       & 0x18U) != 0;
            }
            else {
              bVar13 = false;
            }
            if (bVar13) {
              param_2 = *(ulonglong *)(param_1 + 0x13e8);
              FUN_00801e40(param_1,param_2);
            }
            else {
              param_2 = *(ulonglong *)(param_1 + 0x13e0);
              FUN_00801e40(param_1,param_2);
            }
          }
        }
        else {
          if (bVar2 < 8) {
            bVar13 = ((int)CONCAT71((int7)((ulonglong)PTR_DAT_020038e0 >> 8),1) << (bVar2 & 0x1f) &
                     0x18U) != 0;
          }
          else {
            bVar13 = false;
          }
          if (bVar13) {
            param_2 = *(ulonglong *)(param_1 + 0x13d8);
            FUN_00801e40(param_1,param_2);
          }
          else {
            param_2 = *(ulonglong *)(param_1 + 0x13d0);
            FUN_00801e40(param_1,param_2);
          }
        }
      }
    }
  }
  if (*(char *)(lVar7 + 0x1c) != '\x03') {
    if (bVar2 == 0) {
      if (*PTR_DAT_02003d20 != '\0') {
        uVar10 = FUN_00b89270();
        puVar11 = &local_90;
        FUN_00b8e520(uVar10,puVar11,0x410);
        param_2 = CONCAT71((int7)((ulonglong)puVar11 >> 8),2);
        FUN_0072d440(local_90,param_2,4,0);
      }
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x4c0);
      cVar3 = FUN_004113d0(plVar1,&PTR_FUN_0066b990);
      if (cVar3 == '\0') {
        cVar3 = FUN_004113d0(plVar1,&PTR_FUN_00670158);
        if (cVar3 != '\0') {
          (**(code **)(*plVar1 + 0x2a8))(plVar1);
        }
      }
      else {
        FUN_00680ad0(plVar1);
      }
      uVar10 = FUN_00b89270();
      puVar11 = &local_88;
      FUN_00b8e520(uVar10,puVar11,bVar2 + 0x410);
      param_2 = CONCAT71((int7)((ulonglong)puVar11 >> 8),2);
      FUN_0072d440(local_88,param_2,4,0);
    }
  }
  if (bVar2 == 0) {
    bVar2 = *(byte *)(lVar7 + 0x1c);
    if (bVar2 < 8) {
      bVar13 = ((int)CONCAT71((int7)(param_2 >> 8),1) << (bVar2 & 0x1f) & 0x26U) != 0;
    }
    else {
      bVar13 = false;
    }
    if (bVar13) {
      if (bVar2 < 8 && (1 << (bVar2 & 0x1f) & 0x22U) != 0) {
        FUN_01c7aea0(auStack_238,&local_98,*(undefined8 *)(param_1 + 0x13a0),
                     *(undefined8 *)(param_1 + 0x13a8));
        local_218 = (ulonglong *)0x0;
        local_210 = local_98;
        local_208 = 0;
        FUN_01c796f0(param_1,local_30[0],0,*(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0xe30))
        ;
      }
      else {
        lVar7 = *(longlong *)(param_1 + 0x2788);
        FUN_01c7aea0(auStack_238,&local_a0,*(undefined8 *)(param_1 + 0x13d0),
                     *(undefined8 *)(param_1 + 0x13d8));
        FUN_01c7aea0(auStack_238,&local_a8,*(undefined8 *)(param_1 + 0x13e0),
                     *(undefined8 *)(param_1 + 0x13e8));
        local_218 = *(ulonglong **)(lVar7 + 0xe38);
        local_210 = local_a0;
        local_208 = local_a8;
        FUN_01c796f0(param_1,local_38,local_40,*(undefined8 *)(lVar7 + 0xe30));
      }
    }
    else {
      if (*PTR_DAT_020038e0 == '\0') {
        *(undefined2 *)PTR_DAT_02004528 = 0;
        *(undefined2 *)PTR_DAT_02002b60 = 0;
        *(undefined2 *)PTR_DAT_02003e28 = 0;
        lVar7 = *(longlong *)(param_1 + 0x27a8);
        iVar4 = *(int *)(lVar7 + 0x10);
        iVar12 = 0;
        if (-1 < iVar4 + -1) {
          do {
            uVar10 = FUN_00b94e60(lVar7,iVar12);
            FUN_01c7af80(auStack_238,uVar10);
            iVar12 = iVar12 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      else {
        if (local_1a9 == '\0') {
          *(undefined2 *)PTR_DAT_02004528 = 0;
          *(undefined2 *)PTR_DAT_02002b60 = 1;
        }
        else {
          *(undefined2 *)PTR_DAT_02004528 = 1;
          *(undefined2 *)PTR_DAT_02002b60 = 0;
        }
        *(undefined2 *)PTR_DAT_02003e28 = 0;
      }
      FUN_00414480(&local_50);
      FUN_0040e780(local_1a8,*(undefined2 *)PTR_DAT_02005818,1);
      FUN_004169a0(&local_48,local_1a8);
      local_218 = (ulonglong *)local_48;
      FUN_00416cd0(&local_50,3,local_50,&LAB_01c7bf94);
      FUN_0040e780(local_1a8,*(undefined2 *)PTR_DAT_02002200,1);
      FUN_004169a0(&local_48,local_1a8);
      local_218 = (ulonglong *)local_48;
      FUN_00416cd0(&local_50,3,local_50,&LAB_01c7bf94);
      FUN_0040e780(local_1a8,*(undefined2 *)PTR_DAT_02004d68,1);
      FUN_004169a0(&local_48,local_1a8);
      local_218 = (ulonglong *)local_48;
      FUN_00416cd0(&local_50,3,local_50,&LAB_01c7bf94);
      FUN_0040e780(local_1a8,*(undefined2 *)PTR_DAT_02003428,1);
      FUN_004169a0(&local_48,local_1a8);
      local_218 = (ulonglong *)local_48;
      FUN_00416cd0(&local_50,3,local_50,&LAB_01c7bf94);
      FUN_0040e780(local_1a8,*(undefined2 *)PTR_DAT_02004528,1);
      FUN_004169a0(&local_48,local_1a8);
      local_218 = (ulonglong *)local_48;
      FUN_00416cd0(&local_50,3,local_50,&LAB_01c7bf94);
      FUN_0040e780(local_1a8,*(undefined2 *)PTR_DAT_02002b60,1);
      FUN_004169a0(&local_48,local_1a8);
      local_218 = (ulonglong *)local_48;
      FUN_00416cd0(&local_50,3,local_50,&LAB_01c7bf94);
      FUN_0040e780(local_1a8,*(undefined2 *)PTR_DAT_02003e28,1);
      FUN_004169a0(&local_48,local_1a8);
      local_218 = (ulonglong *)local_48;
      FUN_00416cd0(&local_50,3,local_50,&LAB_01c7bf94);
      FUN_0040e780(local_1a8,*(undefined4 *)(param_1 + 0x17f0),1);
      FUN_004169a0(&local_48,local_1a8);
      local_218 = (ulonglong *)local_48;
      FUN_00416cd0(&local_50,3,local_50,&LAB_01c7bf94);
      local_218 = (ulonglong *)0x0;
      local_210 = 0;
      local_208 = 0;
      FUN_01c796f0(param_1,local_50,0,0);
    }
  }
  FUN_01c7cd70(param_1);
LAB_01c7bf27:
  FUN_00414560(&local_a8,0x10);
  return;
}

