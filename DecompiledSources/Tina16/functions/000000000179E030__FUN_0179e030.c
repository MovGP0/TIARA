/* Ghidra address: 0179e030 */
/* Ghidra symbol: FUN_0179e030 */


void FUN_0179e030(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ushort in_stack_fffffffffffffef8;
  int local_b0;
  int local_ac;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40[0] = 0;
  plVar6 = (longlong *)
           FUN_01784b90(&PTR_FUN_01784028,1,*(undefined8 *)PTR_DAT_02004030,
                        *(undefined8 *)(param_1 + 0xcc8));
  FUN_005fdab0(*(undefined8 *)(plVar6[0xe2] + 800),*(undefined4 *)(param_1 + 0xd40));
  iVar4 = (**(code **)(*plVar6 + 0x2d0))(plVar6);
  if (iVar4 == 1) {
    lVar7 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    cVar2 = (**(code **)(*(longlong *)plVar6[0xda] + 0x260))((longlong *)plVar6[0xda]);
    if (cVar2 == '\0') {
      bVar1 = true;
      iVar4 = (**(code **)(*(longlong *)plVar6[0xe7] + 0x28))((longlong *)plVar6[0xe7]);
      local_8c = (**(code **)(*(longlong *)plVar6[0xe8] + 0x28))((longlong *)plVar6[0xe8]);
      if (local_8c < iVar4) {
        local_8c = iVar4;
      }
    }
    else {
      bVar1 = false;
      iVar4 = FUN_00f04d50(plVar6[0xdd]);
      local_8c = iVar4 / 2;
    }
    local_30 = FUN_0179b960(param_1);
    if (local_8c < 0x11) {
      local_ac = 8;
      local_b0 = 0x10;
      local_94 = local_8c << 4;
    }
    else {
      local_ac = 6;
      local_b0 = 8;
      local_94 = (local_8c + 1) * 8;
    }
    if (bVar1) {
      iVar4 = (**(code **)(*(longlong *)plVar6[0xe9] + 0x28))((longlong *)plVar6[0xe9]);
      local_8c = (**(code **)(*(longlong *)plVar6[0xea] + 0x28))((longlong *)plVar6[0xea]);
      if (local_8c < iVar4) {
        local_8c = iVar4;
      }
      if (local_b0 == 0x10) {
        if (local_8c * 0x10 < 0x51) {
          local_98 = 0x50;
        }
        else {
          local_98 = local_8c << 4;
        }
      }
      else if ((local_8c + 1) * 8 < 0x51) {
        local_98 = 0x50;
      }
      else {
        local_98 = (local_8c + 1) * 8;
      }
    }
    else {
      local_98 = 0x50;
    }
    iVar10 = local_94 / 2;
    iVar4 = local_30._4_4_;
    if (local_30._4_4_ < iVar10 + 0x18) {
      iVar4 = local_94 / 2 + 0x18;
    }
    iVar12 = local_98 / 2;
    iVar13 = (int)local_30;
    if ((int)local_30 < iVar12 + 0x18) {
      iVar13 = local_98 / 2 + 0x18;
    }
    local_30 = CONCAT44(iVar4,iVar13);
    FUN_0179b9f0(param_1,&local_30);
    FUN_0179bb00(param_1,&local_30);
    puVar8 = (undefined4 *)FUN_004095c0(0x1f);
    *puVar8 = 0x66;
    puVar8[1] = 0x105;
    puVar8[2] = 0x13;
    *(undefined1 *)(puVar8 + 3) = 0;
    iVar11 = iVar13 - iVar12;
    uVar9 = FUN_00b95b20(iVar11,local_30._4_4_ - iVar10,iVar13 + iVar12,local_30._4_4_ + iVar10);
    *(undefined8 *)((longlong)puVar8 + 0xd) = uVar9;
    uVar5 = FUN_01799a70(param_1);
    *(undefined4 *)((longlong)puVar8 + 0x15) = uVar5;
    uVar5 = FUN_01799b40(param_1);
    *(undefined4 *)((longlong)puVar8 + 0x19) = uVar5;
    *(undefined2 *)((longlong)puVar8 + 0x1d) = 1;
    uVar9 = FUN_017ad290(CONCAT62((int6)((ulonglong)(puVar8 + 3) >> 0x10),0x66),puVar8);
    FUN_004ae7e0(lVar7,uVar9);
    FUN_004095f0(puVar8);
    iVar4 = 1;
    if (bVar1) {
      iVar4 = (**(code **)(*(longlong *)plVar6[0xe7] + 0x28))();
      local_90 = 0;
      if (-1 < iVar4 + -1) {
        do {
          iVar10 = (**(code **)(*(longlong *)plVar6[0xe7] + 0x28))((longlong *)plVar6[0xe7]);
          iVar13 = local_30._4_4_ - local_94 / 2;
          (**(code **)(*(longlong *)plVar6[0xe7] + 0x18))
                    ((longlong *)plVar6[0xe7],&local_58,local_90);
          uVar3 = (**(code **)(*(longlong *)plVar6[0xe7] + 0x30))((longlong *)plVar6[0xe7],local_90)
          ;
          local_48 = FUN_00498310(0,0);
          uVar5 = FUN_005fdaa0(*(undefined8 *)(plVar6[0xe2] + 800));
          in_stack_fffffffffffffef8 = 0;
          uVar9 = FUN_017b02a0(&PTR_FUN_017a79c0,1,local_58,1,0,uVar3,0x20,0,iVar11 + -8,
                               iVar13 + ((local_94 - iVar10 * local_b0) / 0x10) * 8 +
                               local_90 * local_b0 + 8,0,&local_48,(double)local_ac,uVar5);
          FUN_004ae7e0(lVar7,uVar9);
          local_90 = local_90 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar10 = local_30._4_4_ + local_94 / 2;
      iVar4 = (**(code **)(*(longlong *)plVar6[0xea] + 0x28))
                        ((longlong *)plVar6[0xea],(longlong)local_94 % 2 & 0xffffffff);
      local_90 = 0;
      if (-1 < iVar4 + -1) {
        do {
          iVar13 = (**(code **)(*(longlong *)plVar6[0xea] + 0x28))((longlong *)plVar6[0xea]);
          iVar12 = (int)local_30 - local_98 / 2;
          (**(code **)(*(longlong *)plVar6[0xea] + 0x18))
                    ((longlong *)plVar6[0xea],&local_60,local_90);
          uVar3 = (**(code **)(*(longlong *)plVar6[0xea] + 0x30))((longlong *)plVar6[0xea],local_90)
          ;
          local_48 = FUN_00498310(0,0);
          uVar5 = FUN_005fdaa0(*(undefined8 *)(plVar6[0xe2] + 800));
          in_stack_fffffffffffffef8 = 0;
          uVar9 = FUN_017b02a0(&PTR_FUN_017a79c0,1,local_60,1,0,uVar3,0x20,3,
                               iVar12 + ((local_98 - iVar13 * local_b0) / 0x10) * 8 +
                               local_90 * local_b0 + 8,iVar10 + 8,0,&local_48,(double)local_ac,uVar5
                              );
          FUN_004ae7e0(lVar7,uVar9);
          local_90 = local_90 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar10 = (int)local_30 + local_98 / 2;
      iVar4 = (**(code **)(*(longlong *)plVar6[0xe8] + 0x28))
                        ((longlong *)plVar6[0xe8],(longlong)local_98 % 2 & 0xffffffff);
      local_90 = 0;
      if (-1 < iVar4 + -1) {
        do {
          iVar13 = (**(code **)(*(longlong *)plVar6[0xe8] + 0x28))((longlong *)plVar6[0xe8]);
          iVar12 = local_30._4_4_ - local_94 / 2;
          (**(code **)(*(longlong *)plVar6[0xe8] + 0x18))
                    ((longlong *)plVar6[0xe8],&local_68,local_90);
          uVar3 = (**(code **)(*(longlong *)plVar6[0xe8] + 0x30))((longlong *)plVar6[0xe8],local_90)
          ;
          local_48 = FUN_00498310(0,0);
          uVar5 = FUN_005fdaa0(*(undefined8 *)(plVar6[0xe2] + 800));
          in_stack_fffffffffffffef8 = 0;
          uVar9 = FUN_017b02a0(&PTR_FUN_017a79c0,1,local_68,1,0,uVar3,0x20,2,iVar10 + 8,
                               iVar12 + ((local_94 - iVar13 * local_b0) / 0x10) * 8 +
                               local_90 * local_b0 + 8,0,&local_48,(double)local_ac,uVar5);
          FUN_004ae7e0(lVar7,uVar9);
          local_90 = local_90 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar10 = local_30._4_4_ - local_94 / 2;
      iVar4 = (**(code **)(*(longlong *)plVar6[0xe9] + 0x28))
                        ((longlong *)plVar6[0xe9],(longlong)local_94 % 2 & 0xffffffff);
      local_90 = 0;
      if (-1 < iVar4 + -1) {
        do {
          iVar13 = (**(code **)(*(longlong *)plVar6[0xe9] + 0x28))((longlong *)plVar6[0xe9]);
          iVar12 = (int)local_30 - local_98 / 2;
          (**(code **)(*(longlong *)plVar6[0xe9] + 0x18))
                    ((longlong *)plVar6[0xe9],&local_70,local_90);
          uVar3 = (**(code **)(*(longlong *)plVar6[0xe9] + 0x30))((longlong *)plVar6[0xe9],local_90)
          ;
          local_48 = FUN_00498310(0,0);
          uVar5 = FUN_005fdaa0(*(undefined8 *)(plVar6[0xe2] + 800));
          in_stack_fffffffffffffef8 = 0;
          uVar9 = FUN_017b02a0(&PTR_FUN_017a79c0,1,local_70,1,0,uVar3,0x20,1,
                               iVar12 + ((local_98 - iVar13 * local_b0) / 0x10) * 8 +
                               local_90 * local_b0 + 8,iVar10 + -8,0,&local_48,(double)local_ac,
                               uVar5);
          FUN_004ae7e0(lVar7,uVar9);
          local_90 = local_90 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else {
      local_90 = 0;
      iVar10 = local_8c;
      if (-1 < local_8c + -1) {
        do {
          iVar13 = local_30._4_4_ - local_94 / 2;
          FUN_0043f750(local_40,iVar4);
          local_48 = FUN_00498310(0,0);
          uVar5 = FUN_005fdaa0(*(undefined8 *)(plVar6[0xe2] + 800));
          in_stack_fffffffffffffef8 = 0;
          uVar9 = FUN_017b02a0(&PTR_FUN_017a79c0,1,local_40[0],1,0,4,0x20,0,iVar11 + -8,
                               iVar13 + local_90 * local_b0 + 8,0,&local_48,(double)local_ac,uVar5);
          FUN_004ae7e0(lVar7,uVar9);
          iVar4 = iVar4 + 1;
          local_90 = local_90 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      iVar10 = (int)local_30 + local_98 / 2;
      local_90 = 0;
      if (-1 < local_8c + -1) {
        do {
          iVar13 = local_30._4_4_ - local_94 / 2;
          FUN_0043f750(&local_50,iVar4);
          local_48 = FUN_00498310(0,0);
          uVar5 = FUN_005fdaa0(*(undefined8 *)(plVar6[0xe2] + 800));
          in_stack_fffffffffffffef8 = 0;
          uVar9 = FUN_017b02a0(&PTR_FUN_017a79c0,1,local_50,1,0,4,0x20,2,iVar10 + 8,
                               iVar13 + local_90 * local_b0 + 8,0,&local_48,(double)local_ac,uVar5);
          FUN_004ae7e0(lVar7,uVar9);
          iVar4 = iVar4 + 1;
          local_90 = local_90 + 1;
          local_8c = local_8c + -1;
        } while (local_8c != 0);
      }
    }
    iVar4 = *(int *)(lVar7 + 0x10);
    local_90 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar9 = FUN_004aeac0(lVar7,local_90);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0xd10),uVar9);
        local_90 = local_90 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (0 < *(int *)(lVar7 + 0x10)) {
      uVar9 = FUN_00c5c340(&DAT_00c5bba8,1,*(undefined8 *)(param_1 + 0xd10),lVar7,
                           in_stack_fffffffffffffef8 & 0xff00);
      FUN_00c5c790(*(undefined8 *)(param_1 + 0xd50),uVar9);
    }
    FUN_00410f20(lVar7);
  }
  (**(code **)(**(longlong **)(param_1 + 0x948) + 0x180))(*(longlong **)(param_1 + 0x948));
  FUN_00410f20(plVar6);
  FUN_00414560(&local_70,5);
  FUN_00414480(local_40);
  return;
}

