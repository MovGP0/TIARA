/* Ghidra address: 01351350 */
/* Ghidra symbol: FUN_01351350 */


byte FUN_01351350(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  double dVar1;
  undefined2 uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  short sVar12;
  ushort uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 local_res18 [2];
  byte local_89;
  int local_88;
  int local_74;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  double *local_50 [5];
  
  local_70[0] = 0;
  local_60 = 0;
  local_res18[0] = param_3;
  FUN_00414630(param_3);
  uVar2 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  local_89 = 0;
  *param_4 = 0;
  cVar4 = FUN_0198a580(param_2);
  if (cVar4 != '\x04') {
    cVar4 = FUN_0198a580(param_2);
    if (cVar4 == '\x05') {
      cVar4 = FUN_01350fa0(local_res18);
      local_89 = (char)param_2[0x7f] != cVar4;
      if ((bool)local_89) {
        *(char *)(param_2 + 0x7f) = cVar4;
        *param_4 = 1;
      }
    }
    goto LAB_0135282e;
  }
  uVar16 = (**(code **)(*param_2 + 0xf8))(param_2);
  uVar16 = uVar16 & 0xffff;
  if (uVar16 < 0x59) {
    if (uVar16 < 0x2c) {
      if (uVar16 == 0x2b) {
        local_50[0] = (double *)FUN_01cfde70(param_2,1,3,&local_51,&local_52,&local_53);
        local_89 = FUN_01351270(local_50[0],local_res18);
        local_50[0] = (double *)FUN_01cfde70(param_2,1,0,&local_51,&local_52,&local_53);
        *(undefined1 *)((longlong)local_50[0] + 0x2e) = 1;
      }
      else if (uVar16 < 0xf) {
        if (uVar16 == 0xe) {
LAB_013516c7:
          cVar4 = FUN_01351210(param_2,0,local_res18);
          cVar5 = FUN_01351210(param_2,1,local_res18);
          (**(code **)(*param_2 + 0x2d0))(param_2,3,local_50);
          iVar14 = FUN_01350fa0(local_res18);
          iVar15 = FUN_01350fa0(local_res18);
          uVar18 = iVar14 * 2 + iVar15 * 0x10;
          if ((cVar4 == '\0' && cVar5 == '\0') && (*(byte *)local_50[0] == uVar18)) {
            local_89 = 0;
          }
          else {
            local_89 = 1;
          }
          if (*(byte *)local_50[0] != uVar18) {
            *(char *)local_50[0] = (char)uVar18;
            *param_4 = 1;
          }
        }
        else if ((uVar16 - 5 < 2) || (uVar16 == 8)) {
          local_89 = FUN_01351300(param_2,1,local_res18);
          if ((local_89 != 0) &&
             ((sVar12 = (**(code **)(*param_2 + 0xf8))(param_2), sVar12 == 6 ||
              (sVar12 = (**(code **)(*param_2 + 0xf8))(param_2), sVar12 == 8)))) {
            *param_4 = 1;
          }
        }
        else {
          if (uVar16 == 9) goto LAB_01351c66;
          if (uVar16 - 10 < 2) goto LAB_01351ea3;
        }
      }
      else if (uVar16 == 0x10) {
        (**(code **)(*param_2 + 0x2d0))(param_2,1,local_50);
        if (*(longlong *)((longlong)local_50[0] + 9) != 0) {
          uVar18 = (uint)(byte)PTR_DAT_02001408[(ulonglong)*(byte *)local_50[0] - 1];
          local_74 = 0;
          if (-1 < (int)(uVar18 - 1)) {
            do {
              FUN_004095f0(*(undefined8 *)
                            (*(longlong *)((longlong)local_50[0] + 9) + (longlong)local_74 * 8));
              local_74 = local_74 + 1;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
        }
        *(undefined1 *)local_50[0] = 4;
        FUN_00409620((undefined1 *)((longlong)local_50[0] + 1),
                     (ulonglong)(byte)PTR_DAT_02001408[3] << 3);
        *(ushort *)((longlong)local_50[0] + 0x11) =
             (ushort)(byte)PTR_DAT_02001408[(ulonglong)*(byte *)local_50[0] - 1] * 8;
        FUN_00409620((undefined1 *)((longlong)local_50[0] + 9),
                     (ulonglong)(byte)PTR_DAT_02001408[(ulonglong)*(byte *)local_50[0] - 1] << 3);
        local_50[0] = (double *)FUN_01cfde70(param_2,2,1,&local_51,&local_52,&local_53);
        cVar4 = FUN_01351270(local_50[0],local_res18);
        FUN_01d3a230(*(undefined8 **)((longlong)local_50[0] + 1),
                     *(undefined8 *)((longlong)local_50[0] + 9),0,
                     **(undefined8 **)((longlong)local_50[0] + 1));
        local_50[0] = (double *)FUN_01cfde70(param_2,2,2,&local_51,&local_52,&local_53);
        cVar5 = FUN_01351270(local_50[0],local_res18);
        FUN_01d3a230(*(longlong *)((longlong)local_50[0] + 1),
                     *(undefined8 *)((longlong)local_50[0] + 9),1,
                     *(undefined8 *)(*(longlong *)((longlong)local_50[0] + 1) + 8));
        local_50[0] = (double *)FUN_01cfde70(param_2,2,3,&local_51,&local_52,&local_53);
        dVar19 = (double)FUN_01350e90(local_res18);
        if ((cVar4 == '\0' && cVar5 == '\0') && (*local_50[0] == dVar19 - 90.0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (*local_50[0] != dVar19 - 90.0) {
          *local_50[0] = dVar19 - 90.0;
        }
        (**(code **)(*param_2 + 0x2d0))(param_2,4,local_50);
        iVar14 = FUN_01350fa0(local_res18);
        iVar15 = FUN_01350fa0(local_res18);
        uVar18 = iVar14 * 2 + iVar15 * 0x10;
        if ((bVar3) || (*(byte *)local_50[0] != uVar18)) {
          local_89 = 1;
        }
        else {
          local_89 = 0;
        }
        if (*(byte *)local_50[0] != uVar18) {
          *(char *)local_50[0] = (char)uVar18;
          *param_4 = 1;
        }
      }
      else if (uVar16 - 0x18 < 2) {
LAB_0135247b:
        local_50[0] = (double *)FUN_01cfde70(param_2,1,0xf,&local_51,&local_52,&local_53);
        local_89 = FUN_01351270(local_50[0],local_res18);
        local_50[0] = (double *)FUN_01cfde70(param_2,1,0,&local_51,&local_52,&local_53);
        *(undefined1 *)((longlong)local_50[0] + 0x2e) = 1;
      }
      else {
        if (uVar16 - 0x1a < 2) goto LAB_01352510;
        if (uVar16 - 0x1a == 10) {
          bVar7 = FUN_013512a0(param_2,0,local_res18);
          bVar6 = FUN_01351210(param_2,2,local_res18);
          local_89 = FUN_01351300(param_2,9,local_res18);
          local_89 = bVar7 | bVar6 | local_89;
        }
      }
    }
    else if (uVar16 < 0x3c) {
      if (uVar16 == 0x3b) {
LAB_0135177d:
        local_89 = FUN_01351300(param_2,0,local_res18);
        if (local_89 != 0) {
          uVar17 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
          FUN_01d04aa0(param_2,uVar17);
        }
        if (*PTR_DAT_020052b8 != '\0') {
          (**(code **)(*param_2 + 0x2d0))(param_2,1,local_50);
          *(undefined1 *)(local_50[0] + 1) = 0;
          *local_50[0] = 1e+15;
        }
        bVar7 = FUN_01351300(param_2,3,local_res18);
        local_89 = local_89 | bVar7;
      }
      else if (uVar16 == 0x2c) {
        iVar14 = FUN_01350fa0(local_res18);
        if (iVar14 == 2) {
          FUN_01397660(param_2,L"CQX37A");
        }
        else if (iVar14 == 3) {
          FUN_01397660(param_2,L"CQX35A");
        }
        else if (iVar14 == 4) {
          FUN_01397660(param_2,L"CQX36A");
        }
        FUN_01d07850(param_2);
        local_89 = 1;
      }
      else if (uVar16 - 0x32 < 2) {
        bVar7 = FUN_01351210(param_2,0,local_res18);
        bVar6 = FUN_01351210(param_2,1,local_res18);
        local_89 = FUN_01351300(param_2,2,local_res18);
        local_89 = bVar7 | bVar6 | local_89;
      }
      else {
        if (uVar16 == 0x34) goto LAB_0135177d;
        if (uVar16 == 0x39) {
          FUN_01350dd0(local_70,local_res18);
          FUN_00416880(&local_60,local_70[0]);
          FUN_015fbfc0(param_2,local_60);
        }
      }
    }
    else if (uVar16 == 0x3c) {
      local_89 = FUN_01351210(param_2,0,local_res18);
      if (*PTR_DAT_020052b8 != '\0') {
        (**(code **)(*param_2 + 0x2d0))(param_2,1,local_50);
        *(undefined1 *)local_50[0] = 1;
      }
    }
    else {
      if (uVar16 == 0x43) goto LAB_013516c7;
      if (uVar16 == 0x48) {
        local_50[0] = (double *)FUN_01cfde70(param_2,1,1,&local_51,&local_52,&local_53);
        bVar7 = FUN_01351270(local_50[0],local_res18);
        local_50[0] = (double *)FUN_01cfde70(param_2,1,2,&local_51,&local_52,&local_53);
        bVar6 = FUN_01351270(local_50[0],local_res18);
        local_50[0] = (double *)FUN_01cfde70(param_2,1,5,&local_51,&local_52,&local_53);
        local_89 = FUN_01351270(local_50[0],local_res18);
        local_89 = bVar7 | bVar6 | local_89;
      }
      else if (uVar16 - 0x57 < 2) goto LAB_0135247b;
    }
  }
  else if (uVar16 < 0x7d) {
    if (uVar16 < 0x6b) {
      if (uVar16 == 0x6a) {
        local_89 = FUN_01351300(param_2,1,local_res18);
        bVar7 = FUN_01351300(param_2,3,local_res18);
        local_89 = local_89 | bVar7;
        uVar17 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
        FUN_01d04aa0(param_2,uVar17);
      }
      else if (uVar16 < 100) {
        if (uVar16 == 99) goto LAB_0135177d;
        if (uVar16 - 0x59 < 2) {
LAB_01352510:
          local_50[0] = (double *)FUN_01cfde70(param_2,1,1,&local_51,&local_52,&local_53);
          local_89 = FUN_01351270(local_50[0],local_res18);
          local_50[0] = (double *)FUN_01cfde70(param_2,1,0,&local_51,&local_52,&local_53);
          *(undefined1 *)((longlong)local_50[0] + 0x2e) = 1;
        }
        else if (uVar16 - 0x59 == 6) {
          local_50[0] = (double *)FUN_01cfde70(param_2,1,1,&local_51,&local_52,&local_53);
          bVar7 = FUN_01351270(local_50[0],local_res18);
          local_50[0] = (double *)FUN_01cfde70(param_2,1,2,&local_51,&local_52,&local_53);
          bVar6 = FUN_01351270(local_50[0],local_res18);
          local_50[0] = (double *)FUN_01cfde70(param_2,1,3,&local_51,&local_52,&local_53);
          bVar11 = FUN_01351270(local_50[0],local_res18);
          local_89 = FUN_01351300(param_2,1,local_res18);
          local_89 = bVar7 | bVar6 | bVar11 | local_89;
        }
      }
      else if (uVar16 == 0x65) {
        dVar22 = (double)FUN_01350e90(local_res18);
        dVar22 = dVar22 * 10.0;
        (**(code **)(*param_2 + 0x2d0))(param_2,0,local_50);
        dVar19 = *local_50[0];
        if (dVar19 != dVar22) {
          *local_50[0] = dVar22;
        }
        bVar7 = FUN_01351210(param_2,1,local_res18);
        dVar20 = (double)FUN_01350e90(local_res18);
        dVar20 = dVar20 * 4.0;
        (**(code **)(*param_2 + 0x2d0))(param_2,2,local_50);
        dVar1 = *local_50[0];
        if (dVar1 != dVar20) {
          *local_50[0] = dVar20;
        }
        bVar6 = FUN_01351210(param_2,3,local_res18);
        dVar21 = (double)FUN_01350e90(local_res18);
        dVar21 = dVar21 * 4.0;
        (**(code **)(*param_2 + 0x2d0))(param_2,4,local_50);
        local_89 = dVar19 != dVar22 | bVar7 | dVar1 != dVar20 | bVar6 | *local_50[0] != dVar21;
        if (*local_50[0] != dVar21) {
          *local_50[0] = dVar21;
        }
        if (local_89 != 0) {
          uVar17 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
          (**(code **)(*(longlong *)param_2[0x33] + 0xb0))
                    ((longlong *)param_2[0x33],uVar17,*PTR_DAT_02002480,*PTR_DAT_02001560);
        }
      }
      else if (uVar16 == 0x66) {
        bVar7 = FUN_01351210(param_2,0,local_res18);
        bVar6 = FUN_01351210(param_2,1,local_res18);
        bVar11 = FUN_01351210(param_2,2,local_res18);
        bVar8 = FUN_01351210(param_2,3,local_res18);
        dVar19 = (double)FUN_01350e90(local_res18);
        dVar22 = (double)FUN_01350e90(local_res18);
        bVar9 = FUN_013511c0(param_2,6,local_res18);
        bVar10 = FUN_01351300(param_2,7,local_res18);
        (**(code **)(*param_2 + 0x2d0))(param_2,7,local_50);
        cVar4 = *(char *)local_50[0];
        if (cVar4 == '\0') {
          (**(code **)(*param_2 + 0x2d0))(param_2,0,local_50);
          dVar19 = dVar19 / *local_50[0];
          dVar22 = dVar22 / *local_50[0];
        }
        if (cVar4 == '\x02') {
          dVar19 = (double)FUN_00c43d30(dVar19);
          dVar22 = (double)FUN_00c43d30(dVar22);
        }
        (**(code **)(*param_2 + 0x2d0))(param_2,4,local_50);
        dVar1 = *local_50[0];
        if (dVar1 != dVar19) {
          *local_50[0] = dVar19;
        }
        (**(code **)(*param_2 + 0x2d0))(param_2,5,local_50);
        local_89 = bVar7 | bVar6 | bVar11 | bVar8 | bVar9 | bVar10 | dVar1 != dVar19 |
                   *local_50[0] != dVar22;
        if (*local_50[0] != dVar22) {
          *local_50[0] = dVar22;
        }
        if (local_89 != 0) {
          uVar17 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
          (**(code **)(*(longlong *)param_2[0x33] + 0xb0))
                    ((longlong *)param_2[0x33],uVar17,*PTR_DAT_02002480,*PTR_DAT_02001560);
        }
      }
    }
    else if (uVar16 == 0x6b) {
LAB_01351c66:
      local_89 = FUN_013512a0(param_2,0,local_res18);
      bVar7 = FUN_01351300(param_2,8,local_res18);
      local_89 = local_89 | bVar7;
    }
    else if (uVar16 - 0x6d < 2) {
LAB_01351ea3:
      local_89 = FUN_013512a0(param_2,0,local_res18);
      bVar7 = FUN_01351300(param_2,9,local_res18);
      local_89 = local_89 | bVar7;
      if (bVar7 != 0) {
        *param_4 = 1;
      }
    }
    else {
      if (uVar16 - 0x72 < 2) goto LAB_0135247b;
      if (uVar16 - 0x74 < 2) goto LAB_01352510;
    }
  }
  else if (uVar16 < 0x3f2) {
    if (uVar16 == 0x3f1) {
LAB_013525a5:
      (**(code **)(*param_2 + 0x2d0))(param_2,1,local_50);
      *(undefined1 *)local_50[0] = 2;
      (**(code **)(*param_2 + 0x2d0))(param_2,2,local_50);
      *(undefined1 *)local_50[0] = 2;
      (**(code **)(*param_2 + 0x2d0))(param_2,3,local_50);
      *(undefined1 *)local_50[0] = 2;
      local_89 = 1;
    }
    else if (uVar16 < 0x3e9) {
      if ((uVar16 - 0x7d < 2) || (uVar16 - 0x7d == 3)) {
        local_89 = FUN_01351300(param_2,0,local_res18);
        if (local_89 != 0) {
          uVar17 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
          FUN_01d04aa0(param_2,uVar17);
        }
        if (*PTR_DAT_020052b8 != '\0') {
          (**(code **)(*param_2 + 0x2d0))(param_2,1,local_50);
          *(undefined1 *)(local_50[0] + 1) = 0;
          *local_50[0] = 1e+15;
        }
        bVar7 = FUN_01351300(param_2,4,local_res18);
        local_89 = local_89 | bVar7;
      }
    }
    else {
      if ((uVar16 - 0x3e9 < 3) || (uVar16 == 0x3ed)) goto LAB_013525a5;
      if (uVar16 == 0x3ef) goto LAB_01352615;
    }
  }
  else if (uVar16 - 0x3f6 < 2) {
LAB_01352615:
    (**(code **)(*param_2 + 0x2d0))(param_2,1,local_50);
    *(undefined1 *)local_50[0] = 2;
    (**(code **)(*param_2 + 0x2d0))(param_2,2,local_50);
    *(undefined1 *)local_50[0] = 2;
    local_89 = 1;
  }
  else {
    if (uVar16 == 0x3f9) goto LAB_013525a5;
    if ((uVar16 == 0x463) || (uVar16 - 0x467 < 6)) {
      (**(code **)(*param_2 + 0x2d0))(param_2,0,local_50);
      cVar4 = '\0';
      uVar13 = (**(code **)(*param_2 + 0xf8))(param_2);
      if (uVar13 < 0x46a) {
        if (uVar13 == 0x469) {
          local_88 = 5;
        }
        else if (uVar13 == 0x463) {
          local_88 = 4;
        }
        else if (uVar13 == 0x467) {
          local_88 = 2;
        }
        else if (uVar13 == 0x468) {
          local_88 = 3;
        }
      }
      else if (uVar13 == 0x46a) {
        local_88 = 6;
      }
      else if (uVar13 == 0x46b) {
        local_88 = 7;
      }
      else if (uVar13 == 0x46c) {
        local_88 = 8;
      }
      bVar7 = 0;
      if (-1 < local_88 + -1) {
        do {
          iVar14 = FUN_01350fa0(local_res18);
          cVar4 = cVar4 + (char)(iVar14 << (bVar7 & 0x1f));
          bVar7 = bVar7 + 1;
          local_88 = local_88 + -1;
        } while (local_88 != 0);
      }
      local_89 = *(char *)local_50[0] != cVar4;
      if ((bool)local_89) {
        *(char *)local_50[0] = cVar4;
        uVar17 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
        FUN_01d04aa0(param_2,uVar17);
      }
    }
  }
  if (local_89 != 0) {
    FUN_019af250(param_1);
    FUN_019af200(param_1,param_2);
  }
LAB_0135282e:
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = uVar2;
  FUN_004144d0(local_70);
  FUN_00414480(&local_60);
  FUN_004144d0(local_res18);
  return local_89;
}

