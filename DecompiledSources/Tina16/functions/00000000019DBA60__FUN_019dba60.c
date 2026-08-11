/* Ghidra address: 019dba60 */
/* Ghidra symbol: FUN_019dba60 */


longlong * FUN_019dba60(longlong *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined7 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_208 [32];
  undefined1 *local_1e8;
  undefined1 local_1e0;
  int local_1d4;
  undefined8 local_1d0;
  undefined1 local_1c8 [256];
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined8 *local_b8;
  undefined1 *local_b0;
  int local_a8;
  int local_a4;
  byte *local_a0;
  byte *local_98;
  byte *local_88;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_66 [2];
  uint local_64;
  int local_60;
  uint local_5c;
  undefined8 local_58;
  byte *local_50;
  byte local_41;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_b0 = auStack_208;
  local_1d0 = 0;
  local_c8 = 0;
  local_b8 = (undefined8 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_70 = 0;
  local_78 = 0;
  local_38 = param_1;
  uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  local_64 = (uint)uVar2;
  if ((local_64 == 0x10) || ((0x56 < local_64 && (local_64 < 0x5f)))) {
    (**(code **)(*param_1 + 0x288))(param_1,&local_78);
    local_a4 = 0;
    if (local_78 != 0) {
      local_a4 = *(int *)(local_78 + -4);
    }
    if (0 < local_a4) {
      local_a8 = 0;
      if (local_78 != 0) {
        local_a8 = *(int *)(local_78 + -4);
      }
      FUN_00416dc0(&local_78,local_78,2,local_a8 + -1);
    }
    FUN_00414ad0(param_1 + 0x13,local_78);
  }
  iVar3 = FUN_01cfd2d0();
  local_1d4 = iVar3 + -1;
  local_5c = 0;
  if (-1 < local_1d4) {
    do {
      local_1d4 = iVar3;
      uVar6 = (ulonglong)local_5c;
      local_41 = (**(code **)(*param_1 + 0x2d0))(param_1,uVar6,&local_50);
      uVar7 = (undefined7)(uVar6 >> 8);
      if (local_41 < 7) {
        if ((local_41 == 6) || (local_41 == 3)) goto LAB_019dbc5c;
        if (local_41 == 4) goto LAB_019dbeee;
        if (local_41 == 5) {
          local_88 = local_50;
          bVar1 = *local_50;
          if (bVar1 < 8) {
            uVar5 = (int)CONCAT71(uVar7,1) << (bVar1 & 0x1f);
            uVar6 = (ulonglong)uVar5;
            bVar9 = (uVar5 & 0xfe) != 0;
          }
          else {
            bVar9 = false;
          }
          if (!bVar9) {
            if ((byte)(bVar1 - 8) < 8) {
              bVar9 = ((int)CONCAT71((int7)(uVar6 >> 8),1) << (bVar1 - 8 & 0x1f) & 0x70U) != 0;
            }
            else {
              bVar9 = false;
            }
            if (!bVar9) {
              if ((bVar1 == 9) && (local_98 = local_50 + 1, *(int *)(local_50 + 5) == 0)) {
                if (*(longlong *)(local_50 + 0x11) == 0) {
                  uVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
                  *(undefined8 *)(local_98 + 0x10) = uVar4;
                }
                iVar3 = *(int *)local_98;
                local_60 = 1;
                if (0 < iVar3) {
                  do {
                    lVar8 = (longlong)local_60;
                    local_1e8._0_1_ = 1;
                    FUN_00b8fd60(&local_b8,
                                 *(undefined8 *)(*(longlong *)(local_98 + 8) + -0x10 + lVar8 * 0x10)
                                 ,6,0);
                    local_1e8 = (undefined1 *)CONCAT71(local_1e8._1_7_,1);
                    FUN_00b8fd60(&local_c0,
                                 *(undefined8 *)(*(longlong *)(local_98 + 8) + -8 + lVar8 * 0x10),6,
                                 0);
                    local_1e8 = local_c0;
                    FUN_00416cd0(&local_70,3,local_b8);
                    (**(code **)(**(longlong **)(local_98 + 0x10) + 0x78))
                              (*(longlong **)(local_98 + 0x10),local_70);
                    local_60 = local_60 + 1;
                    iVar3 = iVar3 + -1;
                  } while (iVar3 != 0);
                }
              }
              goto LAB_019dc055;
            }
          }
          uVar5 = (uint)(byte)PTR_DAT_02001408[(ulonglong)bVar1 - 1];
          local_60 = 0;
          if (-1 < (int)(uVar5 - 1)) {
            do {
              FUN_01d3a230(*(longlong *)(local_88 + 1),*(undefined8 *)(local_88 + 9),local_60,
                           *(undefined8 *)(*(longlong *)(local_88 + 1) + (longlong)local_60 * 8));
              local_60 = local_60 + 1;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
        }
      }
      else {
        if (local_41 == 7) {
LAB_019dbeee:
          local_a0 = local_50;
          local_1e8 = &LAB_019dc150;
          local_1e0 = 0;
          local_20 = FUN_0172bd70(&PTR_FUN_01729478,CONCAT71(uVar7,1),param_1,(undefined1)local_5c);
          local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
          local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
          FUN_0172c500(local_20,local_28);
          (**(code **)(*local_28 + 0x18))(local_28,&local_c8,**(undefined1 **)(local_a0 + 0x26));
          FUN_00416910(local_1c8,local_c8,0xff);
          FUN_00415020(local_a0 + 0x15,local_1c8,0x10);
          FUN_0172c930(local_20,**(undefined1 **)(local_a0 + 0x26),local_30,local_66);
          (**(code **)(*local_30 + 0x18))(local_30,&local_1d0,0);
          FUN_00416910(local_1c8,local_1d0,0xff);
          FUN_00415020(local_a0,local_1c8,0x14);
          FUN_00410f20(local_20);
          FUN_00410f20(local_28);
          FUN_00410f20(local_30);
          goto LAB_019dc055;
        }
        if (local_41 != 0xd) goto LAB_019dc055;
LAB_019dbc5c:
        if (local_41 == 3) {
          local_58 = *(undefined8 *)local_50;
        }
        else if (local_41 == 6) {
          local_58 = *(undefined8 *)local_50;
        }
        else {
          local_58 = *(undefined8 *)local_50;
        }
        FUN_01d3a010(local_50,local_41,local_58);
      }
LAB_019dc055:
      local_5c = local_5c + 1;
      local_1d4 = local_1d4 + -1;
      iVar3 = local_1d4;
    } while (local_1d4 != 0);
  }
  FUN_00414480(&local_1d0);
  FUN_00414560(&local_c8,3);
  FUN_00414560(&local_78,2);
  return local_38;
}

