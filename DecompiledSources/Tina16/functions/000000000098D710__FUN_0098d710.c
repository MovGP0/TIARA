/* Ghidra address: 0098d710 */
/* Ghidra symbol: FUN_0098d710 */


void FUN_0098d710(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [40];
  undefined1 *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_44;
  undefined8 local_40 [2];
  byte local_2d;
  uint local_2c;
  int local_28;
  uint local_24;
  longlong local_20;
  
  local_a0 = auStack_c8;
  if (param_2 != param_1) {
    uVar2 = (**(code **)(*param_1 + 0xe8))(param_1);
    (**(code **)(*param_2 + 0xf0))(param_2,uVar2);
    local_28 = 0;
    local_2c = 0;
    local_20 = FUN_009aa410(&PTR_FUN_00945ed8,1);
    cVar1 = (**(code **)(*param_1 + 0xe8))(param_1);
    if (cVar1 == '\0') {
      while ((iVar3 = (**(code **)(*param_1 + 0x118))(param_1), local_28 < iVar3 &&
             (iVar3 = (**(code **)(*param_2 + 0x118))(param_2), (int)local_2c < iVar3))) {
        plVar4 = (longlong *)(**(code **)(*param_1 + 0x110))(param_1,local_28);
        uVar6 = (**(code **)(*param_2 + 0x110))(param_2,local_2c);
        local_2d = (**(code **)(*plVar4 + 0x1c0))(plVar4,uVar6);
        if ((local_2d & 0x40) == 0) {
          if ((local_2d & 8) == 0) {
            if ((local_2d & 0x10) == 0) {
              if ((local_2d & 4) == 0) {
                iVar3 = *(int *)(local_20 + 0x10);
                local_24 = 0;
                if (-1 < iVar3 + -1) {
                  do {
                    if (*(uint *)(local_20 + 0x10) <= local_24) {
                      FUN_00594f90();
                    }
                    (**(code **)(*param_1 + 0x130))
                              (param_1,local_28,
                               *(undefined8 *)
                                (*(longlong *)(local_20 + 8) + (longlong)(int)local_24 * 8));
                    FUN_00599670(local_20 + 8,local_24,5);
                    local_28 = local_28 + 1;
                    local_24 = local_24 + 1;
                    iVar3 = iVar3 + -1;
                  } while (iVar3 != 0);
                }
                uVar6 = (**(code **)(*param_2 + 0x110))(param_2,local_2c);
                (**(code **)(*param_1 + 0x130))(param_1,local_28,uVar6);
                local_28 = local_28 + 1;
                local_2c = local_2c + 1;
              }
              else {
                iVar3 = *(int *)(local_20 + 0x10);
                local_24 = 0;
                if (-1 < iVar3 + -1) {
                  do {
                    if (*(uint *)(local_20 + 0x10) <= local_24) {
                      FUN_00594f90();
                    }
                    (**(code **)(*param_1 + 0x130))
                              (param_1,local_28,
                               *(undefined8 *)
                                (*(longlong *)(local_20 + 8) + (longlong)(int)local_24 * 8));
                    FUN_00599670(local_20 + 8,local_24,5);
                    local_28 = local_28 + 1;
                    local_24 = local_24 + 1;
                    iVar3 = iVar3 + -1;
                  } while (iVar3 != 0);
                }
                local_28 = local_28 + 1;
              }
            }
            else {
              local_28 = local_28 + 1;
              local_24 = *(int *)(local_20 + 0x10) - 1;
              if (-1 < (int)local_24) {
                do {
                  local_60 = (longlong *)(**(code **)(*param_1 + 0x110))(param_1,local_28);
                  if (*(uint *)(local_20 + 0x10) <= local_24) {
                    FUN_00594f90();
                  }
                  uVar5 = (**(code **)(*local_60 + 0x1c0))
                                    (local_60,*(undefined8 *)
                                               (*(longlong *)(local_20 + 8) +
                                               (longlong)(int)local_24 * 8));
                  if ((uVar5 & 0x40) != 0) {
                    FUN_00599670(local_20 + 8,local_24,5);
                  }
                  local_24 = local_24 - 1;
                } while (local_24 != 0xffffffff);
              }
            }
          }
          else {
            local_40[0] = (**(code **)(*param_2 + 0x110))(param_2,local_2c);
            local_44 = FUN_00597e50(local_20 + 8,local_40);
            local_2c = local_2c + 1;
          }
        }
        else {
          local_2c = local_2c + 1;
        }
      }
    }
    else {
      while ((iVar3 = (**(code **)(*param_1 + 0x118))(param_1), local_28 < iVar3 &&
             (iVar3 = (**(code **)(*param_2 + 0x118))(param_2), (int)local_2c < iVar3))) {
        plVar4 = (longlong *)(**(code **)(*param_1 + 0x110))(param_1,local_28);
        uVar6 = (**(code **)(*param_2 + 0x110))(param_2,local_2c);
        local_2d = (**(code **)(*plVar4 + 0x1c0))(plVar4,uVar6);
        if ((local_2d & 0x40) == 0) {
          if ((local_2d & 8) == 0) {
            if ((local_2d & 0x20) == 0) {
              if ((local_2d & 4) == 0) {
                iVar3 = *(int *)(local_20 + 0x10);
                local_24 = 0;
                if (-1 < iVar3 + -1) {
                  do {
                    if (*(uint *)(local_20 + 0x10) <= local_24) {
                      FUN_00594f90();
                    }
                    (**(code **)(*param_1 + 0x130))
                              (param_1,local_28,
                               *(undefined8 *)
                                (*(longlong *)(local_20 + 8) + (longlong)(int)local_24 * 8));
                    FUN_00599670(local_20 + 8,local_24,5);
                    local_28 = local_28 + 1;
                    local_24 = local_24 + 1;
                    iVar3 = iVar3 + -1;
                  } while (iVar3 != 0);
                }
                uVar6 = (**(code **)(*param_2 + 0x110))(param_2,local_2c);
                (**(code **)(*param_1 + 0x130))(param_1,local_28,uVar6);
                local_28 = local_28 + 1;
                local_2c = local_2c + 1;
              }
              else {
                iVar3 = *(int *)(local_20 + 0x10);
                local_24 = 0;
                if (-1 < iVar3 + -1) {
                  do {
                    if (*(uint *)(local_20 + 0x10) <= local_24) {
                      FUN_00594f90();
                    }
                    (**(code **)(*param_1 + 0x130))
                              (param_1,local_28,
                               *(undefined8 *)
                                (*(longlong *)(local_20 + 8) + (longlong)(int)local_24 * 8));
                    FUN_00599670(local_20 + 8,local_24,5);
                    local_28 = local_28 + 1;
                    local_24 = local_24 + 1;
                    iVar3 = iVar3 + -1;
                  } while (iVar3 != 0);
                }
                local_28 = local_28 + 1;
              }
            }
            else {
              local_28 = local_28 + 1;
              local_24 = *(int *)(local_20 + 0x10) - 1;
              if (-1 < (int)local_24) {
                do {
                  local_88 = (longlong *)(**(code **)(*param_1 + 0x110))(param_1,local_28);
                  if (*(uint *)(local_20 + 0x10) <= local_24) {
                    FUN_00594f90();
                  }
                  uVar5 = (**(code **)(*local_88 + 0x1c0))
                                    (local_88,*(undefined8 *)
                                               (*(longlong *)(local_20 + 8) +
                                               (longlong)(int)local_24 * 8));
                  if ((uVar5 & 0x40) != 0) {
                    FUN_00599670(local_20 + 8,local_24,5);
                  }
                  local_24 = local_24 - 1;
                } while (local_24 != 0xffffffff);
              }
            }
          }
          else {
            local_68 = (**(code **)(*param_2 + 0x110))(param_2,local_2c);
            local_6c = FUN_00597e50(local_20 + 8,&local_68);
            local_2c = local_2c + 1;
          }
        }
        else {
          local_2c = local_2c + 1;
        }
      }
    }
    while ((local_28 = local_28 + 1, 0 < *(int *)(local_20 + 0x10) &&
           (iVar3 = (**(code **)(*param_1 + 0x118))(param_1), local_28 < iVar3))) {
      local_90 = (longlong *)(**(code **)(*param_1 + 0x110))(param_1,local_28);
      if (*(int *)(local_20 + 0x10) == 0) {
        FUN_00594f90();
      }
      uVar5 = (**(code **)(*local_90 + 0x1c0))(local_90,**(undefined8 **)(local_20 + 8));
      if ((uVar5 & 8) == 0) {
        iVar3 = *(int *)(local_20 + 0x10);
        local_24 = 0;
        if (-1 < iVar3 + -1) {
          do {
            if (*(uint *)(local_20 + 0x10) <= local_24) {
              FUN_00594f90();
            }
            (**(code **)(*param_1 + 0x130))
                      (param_1,local_28,
                       *(undefined8 *)(*(longlong *)(local_20 + 8) + (longlong)(int)local_24 * 8));
            FUN_00599670(local_20 + 8,local_24,5);
            local_24 = local_24 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      local_24 = *(int *)(local_20 + 0x10) - 1;
      if (-1 < (int)local_24) {
        do {
          local_98 = (longlong *)(**(code **)(*param_1 + 0x110))(param_1,local_28);
          if (*(uint *)(local_20 + 0x10) <= local_24) {
            FUN_00594f90();
          }
          uVar5 = (**(code **)(*local_98 + 0x1c0))
                            (local_98,*(undefined8 *)
                                       (*(longlong *)(local_20 + 8) + (longlong)(int)local_24 * 8));
          if ((uVar5 & 0x40) != 0) {
            FUN_00599670(local_20 + 8,local_24,5);
          }
          local_24 = local_24 - 1;
        } while (local_24 != 0xffffffff);
      }
    }
    iVar3 = *(int *)(local_20 + 0x10);
    local_24 = 0;
    if (-1 < iVar3 + -1) {
      do {
        if (*(uint *)(local_20 + 0x10) <= local_24) {
          FUN_00594f90();
        }
        (**(code **)(*param_1 + 0x140))
                  (param_1,*(undefined8 *)
                            (*(longlong *)(local_20 + 8) + (longlong)(int)local_24 * 8));
        local_24 = local_24 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (**(code **)(*param_2 + 0x118))(param_2);
    if ((int)local_2c < iVar3) {
      iVar3 = (**(code **)(*param_2 + 0x118))(param_2);
      local_24 = local_2c;
      if ((int)local_2c <= iVar3 + -1) {
        iVar3 = ((iVar3 + -1) - local_2c) + 1;
        do {
          uVar6 = (**(code **)(*param_2 + 0x110))(param_2,local_24);
          (**(code **)(*param_1 + 0x140))(param_1,uVar6);
          local_24 = local_24 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    FUN_00410f20(local_20);
  }
  return;
}

