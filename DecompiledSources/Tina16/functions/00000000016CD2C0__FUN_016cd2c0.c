/* Ghidra address: 016cd2c0 */
/* Ghidra symbol: FUN_016cd2c0 */


void FUN_016cd2c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  double dVar9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined *puVar10;
  ulonglong in_stack_fffffffffffffba0;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  longlong local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  longlong local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  longlong local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined1 *local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined1 local_368 [256];
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined4 local_248 [64];
  byte local_148 [256];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_440 = 0;
  local_448 = 0;
  local_438 = 0;
  local_428 = 0;
  local_430 = 0;
  local_418 = 0;
  local_420 = 0;
  local_410 = 0;
  local_400 = 0;
  local_408 = 0;
  local_3f0 = 0;
  local_3f8 = 0;
  local_3e8 = 0;
  local_3d8 = 0;
  local_3e0 = 0;
  local_3c8 = 0;
  local_3d0 = 0;
  local_3b0 = 0;
  local_3b8 = 0;
  local_3c0 = 0;
  local_3a0 = 0;
  local_3a8 = 0;
  local_398 = 0;
  local_390 = 0;
  local_380 = (undefined1 *)0x0;
  local_388 = 0;
  local_378 = 0;
  local_370 = 0;
  local_268 = 0;
  local_260 = 0;
  local_250 = 0;
  local_258 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  lVar6 = FUN_016b97f0(&DAT_016b45f0,1,0);
  uVar7 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  *(undefined8 *)(lVar6 + 0x18) = uVar7;
  *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + 0x244) = 0;
  *(undefined8 *)(lVar6 + 0x20) = 0x2000130100000200;
  *(undefined8 *)(lVar6 + 0x28) = 0;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(undefined8 *)(lVar6 + 0x38) = 0;
  FUN_016bb740(lVar6,param_1);
  bVar8 = false;
  while ((!bVar8 && (cVar2 = FUN_016bb790(lVar6), cVar2 == '\0'))) {
    FUN_016bb7d0(lVar6,&local_30,1);
    FUN_016b8f10(&local_38,local_30);
    FUN_00416880(&local_258,local_38);
    FUN_0043e130(&local_250,local_258);
    iVar3 = FUN_00416db0(local_250,local_res10);
    bVar8 = iVar3 == 0;
  }
  if (bVar8) {
    FUN_00414bf0(lVar6 + 0xd90,local_30);
    *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + 0x240) = 0;
    iVar3 = FUN_00416db0(local_res10,L".OPTIONS");
    if (iVar3 != 0) {
      do {
        FUN_016bb7d0(lVar6,&local_260,1);
        FUN_00414bf0(lVar6 + 0xd88,local_260);
        if ((*(longlong *)(lVar6 + 0xd88) != 0) && (**(char **)(lVar6 + 0xd88) == '+')) {
          FUN_00415560(local_148,*(undefined8 *)(lVar6 + 0xd88),0xff);
          local_148[1] = 0x20;
          FUN_004154b0(&local_268,local_148,0);
          FUN_004155b0(lVar6 + 0xd90,local_268);
        }
      } while ((*(longlong *)(lVar6 + 0xd88) != 0) && (**(char **)(lVar6 + 0xd88) == '+'));
      iVar3 = *(int *)(*(longlong *)(lVar6 + 0x10) + 0x240) + -1;
      if (0 < iVar3) {
        do {
          (**(code **)(*param_1 + 0x98))
                    (param_1,*(int *)(*(longlong *)(lVar6 + 0x10) + 0x244) -
                             *(int *)(*(longlong *)(lVar6 + 0x10) + 0x240));
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    *(undefined4 *)(lVar6 + 0x990) = 1;
    FUN_016b9d20(lVar6);
    FUN_016b9d80(lVar6);
    puVar10 = &DAT_016ceb00;
    in_stack_fffffffffffffba0 = in_stack_fffffffffffffba0 & 0xffffffffffffff00;
    FUN_016ba960(lVar6,local_368,0,&DAT_016ceafc,&DAT_016ceb00,in_stack_fffffffffffffba0);
    iVar3 = FUN_00416db0(local_res10,&DAT_016ceb2c);
    if (iVar3 == 0) {
      iVar3 = *(int *)(lVar6 + 0x990);
      FUN_016ba960(lVar6,local_368,1,L"LIN|OCT|DEC",&DAT_016ceb58,
                   in_stack_fffffffffffffba0 & 0xffffffffffffff00);
      FUN_004154b0(&local_48,local_368,0);
      iVar4 = FUN_00415a60(local_48,&DAT_016ceb84);
      if (((iVar4 == 0) && (*(char *)(param_4 + 6) != '\0')) ||
         ((iVar4 = FUN_00415a60(local_48,&DAT_016ceb94), iVar4 == 0 &&
          (*(char *)(param_4 + 6) != '\x01')))) {
        uVar5 = 0;
        if (local_48 != 0) {
          uVar5 = *(undefined4 *)(local_48 + -4);
        }
        iVar3 = iVar3 + -1;
        FUN_00415b50(lVar6 + 0xd90,iVar3,uVar5);
        if (*(char *)(param_4 + 6) == '\0') {
          FUN_00414c70(&local_40,&DAT_016ceb84);
        }
        else {
          FUN_00414c70(&local_40,&DAT_016ceb94);
        }
        FUN_00415bd0(local_40,lVar6 + 0xd90,iVar3);
      }
      iVar3 = *(int *)(lVar6 + 0x990);
      FUN_016baf80(lVar6,local_368);
      FUN_004154b0(&local_48,local_368,0);
      uVar5 = 0;
      if (local_48 != 0) {
        uVar5 = *(undefined4 *)(local_48 + -4);
      }
      iVar3 = iVar3 + -1;
      FUN_00415b50(lVar6 + 0xd90,iVar3,uVar5);
      dVar9 = (double)FUN_00c42800(*(double *)param_4[2] / *(double *)*param_4);
      uVar5 = FUN_0040c770((double)*(int *)(param_4 + 4) / dVar9);
      FUN_0043f750(&local_370,uVar5);
      FUN_00415dd0(&local_40,local_370,0);
      FUN_00415bd0(local_40,lVar6 + 0xd90,iVar3);
      iVar3 = 0;
      if (local_40 != 0) {
        iVar3 = *(int *)(local_40 + -4);
      }
      iVar4 = 0;
      if (local_48 != 0) {
        iVar4 = *(int *)(local_48 + -4);
      }
      iVar4 = (*(int *)(lVar6 + 0x990) + iVar3) - iVar4;
      *(int *)(lVar6 + 0x990) = iVar4;
      FUN_016bad90(lVar6,local_368);
      FUN_004154b0(&local_48,local_368,0);
      uVar5 = 0;
      if (local_48 != 0) {
        uVar5 = *(undefined4 *)(local_48 + -4);
      }
      iVar4 = iVar4 + -1;
      FUN_00415b50(lVar6 + 0xd90,iVar4,uVar5);
      FUN_016b9450(&local_40,*(undefined8 *)*param_4);
      FUN_00415bd0(local_40,lVar6 + 0xd90,iVar4);
      iVar3 = 0;
      if (local_40 != 0) {
        iVar3 = *(int *)(local_40 + -4);
      }
      iVar4 = 0;
      if (local_48 != 0) {
        iVar4 = *(int *)(local_48 + -4);
      }
      iVar4 = (*(int *)(lVar6 + 0x990) + iVar3) - iVar4;
      *(int *)(lVar6 + 0x990) = iVar4;
      FUN_016bad90(lVar6,local_368);
      FUN_004154b0(&local_48,local_368,0);
      uVar5 = 0;
      if (local_48 != 0) {
        uVar5 = *(undefined4 *)(local_48 + -4);
      }
      iVar4 = iVar4 + -1;
      FUN_00415b50(lVar6 + 0xd90,iVar4,uVar5);
      FUN_016b9450(&local_40,*(undefined8 *)param_4[2]);
      FUN_00415bd0(local_40,lVar6 + 0xd90,iVar4);
      iVar3 = 0;
      if (local_40 != 0) {
        iVar3 = *(int *)(local_40 + -4);
      }
      iVar4 = 0;
      if (local_48 != 0) {
        iVar4 = *(int *)(local_48 + -4);
      }
      *(int *)(lVar6 + 0x990) = (*(int *)(lVar6 + 0x990) + iVar3) - iVar4;
    }
    else {
      iVar3 = FUN_00416db0(local_res10,&DAT_016ceba4);
      if (iVar3 == 0) {
        in_stack_fffffffffffffba0 = in_stack_fffffffffffffba0 & 0xffffffffffffff00;
        FUN_016ba960(lVar6,local_248,0,&DAT_016cebb8,&DAT_016cebbc,in_stack_fffffffffffffba0);
        iVar3 = FUN_00414f50(local_248,&DAT_016cebdc,(ulonglong)(byte)local_248[0] + 1);
        if (iVar3 != 0) {
          iVar3 = FUN_00414f50(local_248,&DAT_016cebe0,(ulonglong)(byte)local_248[0] + 1);
          if (iVar3 != 0) {
            FUN_016b9df0(lVar6);
            local_248[0] = 0x4e494c03;
          }
        }
        FUN_016ba960(lVar6,local_368,0,&DAT_016cebb8,&DAT_016cebbc,
                     in_stack_fffffffffffffba0 & 0xffffffffffffff00);
        FUN_016ba220(lVar6,local_148,&DAT_016ceb58,1);
        iVar3 = FUN_00414f50(local_148,&DAT_016cebe4,(ulonglong)local_148[0] + 1);
        if (iVar3 != 0) {
          iVar3 = *(int *)(lVar6 + 0x990);
          FUN_016bad90(lVar6,local_368);
          FUN_004154b0(&local_48,local_368,0);
          uVar5 = 0;
          if (local_48 != 0) {
            uVar5 = *(undefined4 *)(local_48 + -4);
          }
          FUN_00415b50(lVar6 + 0xd90,iVar3 + -1,uVar5);
          FUN_016b9450(&local_40,*(undefined8 *)*param_4);
          FUN_00415bd0(local_40,lVar6 + 0xd90,iVar3 + -1);
          iVar3 = 0;
          if (local_40 != 0) {
            iVar3 = *(int *)(local_40 + -4);
          }
          iVar4 = 0;
          if (local_48 != 0) {
            iVar4 = *(int *)(local_48 + -4);
          }
          *(int *)(lVar6 + 0x990) = (*(int *)(lVar6 + 0x990) + iVar3) - iVar4;
          iVar3 = *(int *)(lVar6 + 0x990);
          FUN_016bad90(lVar6,local_368);
          FUN_004154b0(&local_48,local_368,0);
          uVar5 = 0;
          if (local_48 != 0) {
            uVar5 = *(undefined4 *)(local_48 + -4);
          }
          FUN_00415b50(lVar6 + 0xd90,iVar3 + -1,uVar5);
          FUN_016b9450(&local_40,*(undefined8 *)param_4[2]);
          FUN_00415bd0(local_40,lVar6 + 0xd90,iVar3 + -1);
          iVar3 = 0;
          if (local_40 != 0) {
            iVar3 = *(int *)(local_40 + -4);
          }
          iVar4 = 0;
          if (local_48 != 0) {
            iVar4 = *(int *)(local_48 + -4);
          }
          *(int *)(lVar6 + 0x990) = (*(int *)(lVar6 + 0x990) + iVar3) - iVar4;
          iVar3 = FUN_00414f50(local_248,&DAT_016cebdc,(ulonglong)(byte)local_248[0] + 1);
          if (iVar3 == 0) {
            iVar3 = *(int *)(lVar6 + 0x990);
            FUN_016bad90(lVar6,local_368);
            FUN_004154b0(&local_48,local_368,0);
            uVar5 = 0;
            if (local_48 != 0) {
              uVar5 = *(undefined4 *)(local_48 + -4);
            }
            FUN_00415b50(lVar6 + 0xd90,iVar3 + -1,uVar5);
            FUN_016b9450(&local_40,
                         (*(double *)param_4[2] - *(double *)*param_4) /
                         (double)*(int *)(param_4 + 4));
            FUN_00415bd0(local_40,lVar6 + 0xd90,iVar3 + -1);
            iVar3 = 0;
            if (local_40 != 0) {
              iVar3 = *(int *)(local_40 + -4);
            }
            iVar4 = 0;
            if (local_48 != 0) {
              iVar4 = *(int *)(local_48 + -4);
            }
            *(int *)(lVar6 + 0x990) = (*(int *)(lVar6 + 0x990) + iVar3) - iVar4;
          }
          else {
            iVar3 = *(int *)(lVar6 + 0x990);
            FUN_016bad90(lVar6,local_368);
            FUN_004154b0(&local_48,local_368,0);
            uVar5 = 0;
            if (local_48 != 0) {
              uVar5 = *(undefined4 *)(local_48 + -4);
            }
            FUN_00415b50(lVar6 + 0xd90,iVar3 + -1,uVar5);
            dVar9 = (double)FUN_00c42800(*(double *)param_4[2] / *(double *)*param_4);
            uVar5 = FUN_0040c770((double)*(int *)(param_4 + 4) / dVar9);
            FUN_0043f750(&local_378,uVar5);
            FUN_00415dd0(&local_40,local_378,0);
            FUN_00415bd0(local_40,lVar6 + 0xd90,iVar3 + -1);
            iVar3 = 0;
            if (local_40 != 0) {
              iVar3 = *(int *)(local_40 + -4);
            }
            iVar4 = 0;
            if (local_48 != 0) {
              iVar4 = *(int *)(local_48 + -4);
            }
            *(int *)(lVar6 + 0x990) = (*(int *)(lVar6 + 0x990) + iVar3) - iVar4;
          }
        }
      }
      else {
        iVar3 = FUN_00416db0(local_res10,L".OPTIONS");
        if (iVar3 == 0) {
          FUN_00416880(&local_388,local_30);
          FUN_0043e130(&local_380,local_388);
          iVar3 = FUN_004170c0(local_res18,local_380,1);
          if (iVar3 < 1) {
            iVar3 = FUN_00416db0(local_res18,L"MSCYCLES");
            if (iVar3 == 0) {
              FUN_0043f750(&local_3a8,*(undefined4 *)param_4);
              FUN_00416cd0(&local_3a0,4,&DAT_016ced3c,local_res18,&DAT_016ced4c,local_3a8);
              FUN_00415dd0(&local_40,local_3a0,0);
            }
            else {
              FUN_016b9450(&local_3b8,*(undefined8 *)*param_4);
              FUN_00416880(&local_3c0,local_3b8);
              FUN_00416cd0(&local_3b0,4,&DAT_016ced3c,local_res18,&DAT_016ced4c,local_3c0);
              FUN_00415dd0(&local_40,local_3b0,0);
            }
            uVar5 = 0;
            if (*(longlong *)(lVar6 + 0xd90) != 0) {
              uVar5 = *(undefined4 *)(*(longlong *)(lVar6 + 0xd90) + -4);
            }
            FUN_00415bd0(local_40,lVar6 + 0xd90,uVar5);
          }
          else {
            while (cVar2 = FUN_016b9d70(lVar6), cVar2 == '\0') {
              puVar10 = (undefined *)((ulonglong)puVar10 & 0xffffffffffffff00);
              FUN_016babb0(lVar6,1,
                           L"ABSTOL|CHGTOL|GMIN|ITL1|ITL2|ITL4|PIVREL|PIVTOL|RELTOL|TNOM|VNTOL|TEMP|TRTOL|MATRIXSOLVER|MSAMPLITUDE|MSSTEADYTIME|MSCYCLES"
                           ,&DAT_016cecf0,puVar10,local_148);
              FUN_004169a0(&local_390,local_148);
              iVar3 = FUN_00416db0(local_390,local_res18);
              if (iVar3 == 0) {
                iVar3 = *(int *)(lVar6 + 0x990);
                FUN_016bad90(lVar6,local_368);
                FUN_004154b0(&local_48,local_368,0);
                uVar5 = 0;
                if (local_48 != 0) {
                  uVar5 = *(undefined4 *)(local_48 + -4);
                }
                FUN_00415b50(lVar6 + 0xd90,iVar3 + -1,uVar5);
                iVar4 = FUN_00416db0(local_res18,L"MSCYCLES");
                if (iVar4 == 0) {
                  FUN_0043f750(&local_398,*(undefined4 *)param_4);
                  FUN_00415dd0(&local_40,local_398,0);
                }
                else {
                  FUN_016b9450(&local_40,*(undefined8 *)*param_4);
                }
                FUN_00415bd0(local_40,lVar6 + 0xd90,iVar3 + -1);
                break;
              }
              FUN_016bad90(lVar6,local_368);
            }
          }
        }
        else {
          iVar3 = FUN_00416db0(local_res10,L".TRAN");
          if (iVar3 == 0) {
            FUN_016bad90(lVar6,local_368);
            iVar3 = *(int *)(lVar6 + 0x990);
            FUN_016bad90(lVar6,local_368);
            FUN_004154b0(&local_48,local_368,0);
            uVar5 = 0;
            if (local_48 != 0) {
              uVar5 = *(undefined4 *)(local_48 + -4);
            }
            FUN_00415b50(lVar6 + 0xd90,iVar3 + -1,uVar5);
            FUN_016b9450(&local_40,*(undefined8 *)*param_4);
            FUN_00415bd0(local_40,lVar6 + 0xd90,iVar3 + -1);
            iVar3 = 0;
            if (local_40 != 0) {
              iVar3 = *(int *)(local_40 + -4);
            }
            iVar4 = 0;
            if (local_48 != 0) {
              iVar4 = *(int *)(local_48 + -4);
            }
            *(int *)(lVar6 + 0x990) = (*(int *)(lVar6 + 0x990) + iVar3) - iVar4;
            iVar3 = *(int *)(lVar6 + 0x990);
            cVar2 = FUN_016bae20(lVar6,&local_48);
            if (cVar2 == '\0') {
              if ((0.0 < *(double *)param_4[2]) ||
                 (*(double *)param_4[4] != *(double *)(PTR_DAT_02001120 + 0x178))) {
                FUN_00416880(&local_3f8,*(undefined8 *)(lVar6 + 0xd90));
                FUN_0043ea00(&local_3f0,local_3f8);
                iVar4 = 0;
                if (local_3f0 != 0) {
                  iVar4 = *(int *)(local_3f0 + -4);
                }
                if (iVar3 < iVar4) {
                  FUN_016b9450(&local_410,*(undefined8 *)param_4[2]);
                  FUN_004156b0(&local_40,local_410,&DAT_016ced74);
                  FUN_00415bd0(local_40,lVar6 + 0xd90,iVar3 + -1);
                  iVar3 = 0;
                  if (local_40 != 0) {
                    iVar3 = *(int *)(local_40 + -4);
                  }
                  *(int *)(lVar6 + 0x990) = *(int *)(lVar6 + 0x990) + iVar3;
                }
                else {
                  FUN_016b9450(&local_408,*(undefined8 *)param_4[2]);
                  FUN_004156b0(&local_400,&DAT_016ced74,local_408);
                  FUN_00415bd0(local_400,lVar6 + 0xd90,iVar3);
                }
              }
              iVar3 = *(int *)(lVar6 + 0x990);
              if (*(double *)param_4[4] != *(double *)(PTR_DAT_02001120 + 0x178)) {
                FUN_00416880(&local_420,*(undefined8 *)(lVar6 + 0xd90));
                FUN_0043ea00(&local_418,local_420);
                iVar4 = 0;
                if (local_418 != 0) {
                  iVar4 = *(int *)(local_418 + -4);
                }
                if (iVar3 < iVar4) {
                  FUN_016b9450(&local_438,*(undefined8 *)param_4[4]);
                  FUN_004156b0(&local_40,local_438,&DAT_016ced74);
                  FUN_00415bd0(local_40,lVar6 + 0xd90,iVar3 + -1);
                  iVar3 = 0;
                  if (local_40 != 0) {
                    iVar3 = *(int *)(local_40 + -4);
                  }
                  *(int *)(lVar6 + 0x990) = *(int *)(lVar6 + 0x990) + iVar3;
                }
                else {
                  FUN_016b9450(&local_430,*(undefined8 *)param_4[4]);
                  FUN_004156b0(&local_428,&DAT_016ced74,local_430);
                  FUN_00415bd0(local_428,lVar6 + 0xd90,iVar3);
                }
              }
            }
            else {
              uVar5 = 0;
              if (local_48 != 0) {
                uVar5 = *(undefined4 *)(local_48 + -4);
              }
              FUN_00415b50(lVar6 + 0xd90,iVar3 + -1,uVar5);
              if ((0.0 < *(double *)param_4[2]) ||
                 (*(double *)param_4[4] != *(double *)(PTR_DAT_02001120 + 0x178))) {
                FUN_016b9450(&local_40,*(undefined8 *)param_4[2]);
                FUN_00415bd0(local_40,lVar6 + 0xd90,iVar3 + -1);
                iVar3 = 0;
                if (local_40 != 0) {
                  iVar3 = *(int *)(local_40 + -4);
                }
                iVar4 = 0;
                if (local_48 != 0) {
                  iVar4 = *(int *)(local_48 + -4);
                }
                *(int *)(lVar6 + 0x990) = (*(int *)(lVar6 + 0x990) + iVar3) - iVar4;
              }
              else {
                iVar4 = 0;
                if (local_48 != 0) {
                  iVar4 = *(int *)(local_48 + -4);
                }
                *(int *)(lVar6 + 0x990) = *(int *)(lVar6 + 0x990) - iVar4;
                FUN_00415b50(lVar6 + 0xd90,iVar3 + -2,1);
                *(int *)(lVar6 + 0x990) = *(int *)(lVar6 + 0x990) + -1;
              }
              iVar3 = *(int *)(lVar6 + 0x990);
              cVar2 = FUN_016bae20(lVar6,&local_48);
              if (cVar2 == '\0') {
                if (*(double *)param_4[4] != *(double *)(PTR_DAT_02001120 + 0x178)) {
                  FUN_00416880(&local_3d0,*(undefined8 *)(lVar6 + 0xd90));
                  FUN_0043ea00(&local_3c8,local_3d0);
                  iVar4 = 0;
                  if (local_3c8 != 0) {
                    iVar4 = *(int *)(local_3c8 + -4);
                  }
                  if (iVar3 < iVar4) {
                    FUN_016b9450(&local_3e8,*(undefined8 *)param_4[4]);
                    FUN_004156b0(&local_40,local_3e8,&DAT_016ced74);
                    FUN_00415bd0(local_40,lVar6 + 0xd90,iVar3 + -1);
                    iVar3 = 0;
                    if (local_40 != 0) {
                      iVar3 = *(int *)(local_40 + -4);
                    }
                    *(int *)(lVar6 + 0x990) = *(int *)(lVar6 + 0x990) + iVar3;
                  }
                  else {
                    FUN_016b9450(&local_3e0,*(undefined8 *)param_4[4]);
                    FUN_004156b0(&local_3d8,&DAT_016ced74,local_3e0);
                    FUN_00415bd0(local_3d8,lVar6 + 0xd90,iVar3);
                  }
                }
              }
              else {
                uVar5 = 0;
                if (local_48 != 0) {
                  uVar5 = *(undefined4 *)(local_48 + -4);
                }
                FUN_00415b50(lVar6 + 0xd90,iVar3 + -1,uVar5);
                if (*(double *)param_4[4] == *(double *)(PTR_DAT_02001120 + 0x178)) {
                  iVar4 = 0;
                  if (local_48 != 0) {
                    iVar4 = *(int *)(local_48 + -4);
                  }
                  *(int *)(lVar6 + 0x990) = *(int *)(lVar6 + 0x990) - iVar4;
                  FUN_00415b50(lVar6 + 0xd90,iVar3 + -2,1);
                  *(int *)(lVar6 + 0x990) = *(int *)(lVar6 + 0x990) + -1;
                }
                else {
                  FUN_016b9450(&local_40,*(undefined8 *)param_4[4]);
                  FUN_00415bd0(local_40,lVar6 + 0xd90,iVar3 + -1);
                  iVar3 = 0;
                  if (local_40 != 0) {
                    iVar3 = *(int *)(local_40 + -4);
                  }
                  iVar4 = 0;
                  if (local_48 != 0) {
                    iVar4 = *(int *)(local_48 + -4);
                  }
                  *(int *)(lVar6 + 0x990) = (*(int *)(lVar6 + 0x990) + iVar3) - iVar4;
                }
              }
            }
            iVar3 = *(int *)(lVar6 + 0x990);
            cVar2 = FUN_016babb0(lVar6,1,L"UIC|SKIPBP",&DAT_016ceb58,
                                 (ulonglong)puVar10 & 0xffffffffffffff00,local_148);
            if (cVar2 == '\0') {
              if (*(byte *)(param_4 + 6) < 8) {
                bVar8 = ((int)CONCAT71((int7)((ulonglong)param_4 >> 8),1) <<
                         (*(byte *)(param_4 + 6) & 0x1f) & 5U) != 0;
              }
              else {
                bVar8 = false;
              }
              if (bVar8) {
                FUN_00415bd0(&LAB_016ceda8,lVar6 + 0xd90,iVar3);
              }
            }
            else if (*(char *)(param_4 + 6) == '\x01') {
              FUN_00415b50(lVar6 + 0xd90,iVar3 + -1,local_148[0]);
            }
          }
        }
      }
    }
    lVar1 = *(longlong *)(lVar6 + 0x10);
    FUN_00416880(&local_448,*(undefined8 *)(lVar6 + 0xd90));
    FUN_0043ea00(&local_440,local_448);
    (**(code **)(*param_1 + 0x40))
              (param_1,(*(int *)(lVar1 + 0x244) - *(int *)(lVar1 + 0x240)) + -1,local_440);
  }
  FUN_00410f20(lVar6);
  FUN_00414560(&local_448,2);
  FUN_00414590(&local_438,3);
  FUN_00414560(&local_420,2);
  FUN_00414590(&local_410,3);
  FUN_00414560(&local_3f8,2);
  FUN_00414590(&local_3e8,3);
  FUN_00414560(&local_3d0,3);
  FUN_004144d0(&local_3b8);
  FUN_00414560(&local_3b0,9);
  FUN_00414590(&local_268,2);
  FUN_00414560(&local_258,2);
  FUN_00414590(&local_48,4);
  FUN_00414560(&local_res10,2);
  return;
}

