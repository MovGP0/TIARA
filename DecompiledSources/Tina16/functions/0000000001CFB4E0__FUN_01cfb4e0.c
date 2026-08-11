/* Ghidra address: 01cfb4e0 */
/* Ghidra symbol: FUN_01cfb4e0 */


void FUN_01cfb4e0(longlong *param_1,longlong *param_2,char param_3,char param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  byte bVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  ushort uVar15;
  ushort uVar16;
  int local_32c;
  int local_328;
  int local_324;
  int local_320;
  int local_31c;
  byte local_311;
  undefined8 local_310 [2];
  int local_2fc;
  int local_2f8;
  int local_2f4;
  int local_2f0;
  undefined1 local_2ec [18];
  undefined4 local_2da;
  char local_2d6;
  undefined8 local_2d5;
  undefined8 uStack_2cd;
  undefined4 uStack_2c5;
  undefined1 uStack_2c1;
  undefined1 local_240 [528];
  int local_30;
  int local_2c;
  
  local_310[0] = 0;
  if (param_2 != (longlong *)0x0) {
    if ((*(char *)((longlong)param_1 + 0xb) == '\0') && (*(char *)((longlong)param_1 + 9) != '\0'))
    {
      (**(code **)(*param_1 + 0x50))(param_1,param_2,&local_2fc);
      if (*(char *)((longlong)param_2 + 0x12d) != '\0') {
        FUN_01a98380(param_2,local_2fc,local_2f8,&local_2fc,&local_2f8);
        FUN_01a98380(param_2,local_2f4,local_2f0,&local_2f4,&local_2f0);
        goto LAB_01cfc2fe;
      }
      (**(code **)(*param_2 + 0x30))
                (param_2,local_2fc + -2,local_2f8 + -2,local_2f4 + 2,local_2f0 + 2);
    }
    lVar10 = FUN_01d06e20(param_1);
    if (lVar10 == 0) {
      bVar11 = 0;
      if (*(char *)((longlong)param_1 + 0xb) == '\0') {
        if (*(char *)((longlong)param_1 + 9) == '\0') {
          if (*(char *)((longlong)param_1 + 0x52) == '\0') {
            if (*(char *)((longlong)param_1 + 10) == '\0') {
              FUN_01a9a440(param_2,1);
            }
            else {
              if (*(char *)((longlong)param_1 + 0xaa) == '\0') {
                FUN_01a9a440(param_2,3);
              }
              else {
                FUN_01a9a440(param_2,0x16);
              }
              bVar11 = 1;
            }
          }
          else {
            FUN_01a9a440(param_2,4);
            bVar11 = 1;
          }
        }
        else {
          FUN_01a9a440(param_2,0);
          bVar11 = 0;
        }
      }
      else {
        (**(code **)(*param_2 + 0xf0))(param_2,1);
        FUN_01a9a440(param_2,2);
        bVar11 = 1;
      }
      if ((bVar11 & *PTR_DAT_02004898) != 0) {
        (**(code **)(*param_2 + 0xf8))(param_2);
      }
      if (param_3 == '\0') {
        lVar10 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,
                              *(undefined2 *)((longlong)param_1 + 0xba));
        local_311 = *(byte *)(lVar10 + 0xb5);
        lVar10 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,
                              *(undefined2 *)((longlong)param_1 + 0xba));
        local_324 = *(int *)(lVar10 + 0x9a);
      }
      else {
        lVar10 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,
                              *(undefined2 *)((longlong)param_1 + 0xba));
        local_311 = *(byte *)(lVar10 + 0xbb);
        if (local_311 == 0) {
          lVar10 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,
                                *(undefined2 *)((longlong)param_1 + 0xba));
          local_311 = *(byte *)(lVar10 + 0xb5);
          lVar10 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,
                                *(undefined2 *)((longlong)param_1 + 0xba));
          local_324 = *(int *)(lVar10 + 0x9a);
        }
        else {
          lVar10 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,
                                *(undefined2 *)((longlong)param_1 + 0xba));
          local_324 = *(int *)(lVar10 + 0xb7);
        }
      }
      if (*(char *)((longlong)param_1 + 0xd3) == '\0') {
        local_328 = 1;
      }
      else {
        local_328 = -1;
      }
      local_32c = -1;
      lVar10 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,
                            *(undefined2 *)((longlong)param_1 + 0xba));
      local_2c = (int)*(short *)(lVar10 + 0x81);
      lVar10 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,
                            *(undefined2 *)((longlong)param_1 + 0xba));
      local_30 = (int)*(short *)(lVar10 + 0x83);
      uVar7 = FUN_01a99990(param_2);
      uVar8 = (**(code **)(*param_2 + 0xd0))(param_2,6);
      (**(code **)(*param_2 + 0xd0))(param_2,1);
      local_320 = *(int *)((longlong)param_1 + 0xc);
      local_31c = (int)param_1[2];
      cVar4 = '\x01';
      while (local_32c < (int)(uint)local_311) {
        cVar12 = *(char *)((longlong)param_1 + 0xd1);
        if (cVar12 == '\0') {
          local_320 = local_320 + local_328 * local_2c;
          local_31c = local_31c + local_30;
        }
        else if (cVar12 == '\x01') {
          local_320 = local_320 + local_30;
          local_31c = local_31c - local_328 * local_2c;
        }
        else if (cVar12 == '\x02') {
          local_320 = local_320 - local_328 * local_2c;
          local_31c = local_31c - local_30;
        }
        else if (cVar12 == '\x03') {
          local_320 = local_320 - local_30;
          local_31c = local_31c + local_328 * local_2c;
        }
        if (cVar4 == '\0') {
          (**(code **)(*param_2 + 0x48))(param_2,local_320,local_31c);
        }
        else {
          (**(code **)(*param_2 + 0x40))(param_2,local_320,local_31c);
        }
        local_32c = local_32c + 1;
        if (local_32c < (int)(uint)local_311) {
          puVar1 = (undefined4 *)
                   (*(longlong *)PTR_DAT_020033c8 + -5 + (longlong)(local_324 + local_32c) * 5);
          uVar14 = *puVar1;
          local_2d6 = *(char *)(puVar1 + 1);
          local_2da._0_2_ = (short)uVar14;
          local_2c = (int)(short)local_2da;
          local_2da._2_2_ = (short)((uint)uVar14 >> 0x10);
          local_30 = (int)local_2da._2_2_;
          local_2da = uVar14;
          cVar4 = local_2d6;
        }
      }
      if (*(char *)((longlong)param_1 + 0xb) == '\0') {
        lVar10 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,
                              *(undefined2 *)((longlong)param_1 + 0xba));
        iVar9 = *(int *)(lVar10 + 0xaf);
        if (*(char *)((longlong)param_1 + 0xd3) == '\0') {
          local_328 = 1;
        }
        else {
          local_328 = -1;
        }
        for (local_32c = 0;
            lVar10 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,
                                  *(undefined2 *)((longlong)param_1 + 0xba)),
            local_32c < (int)(uint)*(byte *)(lVar10 + 0xb3); local_32c = local_32c + 1) {
          local_320 = *(int *)((longlong)param_1 + 0xc);
          local_31c = (int)param_1[2];
          puVar2 = (undefined8 *)
                   (*(longlong *)PTR_DAT_02001338 + -0x15 + (longlong)(iVar9 + local_32c) * 0x15);
          uVar3 = *puVar2;
          uStack_2cd = puVar2[1];
          uStack_2c5 = *(undefined4 *)(puVar2 + 2);
          uStack_2c1 = *(undefined1 *)((longlong)puVar2 + 0x14);
          local_2d5._0_1_ = (char)uVar3;
          cVar12 = (char)local_2d5;
          local_2d5._1_2_ = (short)((ulonglong)uVar3 >> 8);
          local_2c = (int)local_2d5._1_2_;
          local_2d5._3_2_ = (short)((ulonglong)uVar3 >> 0x18);
          local_30 = (int)local_2d5._3_2_;
          local_2d5 = uVar3;
          FUN_00415020(local_240,(longlong)&local_2d5 + 5,0xf);
          cVar4 = *(char *)((longlong)param_1 + 0xd1);
          if (cVar4 == '\0') {
            local_320 = local_320 + local_328 * local_2c;
            local_31c = local_31c + local_30;
          }
          else if (cVar4 == '\x01') {
            local_320 = local_320 + local_30;
            local_31c = local_31c - local_328 * local_2c;
          }
          else if (cVar4 == '\x02') {
            local_320 = local_320 - local_328 * local_2c;
            local_31c = local_31c - local_30;
          }
          else if (cVar4 == '\x03') {
            local_320 = local_320 - local_30;
            local_31c = local_31c + local_328 * local_2c;
          }
          uVar14 = uVar8;
          if (*(char *)((longlong)param_1 + 9) != '\0') {
            uVar14 = uVar7;
          }
          if ((cVar12 == '\0') == (bool)*(char *)((longlong)param_1 + 0xd3)) {
            cVar12 = '\x02';
          }
          else {
            cVar12 = '\0';
          }
          if (cVar4 == '\0') {
            if (cVar12 == '\0') {
              local_320 = local_320 + 2;
            }
            else if (cVar12 == '\x02') {
              local_320 = local_320 + -2;
            }
          }
          else if (cVar4 == '\x01') {
            if (cVar12 == '\0') {
              local_31c = local_31c + -2;
            }
            else if (cVar12 == '\x02') {
              local_31c = local_31c + 2;
            }
          }
          else if (cVar4 == '\x02') {
            if (cVar12 == '\0') {
              local_320 = local_320 + -2;
            }
            else if (cVar12 == '\x02') {
              local_320 = local_320 + 2;
            }
          }
          else if (cVar4 == '\x03') {
            if (cVar12 == '\0') {
              local_31c = local_31c + 2;
            }
            else if (cVar12 == '\x02') {
              local_31c = local_31c + -2;
            }
          }
          FUN_004169a0(local_310,local_240);
          FUN_01a98770(param_2,local_320,local_31c,cVar12,1,cVar4,0x3feccccccccccccd,
                       0x3feccccccccccccd,uVar14,*(undefined4 *)((longlong)param_2 + 0xfc),300,0,
                       *(undefined1 *)((longlong)param_1 + 0xb),param_2[0x21],local_310[0],0,0);
          (**(code **)(*param_2 + 0xb8))(param_2,uVar7);
        }
      }
      if (*(char *)((longlong)param_1 + 0xb) == '\0') {
        FUN_01aa1e90(param_1,param_2,*(undefined1 *)((longlong)param_1 + 10),param_4);
      }
      iVar9 = (**(code **)(*param_1 + 0x1c8))();
      iVar13 = 0;
      if (-1 < iVar9 + -1) {
        do {
          cVar4 = (**(code **)(*param_1 + 0x1d8))(param_1,iVar13);
          if (cVar4 == '\0') {
            (**(code **)(*param_1 + 0x1f0))(param_1,iVar13,&local_2c,&local_30);
            (**(code **)(*param_2 + 0x80))(param_2,local_2c,local_30);
          }
          iVar13 = iVar13 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else {
      uVar15 = 0;
      if (*(char *)((longlong)param_1 + 0xb) == '\0') {
        if (*(char *)((longlong)param_1 + 9) == '\0') {
          if (*(char *)((longlong)param_1 + 0x52) != '\0') {
            uVar15 = 0x40;
          }
        }
        else {
          uVar15 = 4;
        }
      }
      else {
        uVar15 = 2;
      }
      cVar4 = FUN_01d0a350(param_1);
      if ((cVar4 != '\0') && (*(char *)((longlong)param_1 + 10) == '\0')) {
        uVar15 = uVar15 | 0x20;
      }
      uVar16 = uVar15;
      if ((*(char *)((longlong)param_1 + 10) != '\0') &&
         (uVar16 = uVar15 | 1, *(char *)((longlong)param_1 + 0xaa) != '\0')) {
        uVar16 = uVar15 | 9;
      }
      if (*(char *)((longlong)param_2 + 299) == '\0') {
        uVar16 = uVar16 | 0x80;
      }
      if (1 < *(int *)((longlong)param_1 + 0x18c)) {
        FUN_01a9d8c0(param_2,5,0xd8);
      }
      cVar4 = (**(code **)(*param_1 + 0x2d8))(param_1);
      if (cVar4 == '\0') {
        cVar4 = FUN_01d07320(param_1);
        uVar6 = (uint)cVar4;
      }
      else {
        uVar6 = FUN_0173d730(param_1[0x33]);
      }
      FUN_01a9d8b0(param_2,uVar6);
      FUN_01a9faa0(param_2,local_2ec);
      if ((param_4 == '\0') || (0x7fffffff < uVar6)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      FUN_00c3f660(lVar10,param_2,*(undefined2 *)((longlong)param_1 + 0xc),(short)param_1[2],uVar16,
                   param_3 == '\0',uVar5,*(undefined1 *)((longlong)param_1 + 0xd1),
                   *(undefined1 *)((longlong)param_1 + 0xd3));
      if (1 < *(int *)((longlong)param_1 + 0x18c)) {
        FUN_01a9d8c0(param_2,0,0);
      }
      FUN_01a9fb00(param_2,local_2ec);
    }
    if (((*(char *)((longlong)param_1 + 0xb) == '\0') &&
        (cVar4 = (**(code **)(*param_1 + 0x2d8))(param_1), cVar4 != '\0')) &&
       ((*(char *)((longlong)param_2 + 0x12e) == '\0' ||
        (((*(longlong *)PTR_DAT_02004e40 != 0 &&
          (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) != 0)) &&
         (iVar9 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x18))
                            (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),param_1),
         -1 < iVar9)))))) {
      if (*(char *)((longlong)param_1 + 9) == '\0') {
        FUN_0173d100(param_1[0x33],param_2,param_3,param_4);
      }
      else {
        FUN_0173d1e0(param_1[0x33],param_2);
      }
    }
    (**(code **)(*param_2 + 0xf0))(param_2,0);
    (**(code **)(*param_2 + 0xe0))(param_2,0);
  }
LAB_01cfc2fe:
  FUN_00414480(local_310);
  return;
}

