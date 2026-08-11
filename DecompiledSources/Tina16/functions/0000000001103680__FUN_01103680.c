/* Ghidra address: 01103680 */
/* Ghidra symbol: FUN_01103680 */


void FUN_01103680(longlong param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  int extraout_var;
  int iVar12;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48 [3];
  
  if (*(char *)(param_1 + 0x60) != '\0') {
    FUN_00498350(local_48,0,0,0,0);
    iVar4 = thunk_FUN_03b7fa88(param_1 + 0x14,local_48);
    if (iVar4 == 0) {
      local_50 = FUN_00498310(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      cVar3 = FUN_01a8e4c0(param_1 + 0x14,&local_50);
      if (cVar3 == '\0') {
        return;
      }
    }
    plVar10 = (longlong *)FUN_005fd7d0(&PTR_FUN_005f35d8,1);
    plVar11 = (longlong *)FUN_005fd250(&PTR_FUN_005f3290,1);
    (**(code **)(*plVar10 + 0x10))(plVar10,param_2[0x10]);
    (**(code **)(*plVar11 + 0x10))(plVar11,param_2[0xf]);
    piVar1 = (int *)(param_1 + 0x14);
    iVar4 = FUN_004230d0(piVar1);
    uVar5 = FUN_0040c770(((double)(*(int *)(param_1 + 0x1c) - *piVar1) / 400.0) * (double)iVar4);
    FUN_004230d0(piVar1);
    uVar6 = FUN_0040c770(((double)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) / 250.0) *
                         (double)extraout_var);
    uVar5 = FUN_00b905e0(uVar5,uVar6);
    FUN_00b905e0(uVar5,2);
    iVar4 = FUN_00b905e0(*(undefined4 *)(param_1 + 0x5c),2);
    FUN_005fd4e0(param_2[0xf],0xffffff);
    FUN_005fdcb0(param_2[0x10],0);
    FUN_005fdab0(param_2[0x10],0xffffff);
    iVar12 = iVar4 / 2;
    (**(code **)(*param_2 + 0xf8))
              (param_2,(*(int *)(param_1 + 0x54) - iVar12) + -1,
               (*(int *)(param_1 + 0x58) - iVar12) + -1,*(int *)(param_1 + 0x54) + iVar12 + 1,
               *(int *)(param_1 + 0x58) + iVar12 + 1);
    uVar5 = FUN_005fd4d0(*(undefined8 *)(param_1 + 0x48));
    FUN_005fdab0(param_2[0x10],uVar5);
    if (*(char *)(param_1 + 0x62) == '\0') {
      FUN_005fdcb0(param_2[0x10],1);
    }
    else {
      FUN_005fdcb0(param_2[0x10],0);
    }
    (**(code **)(*(longlong *)param_2[0xf] + 0x10))
              ((longlong *)param_2[0xf],*(undefined8 *)(param_1 + 0x48));
    if (*(char *)(param_1 + 0x10) != '\0') {
      FUN_005fd4e0(param_2[0xf],0xff);
    }
    bVar2 = *(byte *)(param_1 + 0x60);
    if (bVar2 < 6) {
      if (bVar2 == 5) {
        (**(code **)(*param_2 + 200))
                  (param_2,*(int *)(param_1 + 0x54) - iVar12,*(int *)(param_1 + 0x58) - iVar12);
        (**(code **)(*param_2 + 0xc0))
                  (param_2,*(int *)(param_1 + 0x54) + iVar12,*(int *)(param_1 + 0x58) + iVar12);
        (**(code **)(*param_2 + 200))
                  (param_2,*(int *)(param_1 + 0x54) + iVar12,*(int *)(param_1 + 0x58) - iVar12);
        (**(code **)(*param_2 + 0xc0))
                  (param_2,*(int *)(param_1 + 0x54) - iVar12,*(int *)(param_1 + 0x58) + iVar12);
      }
      else if (bVar2 == 1) {
        (**(code **)(*param_2 + 0xa0))
                  (param_2,*(int *)(param_1 + 0x54) - iVar12,*(int *)(param_1 + 0x58) - iVar12,
                   *(int *)(param_1 + 0x54) + iVar12,*(int *)(param_1 + 0x58) + iVar12);
      }
      else if (bVar2 == 2) {
        cVar3 = *(char *)(param_1 + 0x61);
        if (cVar3 == '\0') {
          local_68 = FUN_00498310(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) - iVar12)
          ;
          local_60 = FUN_00498310(*(int *)(param_1 + 0x54) + iVar12,
                                  *(int *)(param_1 + 0x58) + iVar12);
          local_58 = FUN_00498310(*(int *)(param_1 + 0x54) - iVar12,
                                  *(int *)(param_1 + 0x58) + iVar12);
          (**(code **)(*param_2 + 0xd8))(param_2,&local_68,2);
        }
        else if (cVar3 == '\x01') {
          local_68 = FUN_00498310(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + iVar12)
          ;
          local_60 = FUN_00498310(*(int *)(param_1 + 0x54) + iVar12,
                                  *(int *)(param_1 + 0x58) - iVar12);
          local_58 = FUN_00498310(*(int *)(param_1 + 0x54) - iVar12,
                                  *(int *)(param_1 + 0x58) - iVar12);
          (**(code **)(*param_2 + 0xd8))(param_2,&local_68,2);
        }
        else if (cVar3 == '\x02') {
          local_68 = FUN_00498310(*(int *)(param_1 + 0x54) + iVar12,
                                  *(int *)(param_1 + 0x58) + iVar12);
          local_60 = FUN_00498310(*(int *)(param_1 + 0x54) - iVar12,*(undefined4 *)(param_1 + 0x58))
          ;
          local_58 = FUN_00498310(*(int *)(param_1 + 0x54) + iVar12,
                                  *(int *)(param_1 + 0x58) - iVar12);
          (**(code **)(*param_2 + 0xd8))(param_2,&local_68,2);
          (**(code **)(*param_2 + 200))
                    (param_2,*(int *)(param_1 + 0x54) + iVar12,*(undefined4 *)(param_1 + 0x58));
        }
        else if (cVar3 == '\x03') {
          local_68 = FUN_00498310(*(int *)(param_1 + 0x54) - iVar12,
                                  *(int *)(param_1 + 0x58) + iVar12);
          local_60 = FUN_00498310(*(int *)(param_1 + 0x54) + iVar12,*(undefined4 *)(param_1 + 0x58))
          ;
          local_58 = FUN_00498310(*(int *)(param_1 + 0x54) - iVar12,
                                  *(int *)(param_1 + 0x58) - iVar12);
          (**(code **)(*param_2 + 0xd8))(param_2,&local_68,2);
        }
      }
      else if (bVar2 == 3) {
        (**(code **)(*param_2 + 0xf8))
                  (param_2,*(int *)(param_1 + 0x54) - iVar12,*(int *)(param_1 + 0x58) - iVar12,
                   *(int *)(param_1 + 0x54) + iVar12,*(int *)(param_1 + 0x58) + iVar12);
      }
      else if (bVar2 == 4) {
        (**(code **)(*param_2 + 200))
                  (param_2,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) - iVar12);
        (**(code **)(*param_2 + 0xc0))
                  (param_2,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + iVar12);
      }
    }
    else if (bVar2 == 6) {
      (**(code **)(*param_2 + 200))
                (param_2,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) - iVar12);
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + iVar12);
      (**(code **)(*param_2 + 200))
                (param_2,*(int *)(param_1 + 0x54) - iVar12,*(undefined4 *)(param_1 + 0x58));
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(int *)(param_1 + 0x54) + iVar12,*(undefined4 *)(param_1 + 0x58));
    }
    else if (bVar2 == 7) {
      local_68 = FUN_00498310(*(int *)(param_1 + 0x54) + iVar12,*(int *)(param_1 + 0x58) + iVar12);
      local_60 = FUN_00498310(*(int *)(param_1 + 0x54) - iVar12,*(undefined4 *)(param_1 + 0x58));
      local_58 = FUN_00498310(*(int *)(param_1 + 0x54) + iVar12,*(int *)(param_1 + 0x58) - iVar12);
      (**(code **)(*param_2 + 0xd8))(param_2,&local_68,2);
      (**(code **)(*param_2 + 200))
                (param_2,*(int *)(param_1 + 0x54) + iVar12,*(undefined4 *)(param_1 + 0x58));
      iVar7 = FUN_0040c770((double)(iVar4 * 3) / 5.0);
      iVar8 = FUN_0040c770((double)(iVar4 * 4) / 5.0);
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(int *)(param_1 + 0x54) + iVar12 + iVar7,*(undefined4 *)(param_1 + 0x58));
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(int *)(param_1 + 0x54) + iVar12 + iVar7,*(int *)(param_1 + 0x58) + iVar8)
      ;
      (**(code **)(*param_2 + 200))
                (param_2,*(int *)(param_1 + 0x54) + iVar7,*(int *)(param_1 + 0x58) + iVar8);
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(int *)(param_1 + 0x54) + iVar12 * 2 + iVar7,
                 *(int *)(param_1 + 0x58) + iVar8);
      iVar9 = FUN_0040c770(((double)iVar4 * 0.6) / 2.0);
      (**(code **)(*param_2 + 200))
                (param_2,(*(int *)(param_1 + 0x54) + iVar12 + iVar7) - iVar9,
                 *(int *)(param_1 + 0x58) + iVar8 + iVar8 / 2);
      iVar9 = FUN_0040c770(((double)iVar4 * 0.6) / 2.0);
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(int *)(param_1 + 0x54) + iVar12 + iVar7 + iVar9,
                 *(int *)(param_1 + 0x58) + iVar8 + iVar8 / 2);
      iVar9 = FUN_0040c770(((double)iVar4 * 0.2) / 2.0);
      (**(code **)(*param_2 + 200))
                (param_2,(*(int *)(param_1 + 0x54) + iVar12 + iVar7) - iVar9,
                 *(int *)(param_1 + 0x58) + iVar8 + (iVar8 / 2) * 2);
      iVar4 = FUN_0040c770(((double)iVar4 * 0.2) / 2.0);
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(int *)(param_1 + 0x54) + iVar12 + iVar7 + iVar4,
                 *(int *)(param_1 + 0x58) + iVar8 + (iVar8 / 2) * 2);
    }
    else if (bVar2 == 8) {
      if (*(char *)(param_1 + 0x61) == '\0') {
        local_68 = FUN_00498310(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) - iVar12);
        local_60 = FUN_00498310(*(int *)(param_1 + 0x54) + iVar12,*(int *)(param_1 + 0x58) + iVar12)
        ;
        local_58 = FUN_00498310(*(int *)(param_1 + 0x54) - iVar12,*(int *)(param_1 + 0x58) + iVar12)
        ;
        (**(code **)(*param_2 + 0xd8))(param_2,&local_68,2);
        (**(code **)(*param_2 + 200))
                  (param_2,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) - iVar12);
        (**(code **)(*param_2 + 0xc0))
                  (param_2,*(undefined4 *)(param_1 + 0x54),
                   (*(int *)(param_1 + 0x58) - iVar12) - iVar4);
        (**(code **)(*param_2 + 0xc0))
                  (param_2,*(int *)(param_1 + 0x54) + iVar4,
                   (*(int *)(param_1 + 0x58) - iVar12) - iVar4);
        (**(code **)(*param_2 + 200))
                  (param_2,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + iVar12);
        (**(code **)(*param_2 + 0xc0))
                  (param_2,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + iVar12 + iVar4
                  );
        (**(code **)(*param_2 + 0xc0))
                  (param_2,*(int *)(param_1 + 0x54) - iVar4,
                   *(int *)(param_1 + 0x58) + iVar12 + iVar4);
      }
      else if (*(char *)(param_1 + 0x61) == '\x01') {
        local_68 = FUN_00498310(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + iVar12);
        local_60 = FUN_00498310(*(int *)(param_1 + 0x54) + iVar12,*(int *)(param_1 + 0x58) - iVar12)
        ;
        local_58 = FUN_00498310(*(int *)(param_1 + 0x54) - iVar12,*(int *)(param_1 + 0x58) - iVar12)
        ;
        (**(code **)(*param_2 + 0xd8))(param_2,&local_68,2);
        (**(code **)(*param_2 + 200))
                  (param_2,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) - iVar12);
        (**(code **)(*param_2 + 0xc0))
                  (param_2,*(undefined4 *)(param_1 + 0x54),
                   (*(int *)(param_1 + 0x58) - iVar12) - iVar4);
        (**(code **)(*param_2 + 0xc0))
                  (param_2,*(int *)(param_1 + 0x54) - iVar4,
                   (*(int *)(param_1 + 0x58) - iVar12) - iVar4);
        (**(code **)(*param_2 + 200))
                  (param_2,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + iVar12);
        (**(code **)(*param_2 + 0xc0))
                  (param_2,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + iVar12 + iVar4
                  );
        (**(code **)(*param_2 + 0xc0))
                  (param_2,*(int *)(param_1 + 0x54) + iVar4,
                   *(int *)(param_1 + 0x58) + iVar12 + iVar4);
      }
    }
    (**(code **)(*(longlong *)param_2[0x10] + 0x10))((longlong *)param_2[0x10],plVar10);
    FUN_00410f20(plVar10);
    (**(code **)(*(longlong *)param_2[0xf] + 0x10))((longlong *)param_2[0xf],plVar11);
    FUN_00410f20(plVar11);
  }
  return;
}

