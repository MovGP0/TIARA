/* Ghidra address: 00ab5680 */
/* Ghidra symbol: FUN_00ab5680 */


longlong *
FUN_00ab5680(longlong *param_1,char param_2,longlong param_3,longlong param_4,undefined8 param_5,
            undefined4 param_6,undefined8 param_7)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_00414480(&local_38);
  cVar7 = '\0';
  cVar2 = '\0';
  if (param_2 == -0x44) {
    iVar8 = 0;
    iVar3 = *(int *)(param_4 + 0x10);
    if (-1 < iVar3 + -1) {
      do {
        lVar4 = FUN_00a72910(param_4,iVar8);
        if (*(char *)(lVar4 + 8) == '2') {
          bVar1 = true;
          local_30 = FUN_00a72910(param_4,iVar8);
          goto code_r0x00ab59d6;
        }
        iVar8 = iVar8 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    bVar1 = false;
code_r0x00ab59d6:
    if (bVar1) {
      bVar1 = true;
    }
    else {
      iVar8 = 0;
      iVar3 = *(int *)(param_4 + 0x10);
      if (-1 < iVar3 + -1) {
        do {
          lVar4 = FUN_00a72910(param_4,iVar8);
          if (*(char *)(lVar4 + 8) == 'K') {
            bVar1 = true;
            local_30 = FUN_00a72910(param_4,iVar8);
            goto code_r0x00ab5a27;
          }
          iVar8 = iVar8 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      bVar1 = false;
code_r0x00ab5a27:
      if ((bVar1) && (1 < *(int *)(local_30 + 0x18))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    if (bVar1) {
      plVar5 = (longlong *)
               FUN_00aca630(&PTR_FUN_00ac7e68,1,param_5,*(undefined4 *)((longlong)param_1 + 0x6c),
                            param_4,param_7);
    }
    else {
      plVar5 = (longlong *)
               FUN_00acb510(&PTR_FUN_00ac8f00,1,param_5,*(undefined4 *)((longlong)param_1 + 0x6c),
                            param_4,param_7);
    }
    goto LAB_00ab5ae2;
  }
  if (param_2 != -0x40) {
    plVar5 = (longlong *)
             FUN_00acc0a0(&PTR_FUN_00ac9608,1,param_5,*(undefined4 *)((longlong)param_1 + 0x6c),
                          param_4,param_7);
    goto LAB_00ab5ae2;
  }
  local_30 = 0;
  iVar3 = *(int *)(param_4 + 0x10);
  iVar8 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar4 = FUN_00a72910(param_4,iVar8);
      if (*(char *)(lVar4 + 8) == 'W') {
        bVar1 = true;
        local_30 = FUN_00a72910(param_4,iVar8);
        goto code_r0x00ab5736;
      }
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  bVar1 = false;
code_r0x00ab5736:
  plVar5 = (longlong *)0x0;
  cVar2 = '\0';
  if (bVar1) {
    FUN_0043e1a0(&local_38,*(undefined8 *)(local_30 + 0x28));
    iVar3 = FUN_00416db0(local_38,L"submit");
    cVar2 = cVar7;
    if (iVar3 != 0) {
      iVar3 = FUN_00416db0(local_38,L"reset");
      if (iVar3 != 0) {
        iVar3 = FUN_00416db0(local_38,L"button");
        if (iVar3 != 0) {
          iVar3 = FUN_00416db0(local_38,L"radio");
          if (iVar3 == 0) {
            plVar5 = (longlong *)
                     FUN_00a9a640(&PTR_FUN_00a89bc8,1,param_5,
                                  *(undefined4 *)((longlong)param_1 + 0x6c),param_4,param_7);
          }
          else {
            iVar3 = FUN_00416db0(local_38,L"checkbox");
            if (iVar3 == 0) {
              plVar5 = (longlong *)
                       FUN_00acf0d0(&PTR_FUN_00ac88a0,1,param_5,
                                    *(undefined4 *)((longlong)param_1 + 0x6c),param_4,param_7);
            }
            else {
              iVar3 = FUN_00416db0(local_38,L"hidden");
              if (iVar3 == 0) {
                plVar5 = (longlong *)
                         FUN_00a99130(&PTR_FUN_00ac5ce0,1,param_5,
                                      *(undefined4 *)((longlong)param_1 + 0x6c),param_4,param_7);
              }
              else {
                iVar3 = FUN_00416db0(local_38,L"image");
                if (iVar3 == 0) {
                  plVar5 = (longlong *)
                           FUN_00a9a070(&PTR_FUN_00a88ed0,1,param_5,
                                        *(undefined4 *)((longlong)param_1 + 0x6c),param_4,param_7);
                  cVar2 = '\x01';
                }
                else {
                  iVar3 = FUN_00416db0(local_38,L"file");
                  plVar5 = (longlong *)0x0;
                  if (iVar3 == 0) {
                    cVar2 = '\x02';
                    plVar5 = (longlong *)
                             FUN_00acd6e0(&PTR_FUN_00ac65e8,1,param_5,
                                          *(undefined4 *)((longlong)param_1 + 0x6c),param_4,param_7)
                    ;
                  }
                }
              }
            }
          }
          goto LAB_00ab594a;
        }
      }
    }
    plVar5 = (longlong *)
             FUN_00ace400(&PTR_FUN_00ac6d38,1,param_5,*(undefined4 *)((longlong)param_1 + 0x6c),
                          param_4,param_7);
  }
LAB_00ab594a:
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)
             FUN_00acd6e0(&PTR_FUN_00ac65e8,1,param_5,*(undefined4 *)((longlong)param_1 + 0x6c),
                          param_4,param_7);
  }
LAB_00ab5ae2:
  if (cVar2 == '\x01') {
    lVar4 = FUN_00ab5440(param_1,param_4,param_5,param_6,param_7);
    *(longlong **)(lVar4 + 0x1c8) = plVar5;
    plVar5[0x29] = lVar4;
  }
  else if (cVar2 == '\x02') {
    FUN_004ae7e0(param_1[0x20],plVar5);
    (**(code **)(*param_1 + 0xc0))(param_1,2,param_6);
    *(undefined1 *)(param_1[0x1c] + (longlong)(*(int *)((longlong)param_1 + 0x6c) + -1)) = 0;
    lVar4 = FUN_00ace400(&PTR_FUN_00ac6d38,1,param_5,*(undefined4 *)((longlong)param_1 + 0x6c),
                         param_4,param_7);
    *(longlong **)(lVar4 + 0x158) = plVar5;
    FUN_004ae7e0(param_1[0x20],lVar4);
    FUN_00a72b50(param_4,&local_40);
    if (local_40 != 0) {
      FUN_00a72b50(param_4,&local_48);
      FUN_00a74eb0(*(undefined8 *)(param_1[3] + 0x298),local_48,plVar5);
    }
    FUN_00ac1910(plVar5,0);
    FUN_00ace150(plVar5,0);
    (**(code **)(*param_1 + 0xc0))(param_1,2,param_6);
    *(undefined1 *)(param_1[0x1c] + (longlong)(*(int *)((longlong)param_1 + 0x6c) + -1)) = 0;
  }
  else {
    FUN_004ae7e0(param_1[0x20],plVar5);
    (**(code **)(*param_1 + 0xc0))(param_1,2,param_6);
  }
  cVar2 = FUN_00a554f0(param_7);
  if (cVar2 != '\0') {
    FUN_00aa8ac0(param_1[3],param_6,param_7,1);
  }
  lVar4 = (**(code **)(*plVar5 + 0x100))(plVar5);
  if (lVar4 != 0) {
    plVar6 = (longlong *)(**(code **)(*plVar5 + 0x100))(plVar5);
    (**(code **)(*plVar6 + 0x148))(plVar6,*(undefined1 *)(param_3 + 0x90));
  }
  FUN_00414560(&local_48,3);
  return plVar5;
}

