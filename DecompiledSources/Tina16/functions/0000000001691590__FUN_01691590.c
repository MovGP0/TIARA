/* Ghidra address: 01691590 */
/* Ghidra symbol: FUN_01691590 */


void FUN_01691590(longlong param_1,byte *param_2,longlong *param_3,char param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined2 uVar4;
  ushort uVar5;
  int iVar6;
  undefined8 *puVar7;
  short *psVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 *puVar13;
  byte bVar14;
  byte *pbVar15;
  bool bVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined1 local_4d0 [256];
  undefined1 local_3d0 [94];
  undefined1 local_372;
  char local_371;
  byte *local_370;
  undefined8 local_368;
  undefined1 *local_360;
  undefined8 local_358;
  uint local_34d;
  undefined1 uStack_349;
  undefined1 local_24d [256];
  char local_14d;
  char local_14c;
  char local_14b;
  char local_14a;
  byte local_149;
  byte local_148 [288];
  
  local_560 = 0;
  local_550 = 0;
  local_558 = 0;
  local_548 = 0;
  local_540 = 0;
  local_538 = 0;
  local_530 = 0;
  local_528 = 0;
  local_520 = 0;
  local_518 = 0;
  local_510 = 0;
  local_508 = 0;
  local_500 = 0;
  local_4f8 = 0;
  local_4f0 = 0;
  local_4e8 = 0;
  local_4e0 = 0;
  local_4d8 = 0;
  local_358 = 0;
  local_360 = (undefined1 *)0x0;
  local_368 = 0;
  lVar11 = (ulonglong)*param_2 + 1;
  pbVar15 = local_148;
  for (; lVar11 != 0; lVar11 = lVar11 + -1) {
    *pbVar15 = *param_2;
    param_2 = param_2 + 1;
    pbVar15 = pbVar15 + 1;
  }
  *(undefined1 *)(param_1 + 0x152) = 0;
  *(longlong **)(param_1 + 0x1d0) = param_3;
  cVar2 = FUN_0198a580(param_3);
  if (((cVar2 != '\x04') || (param_3[0x18] == 0)) || (cVar2 = FUN_01d01970(param_3), cVar2 != '\0'))
  goto LAB_01692df8;
  FUN_00b91ab0(local_3d0,local_148,0x50);
  FUN_004169a0(&local_358,local_3d0);
  FUN_00414480(param_1 + 0x1c8);
  local_149 = 1;
  local_14d = '\0';
  local_14b = '\0';
  FUN_00416910(local_4d0,local_358,0xff);
  FUN_016911d0(local_4d0,&local_149,&local_14c,&local_14d);
  if (local_14c != '\0') {
    FUN_00416dc0(param_1 + 0x1c8,local_358,1,local_149);
  }
  FUN_00416910(local_4d0,local_358,0xff);
  FUN_01691320(param_1,local_4d0,&local_149,&local_14d,&local_14b);
  puVar13 = *(undefined1 **)(param_1 + 0x1c8);
  FUN_00414b50(&local_360,puVar13);
  uVar4 = (**(code **)(*param_3 + 0xf8))(param_3);
  *(undefined2 *)(param_1 + 0x150) = uVar4;
  uVar5 = *(short *)(param_1 + 0x150) - 0x18;
  if (uVar5 < 0x60) {
    bVar16 = ((byte)(&DAT_01692ef4)[(longlong)(int)(uVar5 & 0x7f) >> 3] >> (uVar5 & 7) & 1) != 0;
  }
  else {
    bVar16 = false;
  }
  if (bVar16) {
    puVar13 = (undefined1 *)0x0;
    FUN_01cfde70(param_3,1,0,&local_371,&local_372,&local_14a);
    if (local_14a == '\x04') {
      local_14c = '\x01';
      puVar7 = (undefined8 *)FUN_01cfde70(param_3,1,1,&local_371,&local_372,&local_14a);
      *(undefined4 *)(param_1 + 0x154) = 1;
      *(char *)(param_1 + 0x153) = local_371;
      *(undefined1 *)(param_1 + 0x152) = 1;
      *(undefined8 *)(param_1 + 0x1c0) = *puVar7;
      local_34d = CONCAT13(local_34d._3_1_,0x645202);
      FUN_010c7a60(param_1 + 0x1e0,*(undefined8 *)(param_1 + 0x1c0),0);
      FUN_004169a0(&local_4d8,&local_34d);
      FUN_00416ba0(param_1 + 0x1c8,local_360,local_4d8);
      if (local_14c != '\0') {
        FUN_00416910(local_4d0,*(undefined8 *)(param_1 + 0x1c8),0xff);
        cVar2 = FUN_016912c0(param_1,local_4d0,param_1 + 0x1e0);
        if (cVar2 != '\0') {
          FUN_016913a0(param_1,1);
        }
      }
      puVar7 = (undefined8 *)FUN_01cfde70(param_3,1,2,&local_371,&local_372,&local_14a);
      *(undefined8 *)(param_1 + 0x1c0) = *puVar7;
      local_34d = 0x74654204;
      uStack_349 = 0x61;
      FUN_010c7a60(param_1 + 0x1e0,*(undefined8 *)(param_1 + 0x1c0),0);
      FUN_004169a0(&local_4e0,&local_34d);
      puVar13 = local_360;
      FUN_00416ba0(param_1 + 0x1c8,local_360,local_4e0);
      if (local_14c != '\0') {
        FUN_00416910(local_4d0,*(undefined8 *)(param_1 + 0x1c8),0xff);
        puVar13 = local_4d0;
        cVar2 = FUN_016912c0(param_1,puVar13,param_1 + 0x1e0);
        if (cVar2 != '\0') {
          puVar13 = (undefined1 *)0x0;
          FUN_016913a0(param_1,2);
        }
      }
      *(undefined1 *)(param_1 + 0x152) = 0;
    }
  }
  uVar5 = *(short *)(param_1 + 0x150) - 0x58;
  if (uVar5 < 8) {
    bVar16 = ((int)CONCAT71((int7)((ulonglong)puVar13 >> 8),1) << ((byte)uVar5 & 0x1f) & 0x7eU) != 0
    ;
  }
  else {
    bVar16 = false;
  }
  if (bVar16) {
    uVar9 = 0;
    FUN_01cfde70(param_3,1,0,&local_371,&local_372,&local_14a);
    if (local_14a == '\x03') {
      uVar5 = *(short *)(param_1 + 0x150) - 0x58;
      if (uVar5 < 8) {
        uVar12 = (int)CONCAT71((int7)(uVar9 >> 8),1) << ((byte)uVar5 & 0x1f);
        uVar9 = (ulonglong)uVar12;
        bVar16 = (uVar12 & 0x60) != 0;
      }
      else {
        bVar16 = false;
      }
      if (!bVar16) goto LAB_01691b64;
LAB_01691ba9:
      local_14c = '\x01';
      puVar7 = (undefined8 *)FUN_01cfde70(param_3,1,1,&local_371,&local_372,&local_14a);
      *(undefined4 *)(param_1 + 0x154) = 1;
      *(char *)(param_1 + 0x153) = local_371;
      *(undefined1 *)(param_1 + 0x152) = 1;
      *(undefined8 *)(param_1 + 0x1c0) = *puVar7;
      local_34d = 0x73645203;
      FUN_010c7a60(param_1 + 0x1e0,*(undefined8 *)(param_1 + 0x1c0),0);
      FUN_004169a0(&local_4e8,&local_34d);
      FUN_00416ba0(param_1 + 0x1c8,local_360,local_4e8);
      if (local_14c != '\0') {
        FUN_00416910(local_4d0,*(undefined8 *)(param_1 + 0x1c8),0xff);
        cVar2 = FUN_016912c0(param_1,local_4d0,param_1 + 0x1e0);
        if (cVar2 != '\0') {
          FUN_016913a0(param_1,1);
        }
      }
      puVar7 = (undefined8 *)FUN_01cfde70(param_3,1,2,&local_371,&local_372,&local_14a);
      *(undefined8 *)(param_1 + 0x1c0) = *puVar7;
      local_34d = CONCAT13(local_34d._3_1_,0x6d6702);
      FUN_010c7a60(param_1 + 0x1e0,*(undefined8 *)(param_1 + 0x1c0),0);
      FUN_004169a0(&local_4f0,&local_34d);
      FUN_00416ba0(param_1 + 0x1c8,local_360,local_4f0);
      if (local_14c != '\0') {
        FUN_00416910(local_4d0,*(undefined8 *)(param_1 + 0x1c8),0xff);
        cVar2 = FUN_016912c0(param_1,local_4d0,param_1 + 0x1e0);
        if (cVar2 != '\0') {
          FUN_016913a0(param_1,2);
        }
      }
      *(undefined1 *)(param_1 + 0x152) = 0;
    }
    else {
LAB_01691b64:
      if (local_14a == '\t') {
        uVar5 = *(short *)(param_1 + 0x150) - 0x58;
        if (uVar5 < 8) {
          bVar16 = ((int)CONCAT71((int7)(uVar9 >> 8),1) << ((byte)uVar5 & 0x1f) & 0x1eU) != 0;
        }
        else {
          bVar16 = false;
        }
        if (bVar16) goto LAB_01691ba9;
      }
    }
  }
  cVar2 = FUN_01d3f2d0(*(undefined2 *)(param_1 + 0x150));
  if (cVar2 != '\0') {
    psVar8 = (short *)FUN_01cfde70(param_3,1,0,&local_371,&local_372,&local_14a);
    *(undefined4 *)(param_1 + 0x154) = 1;
    *(char *)(param_1 + 0x153) = local_371;
    *(undefined1 *)(param_1 + 0x152) = 1;
    local_14c = '\x01';
    *(double *)(param_1 + 0x1c0) = (double)(int)*psVar8;
    local_34d = local_34d & 0xffffff00;
    FUN_010c7a60(param_1 + 0x1e0,*(undefined8 *)(param_1 + 0x1c0),0);
    FUN_004169a0(&local_4f8,&local_34d);
    FUN_00416ba0(param_1 + 0x1c8,local_360,local_4f8);
    if (local_14c != '\0') {
      FUN_00416910(local_4d0,*(undefined8 *)(param_1 + 0x1c8),0xff);
      cVar2 = FUN_016912c0(param_1,local_4d0,param_1 + 0x1e0);
      if (cVar2 != '\0') {
        FUN_016913a0(param_1,0xffffffff);
      }
    }
    *(undefined1 *)(param_1 + 0x152) = 0;
  }
  uVar5 = *(short *)(param_1 + 0x150) - 8;
  if (uVar5 < 0xd8) {
    uVar9 = (ulonglong)uVar5 + 0x30;
    bVar16 = ((byte)(&DAT_01692f08)[(longlong)uVar9 >> 3] >> (uVar9 & 7) & 1) != 0;
  }
  else {
    bVar16 = false;
  }
  if ((bVar16) && (*(longlong *)(param_1 + 0x1c8) == 0)) {
    local_14c = '\x01';
  }
  cVar2 = (**(code **)(*param_3 + 0x278))(param_3);
  if ((cVar2 != '\0') || (bVar16)) {
    uVar5 = *(short *)(param_1 + 0x150) - 8;
    if (uVar5 < 0xe0) {
      bVar16 = ((byte)(&DAT_01692f29)[(longlong)(int)(uint)uVar5 >> 3] >> (uVar5 & 7) & 1) != 0;
    }
    else {
      bVar16 = false;
    }
    if (bVar16) {
      FUN_01cfd2d0(param_3);
      cVar2 = FUN_01690fe0();
      bVar14 = 0;
      do {
        local_371 = (**(code **)(*param_3 + 0x2d0))(param_3,bVar14,&local_370);
        cVar3 = '\x01';
        if (local_371 == '\x03') {
          *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)local_370;
          FUN_00415430(&local_500,*(undefined8 *)(local_370 + 8),0);
          cVar3 = FUN_016914a0(param_1,local_500);
        }
        if (local_371 == '\x06') {
          *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)local_370;
          FUN_00415430(&local_508,*(undefined8 *)(local_370 + 8),0);
          cVar3 = FUN_016914a0(param_1,local_508);
        }
        if ((local_371 == '\v') && (local_370[0x40] == 0)) {
          *(undefined8 *)(param_1 + 0x1c0) = **(undefined8 **)(local_370 + 0x18);
        }
        if ((local_371 != '\r') ||
           (*(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)local_370, local_370[8] == 0)) {
          if (bVar14 == 0) {
            uVar5 = *(short *)(param_1 + 0x150) - 8;
            if (uVar5 < 0xd8) {
              uVar9 = (ulonglong)uVar5 + 0x28;
              bVar16 = ((byte)(&DAT_01692f40)[(longlong)uVar9 >> 3] >> (uVar9 & 7) & 1) != 0;
            }
            else {
              bVar16 = false;
            }
            if (bVar16) {
              FUN_00416ba0(param_1 + 0x1c8,local_360,&DAT_01692f6c);
            }
          }
          bVar1 = local_149;
          if ((local_14d == '\0') && (local_14b != '\0')) {
            FUN_00416910(local_4d0,local_358,0xff);
            FUN_016911d0(local_4d0,&local_149,&local_14c,&local_14d);
            FUN_00416dc0(param_1 + 0x1c8,local_358,(uint)bVar1,((uint)local_149 - (uint)bVar1) + 1);
            if (local_14d == '\0') {
              FUN_00416910(local_4d0,local_358,0xff);
              FUN_01691320(param_1,local_4d0,&local_149,&local_14d,&local_14b);
            }
          }
          if (bVar14 != 0) {
            uVar9 = (ulonglong)*(ushort *)(param_1 + 0x150);
            if (uVar9 < 0x6e) {
              if (uVar9 == 0x6d) goto LAB_01692387;
              if (uVar9 < 0x25) {
                if (uVar9 == 0x24) {
LAB_01692364:
                  FUN_00416ba0(param_1 + 0x1c8,&DAT_01692f80,local_360);
                }
                else {
                  if (uVar9 == 10) goto LAB_01692387;
                  if (uVar9 == 0xb) goto LAB_016923cd;
                  if ((uVar9 != 0xc) && (1 < uVar9 - 0xf)) goto LAB_01692410;
                }
              }
              else if (uVar9 == 0x25) {
                FUN_00416ba0(param_1 + 0x1c8,&DAT_01692fa0,local_360);
              }
              else {
                if (uVar9 != 0x26) {
                  if (uVar9 != 0x6c) goto LAB_01692410;
                  goto LAB_01692364;
                }
                FUN_00416ba0(param_1 + 0x1c8,&DAT_01692fb0,local_360);
              }
            }
            else if (uVar9 < 0xd7) {
              if ((uVar9 == 0xd6) || (uVar9 == 0x6e)) {
LAB_016923cd:
                FUN_00416ba0(param_1 + 0x1c8,&DAT_01692f90,local_360);
              }
              else {
                if (uVar9 != 0xca) {
                  if (uVar9 == 0xcc) goto LAB_016923cd;
                  if (uVar9 != 0xd4) goto LAB_01692410;
                }
LAB_01692387:
                FUN_00416ba0(param_1 + 0x1c8,&DAT_01692f90,local_360);
              }
            }
            else if (1 < uVar9 - 0xd9) {
              if (uVar9 == 0xde) goto LAB_01692387;
              if (uVar9 == 0xe0) goto LAB_016923cd;
LAB_01692410:
              FUN_0040e840(local_4d0,bVar14 + 1);
              FUN_004169a0(&local_368,local_4d0);
              if (bVar14 == 0) {
                FUN_00414b50(param_1 + 0x1c8,local_360);
              }
              else {
                FUN_00416ba0(param_1 + 0x1c8,local_360,local_368);
              }
            }
          }
          FUN_010c7a60(param_1 + 0x1e0,*(undefined8 *)(param_1 + 0x1c0),0);
          if (((local_371 == '\x03') || (local_371 == '\x06')) && (cVar3 != '\0')) {
            *(undefined1 *)(param_1 + 0x152) = 1;
          }
          else {
            *(undefined1 *)(param_1 + 0x152) = 0;
          }
          iVar6 = FUN_00416db0(*(undefined8 *)(param_1 + 0x1c8),&DAT_01692fc0);
          if (iVar6 == 0) {
            *(undefined4 *)(param_1 + 0x14c) = 1;
          }
          *(longlong **)(param_1 + 0x1d0) = param_3;
          *(uint *)(param_1 + 0x154) = (uint)bVar14;
          *(char *)(param_1 + 0x153) = local_371;
          if (local_14c != '\0') {
            FUN_00416910(local_4d0,*(undefined8 *)(param_1 + 0x1c8),0xff);
            cVar3 = FUN_016912c0(param_1,local_4d0,param_1 + 0x1e0);
            if (cVar3 != '\0') {
              FUN_016913a0(param_1,0xffffffff);
            }
          }
          if (*(short *)(param_1 + 0x150) == 0xc) {
            local_14c = '\0';
          }
        }
        bVar14 = bVar14 + 1;
        cVar2 = cVar2 + -1;
      } while (cVar2 != '\0');
    }
    if (param_4 == '\0') {
      uVar5 = *(short *)(param_1 + 0x150) - 8;
      if (uVar5 < 0xd8) {
        uVar9 = (ulonglong)uVar5 + 0x28;
        bVar16 = ((byte)(&DAT_01692f40)[(longlong)uVar9 >> 3] >> (uVar9 & 7) & 1) != 0;
      }
      else {
        bVar16 = false;
      }
      if ((bVar16) && (cVar2 = FUN_01cfd030(param_3,1), cVar2 == '\x05')) {
        local_370 = (byte *)FUN_01cfd6a0(param_3);
        FUN_00b909d0(&local_370,0x10);
        if (*local_370 < 8) {
          bVar16 = ((int)CONCAT71((int7)((ulonglong)local_370 >> 8),1) << (*local_370 & 0x1f) &
                   0x90U) != 0;
        }
        else {
          bVar16 = false;
        }
        if (bVar16) {
          *(undefined1 *)(param_1 + 399) = 1;
          dVar19 = **(double **)(local_370 + 1);
          dVar18 = (*(double **)(local_370 + 1))[2];
          if (*PTR_DAT_02002de8 == '\x01') {
            dVar17 = (double)FUN_0040bcd0(dVar18 * 0.017453292519943295);
            *(double *)(param_1 + 0x1c0) = dVar19 * dVar17;
            dVar18 = (double)FUN_0040bdd0(dVar18 * 0.017453292519943295);
            *(double *)(param_1 + 0x180) = dVar19 * dVar18;
          }
          else {
            dVar17 = (double)FUN_0040bdd0(dVar18 * 0.017453292519943295);
            *(double *)(param_1 + 0x1c0) = -dVar19 * dVar17;
            dVar18 = (double)FUN_0040bcd0(dVar18 * 0.017453292519943295);
            *(double *)(param_1 + 0x180) = dVar19 * dVar18;
          }
          dVar19 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x1c0));
          if (dVar19 < 1e-16) {
            *(undefined8 *)(param_1 + 0x1c0) = 0;
          }
          dVar19 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x180));
          if (dVar19 < 1e-16) {
            *(undefined8 *)(param_1 + 0x180) = 0;
          }
          *(undefined1 *)(param_1 + 0x152) = 0;
          if (local_360 != (undefined1 *)0x0) {
            FUN_00416ba0(param_1 + 0x1c8,local_360,&DAT_01692fc0);
          }
          FUN_010c7a60(param_1 + 0x1e0,*(undefined8 *)(param_1 + 0x1c0),
                       *(undefined8 *)(param_1 + 0x180));
          if (local_14c != '\0') {
            FUN_00416910(local_4d0,*(undefined8 *)(param_1 + 0x1c8),0xff);
            cVar2 = FUN_016912c0(param_1,local_4d0,param_1 + 0x1e0);
            if (cVar2 != '\0') {
              FUN_016913a0(param_1,0xffffffff);
            }
          }
          *(undefined1 *)(param_1 + 399) = 0;
        }
      }
      uVar5 = *(short *)(param_1 + 0x150) - 8;
      if (uVar5 < 0xd8) {
        uVar9 = (ulonglong)uVar5 + 0x28;
        bVar16 = ((byte)(&DAT_01692f40)[(longlong)uVar9 >> 3] >> (uVar9 & 7) & 1) != 0;
      }
      else {
        bVar16 = false;
      }
      if ((bVar16) && (cVar2 = FUN_01cfd030(param_3,1), cVar2 == '\x05')) {
        *(longlong **)(param_1 + 0x1d0) = param_3;
        *(undefined4 *)(param_1 + 0x154) = 1;
        *(char *)(param_1 + 0x153) = local_371;
        local_370 = (byte *)FUN_01cfd6a0(param_3);
        FUN_00b909d0(&local_370,0x10);
        puVar13 = (undefined1 *)(ulonglong)*local_370;
        bVar14 = 1;
        for (cVar2 = (PTR_DAT_02001408 + -1)[(longlong)puVar13]; cVar2 != '\0'; cVar2 = cVar2 + -1)
        {
          bVar1 = *local_370;
          if (bVar1 < 8) {
            uVar12 = (int)CONCAT71((int7)((ulonglong)puVar13 >> 8),1) << (bVar1 & 0x1f);
            puVar13 = (undefined1 *)(ulonglong)uVar12;
            bVar16 = (uVar12 & 0xfe) != 0;
          }
          else {
            bVar16 = false;
          }
          if (bVar16) {
            if (bVar1 < 5) {
              if (bVar1 == 4) {
LAB_01692a48:
                uVar10 = FUN_00b89270();
                FUN_00b8e520(uVar10,&local_528,bVar14 + 0x22f);
                FUN_00416910(local_24d,local_528,0xff);
              }
              else if (bVar1 == 1) {
                uVar10 = FUN_00b89270();
                FUN_00b8e520(uVar10,&local_510,bVar14 + 0x22a);
                FUN_00416910(local_24d,local_510,0xff);
              }
              else if (bVar1 == 2) {
                uVar10 = FUN_00b89270();
                FUN_00b8e520(uVar10,&local_518,bVar14 + 0x23b);
                FUN_00416910(local_24d,local_518,0xff);
              }
              else if (bVar1 == 3) {
                uVar10 = FUN_00b89270();
                FUN_00b8e520(uVar10,&local_520,bVar14 + 0x232);
                FUN_00416910(local_24d,local_520,0xff);
              }
            }
            else if (bVar1 == 5) {
              uVar10 = FUN_00b89270();
              FUN_00b8e520(uVar10,&local_530,bVar14 + 0x23f);
              FUN_00416910(local_24d,local_530,0xff);
            }
            else if (bVar1 == 6) {
              uVar10 = FUN_00b89270();
              FUN_00b8e520(uVar10,&local_538,bVar14 + 0x23d);
              FUN_00416910(local_24d,local_538,0xff);
            }
            else if (bVar1 == 7) goto LAB_01692a48;
            FUN_004169a0(&local_540,local_24d);
            cVar3 = FUN_004170c0(&DAT_01692fd4,local_540,1);
            FUN_004169a0(&local_548,local_24d);
            uVar12 = FUN_004170c0(&DAT_01692fe4,local_548,1);
            FUN_004151b0(local_4d0,local_24d,(uint)(byte)(cVar3 + 1),
                         (uVar12 & 0xff) - (uint)(byte)(cVar3 + 1));
            FUN_004169a0(&local_558,local_4d0);
            FUN_00416ba0(&local_550,local_360,local_558);
            FUN_00416910(local_4d0,local_550,0xff);
            FUN_00b91ab0(local_3d0,local_4d0,0x50);
            puVar13 = local_3d0;
            FUN_004169a0(param_1 + 0x1c8,puVar13);
            *(undefined8 *)(param_1 + 0x1c0) =
                 *(undefined8 *)(*(longlong *)(local_370 + 1) + -8 + (ulonglong)bVar14 * 8);
            if (*local_370 < 8) {
              bVar16 = ((int)CONCAT71((int7)((ulonglong)local_370 >> 8),1) << (*local_370 & 0x1f) &
                       0x90U) != 0;
            }
            else {
              bVar16 = false;
            }
            if (((bVar16) && (bVar14 == 3)) && (*PTR_DAT_02002de8 != '\x01')) {
              *(double *)(param_1 + 0x1c0) = *(double *)(param_1 + 0x1c0) + 90.0;
            }
            *(undefined1 *)(param_1 + 0x152) = 1;
            FUN_010c7a60(param_1 + 0x1e0,*(undefined8 *)(param_1 + 0x1c0),0);
            if (local_14c != '\0') {
              FUN_00416910(local_4d0,*(undefined8 *)(param_1 + 0x1c8),0xff);
              puVar13 = local_4d0;
              cVar3 = FUN_016912c0(param_1,puVar13,param_1 + 0x1e0);
              if (cVar3 != '\0') {
                puVar13 = (undefined1 *)(ulonglong)bVar14;
                FUN_016913a0(param_1,puVar13);
              }
            }
          }
          if (*local_370 < 8) {
            bVar16 = ((int)CONCAT71((int7)((ulonglong)local_370 >> 8),1) << (*local_370 & 0x1f) &
                     0xf0U) != 0;
          }
          else {
            bVar16 = false;
          }
          if ((bVar16) && (bVar14 == 2)) {
            *(undefined1 *)(param_1 + 0x152) = 0;
            FUN_00416ba0(&local_560,local_360,&DAT_01692ff8);
            FUN_00416910(local_4d0,local_560,0xff);
            FUN_00b91ab0(local_3d0,local_4d0,0x50);
            puVar13 = local_3d0;
            FUN_004169a0(param_1 + 0x1c8,puVar13);
            *(double *)(param_1 + 0x1c0) = *(double *)(param_1 + 0x1c0) * 6.283185307179586;
            FUN_010c7a60(param_1 + 0x1e0,*(undefined8 *)(param_1 + 0x1c0),0);
            if (local_14c != '\0') {
              FUN_00416910(local_4d0,*(undefined8 *)(param_1 + 0x1c8),0xff);
              puVar13 = local_4d0;
              cVar3 = FUN_016912c0(param_1,puVar13,param_1 + 0x1e0);
              if (cVar3 != '\0') {
                puVar13 = (undefined1 *)0xffffffff;
                FUN_016913a0(param_1,0xffffffff);
              }
            }
          }
          bVar14 = bVar14 + 1;
        }
      }
    }
  }
LAB_01692df8:
  FUN_00414560(&local_560,0xb);
  FUN_00414590(&local_508,2);
  FUN_00414560(&local_4f8,5);
  FUN_00414560(&local_368,3);
  return;
}

