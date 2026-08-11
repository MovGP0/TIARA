/* Ghidra address: 016cbaf0 */
/* Ghidra symbol: FUN_016cbaf0 */


longlong * FUN_016cbaf0(byte *param_1,longlong *param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  ushort uVar13;
  double dVar14;
  longlong *local_5c8;
  undefined *local_5b8;
  undefined *local_5b0;
  undefined8 local_598;
  undefined8 local_590 [2];
  undefined8 local_580 [135];
  longlong local_148;
  longlong local_140;
  byte local_138 [272];
  
  local_590[0] = 0;
  lVar9 = (ulonglong)*param_1 + 1;
  pbVar11 = local_138;
  for (; lVar9 != 0; lVar9 = lVar9 + -1) {
    *pbVar11 = *param_1;
    param_1 = param_1 + 1;
    pbVar11 = pbVar11 + 1;
  }
  lVar9 = FUN_016bcb30(&PTR_FUN_016b3308,1,&DAT_016cc268);
  uVar6 = FUN_01d34560(&PTR_FUN_016a1b98,1,100,100);
  *(undefined8 *)(lVar9 + 0x40) = uVar6;
  uVar6 = FUN_00b95c80(local_138);
  *(undefined8 *)(lVar9 + 0x10) = uVar6;
  FUN_016c8c50(param_3,lVar9,0,0,param_4);
  local_5c8 = param_2;
  if (param_2 == (longlong *)0x0) {
    iVar4 = FUN_00414f50(*(undefined8 *)(lVar9 + 0x18),&DAT_016cc272,
                         (ulonglong)**(byte **)(lVar9 + 0x18) + 1);
    if (iVar4 == 0) {
      local_5c8 = (longlong *)FUN_014db750(0x17);
    }
    else {
      iVar4 = FUN_00414f50(*(undefined8 *)(lVar9 + 0x18),&DAT_016cc274,
                           (ulonglong)**(byte **)(lVar9 + 0x18) + 1);
      if (iVar4 == 0) {
        local_5c8 = (longlong *)FUN_014db750(0x57);
      }
      else {
        iVar4 = FUN_00414f50(*(undefined8 *)(lVar9 + 0x18),&DAT_016cc278,
                             (ulonglong)**(byte **)(lVar9 + 0x18) + 1);
        if (iVar4 == 0) {
          local_5c8 = (longlong *)FUN_014db750(0x58);
        }
        else {
          iVar4 = FUN_00414f50(*(undefined8 *)(lVar9 + 0x18),&DAT_016cc27c,
                               (ulonglong)**(byte **)(lVar9 + 0x18) + 1);
          if (iVar4 == 0) {
            dVar14 = *(double *)PTR_DAT_02003860;
            cVar1 = FUN_014db910(&DAT_016cc281,*(undefined8 *)(lVar9 + 0x40),&local_148);
            if (cVar1 != '\0') {
              dVar14 = *(double *)(local_148 + 0x28);
            }
            if (dVar14 < 0.0) {
              local_5c8 = (longlong *)FUN_014db750(0x5b);
            }
            else {
              local_5c8 = (longlong *)FUN_014db750(0x59);
            }
          }
          else {
            iVar4 = FUN_00414f50(*(undefined8 *)(lVar9 + 0x18),&DAT_016cc28a,
                                 (ulonglong)**(byte **)(lVar9 + 0x18) + 1);
            if (iVar4 == 0) {
              dVar14 = *(double *)PTR_DAT_02003860;
              cVar1 = FUN_014db910(&DAT_016cc281,*(undefined8 *)(lVar9 + 0x40),&local_148);
              if (cVar1 != '\0') {
                dVar14 = *(double *)(local_148 + 0x28);
              }
              if (0.0 <= dVar14) {
                local_5c8 = (longlong *)FUN_014db750(0x5c);
              }
              else {
                local_5c8 = (longlong *)FUN_014db750(0x5a);
              }
            }
            else {
              iVar4 = FUN_00414f50(*(undefined8 *)(lVar9 + 0x18),&DAT_016cc28f,
                                   (ulonglong)**(byte **)(lVar9 + 0x18) + 1);
              if (iVar4 == 0) {
                local_5c8 = (longlong *)FUN_014db750(0x5d);
              }
              else {
                iVar4 = FUN_00414f50(*(undefined8 *)(lVar9 + 0x18),&DAT_016cc293,
                                     (ulonglong)**(byte **)(lVar9 + 0x18) + 1);
                if (iVar4 == 0) {
                  local_5c8 = (longlong *)FUN_014db750(0x5e);
                }
                else {
                  FUN_0044d440();
                }
              }
            }
          }
        }
      }
    }
    uVar3 = (**(code **)(*local_5c8 + 0x2c8))(local_5c8);
    lVar7 = FUN_00409570(uVar3);
    local_5c8[0x18] = lVar7;
    FUN_01d38290(local_5c8,1);
  }
  cVar1 = (**(code **)(*local_5c8 + 0x2d0))(local_5c8,0,&local_140);
  if (cVar1 == '\x04') {
    cVar1 = **(char **)(local_140 + 0x26);
  }
  else {
    cVar1 = **(char **)(local_140 + 0x26);
  }
  uVar5 = (**(code **)(*local_5c8 + 0xf8))(local_5c8);
  uVar5 = FUN_01d423d0(uVar5);
  uVar13 = (ushort)uVar5;
  if ((uVar13 == 0x17) && (cVar1 != '\x01')) {
    FUN_0172d840(local_5c8,0,1,1);
  }
  if (((uVar13 == 0x57) || (uVar13 == 0x58)) && (cVar1 != '\x01')) {
    FUN_0172d840(local_5c8,0,1,1);
  }
  if (((uVar13 == 0x59) || (uVar13 == 0x5a)) || ((uVar13 == 0x5b || (uVar13 == 0x5c)))) {
    cVar2 = FUN_014db910(&LAB_016cc297,*(undefined8 *)(lVar9 + 0x40),&local_148);
    if (cVar2 == '\0') {
      local_598 = 0x3ff0000000000000;
      if (cVar1 != '\x01') {
        FUN_0172d840(local_5c8,0,1,1);
      }
    }
    else {
      local_598 = *(undefined8 *)(local_148 + 0x28);
      lVar7 = FUN_0040c770(local_598);
      if ((lVar7 == 1) && (cVar1 != '\x01')) {
        FUN_0172d840(local_5c8,0,1,1);
      }
      lVar7 = FUN_0040c770(local_598);
      if ((lVar7 == 2) && (cVar1 != '\x02')) {
        FUN_0172d840(local_5c8,0,2,1);
      }
      lVar7 = FUN_0040c770(local_598);
      if ((lVar7 == 3) && (cVar1 != '\x03')) {
        FUN_0172d840(local_5c8,0,3,1);
      }
      lVar7 = FUN_0040c770(local_598);
      if ((lVar7 == 7) && (cVar1 != '\x04')) {
        FUN_0172d840(local_5c8,0,4,1);
      }
      lVar7 = FUN_0040c770(local_598);
      if ((lVar7 == 8) && (cVar1 != '\x06')) {
        FUN_0172d840(local_5c8,0,6,1);
      }
    }
  }
  if (((uVar13 == 0x5d) || (uVar13 == 0x5e)) && (cVar1 != '\x01')) {
    FUN_0172d840(local_5c8,0,1,1);
  }
  puVar10 = (undefined8 *)PTR_DAT_02002058;
  puVar12 = local_580;
  for (lVar7 = 0x87; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  (**(code **)(*local_5c8 + 0x2d0))(local_5c8,0,&local_140);
  uVar8 = (ulonglong)uVar13;
  if (uVar8 < 0x41) {
    if (((uVar8 == 0x40) || (uVar8 == 0x17)) || ((uVar8 - 0x2b < 2 || (uVar8 - 0x2b == 10)))) {
      local_5b8 = PTR_DAT_02003bf0;
      local_5b0 = PTR_PTR_02002330;
    }
  }
  else if (uVar8 - 0x57 < 2) {
    local_5b8 = PTR_DAT_02004cc8;
    local_5b0 = PTR_PTR_020056c8;
  }
  else if (uVar8 - 0x59 < 4) {
    lVar7 = FUN_0040c770(local_598);
    if (lVar7 == 1) {
      local_5b8 = PTR_DAT_02001548;
      local_5b0 = PTR_DAT_020047d8;
    }
    else if (lVar7 == 2) {
      local_5b8 = PTR_DAT_02001850;
      local_5b0 = PTR_DAT_02004af8;
    }
    else if (lVar7 == 7) {
      (**(code **)(*local_5c8 + 0x288))(local_5c8,local_590);
      FUN_014de960(0,local_590[0],0,uVar5,*(undefined8 *)(lVar9 + 0x40),param_4);
      local_5b8 = PTR_DAT_02002058;
      local_5b0 = PTR_DAT_020053b0;
    }
    else if (lVar7 == 8) {
      FUN_014dedc0(uVar5,*(undefined8 *)(lVar9 + 0x40),param_4);
      local_5b8 = PTR_DAT_020059d0;
      local_5b0 = PTR_DAT_020040d8;
    }
    else {
      local_5b8 = PTR_DAT_020049e8;
      local_5b0 = PTR_DAT_02003290;
    }
  }
  else if (uVar8 - 0x5d < 2) {
    local_5b8 = *(undefined **)PTR_PTR_02004630;
    local_5b0 = *(undefined **)PTR_PTR_02001bb0;
  }
  lVar7 = *(longlong *)(local_140 + 0x26);
  FUN_00409a70(local_5b8,*(undefined8 *)(lVar7 + 9),*(undefined2 *)(lVar7 + 0x23));
  FUN_0040d200(*(undefined8 *)(lVar7 + 0x19),*(undefined2 *)(lVar7 + 0x21),1);
  FUN_014dd530(local_5c8,*(undefined2 *)(lVar7 + 0x21),*(undefined8 *)(lVar7 + 9),
               *(undefined8 *)(lVar7 + 1),*(undefined8 *)(lVar7 + 0x19),
               *(undefined8 *)(lVar9 + 0x40),local_5b0);
  puVar10 = local_580;
  puVar12 = (undefined8 *)PTR_DAT_02002058;
  for (lVar7 = 0x87; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  FUN_00410f20(lVar9);
  FUN_00414480(local_590);
  return local_5c8;
}

