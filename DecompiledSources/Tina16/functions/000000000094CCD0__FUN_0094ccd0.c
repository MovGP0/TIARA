/* Ghidra address: 0094ccd0 */
/* Ghidra symbol: FUN_0094ccd0 */


undefined1 FUN_0094ccd0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  longlong local_88;
  longlong local_80;
  undefined4 local_64;
  undefined8 local_60 [3];
  undefined4 local_44;
  undefined8 local_40 [2];
  int local_30;
  undefined1 local_29;
  longlong local_28;
  longlong local_20;
  
  local_90 = auStack_b8;
  puVar1 = auStack_b8;
  if (param_2 == 0) {
    uVar4 = FUN_0044d490(&PTR_FUN_009013a8,1,L"Not supported error.");
    FUN_004134c0(uVar4);
    puVar1 = local_90;
  }
  local_90 = puVar1;
  if (param_2 == param_1) {
    local_29 = 0x48;
  }
  else {
    local_20 = FUN_009aa410(&PTR_FUN_00945ed8,1);
    local_28 = FUN_009aa410(&PTR_FUN_00945ed8,1);
    FUN_0094cc10(auStack_b8,param_1,local_20);
    FUN_0094cc10(auStack_b8,param_2,local_28);
    if (*(int *)(local_20 + 0x10) == 0) {
      FUN_00594f90();
    }
    if (*(int *)(local_28 + 0x10) == 0) {
      FUN_00594f90();
    }
    if (**(longlong **)(local_20 + 8) == **(longlong **)(local_28 + 8)) {
      local_40[0] = 0;
      local_44 = FUN_00597e50(local_20 + 8,local_40);
      local_60[0] = 0;
      local_64 = FUN_00597e50(local_28 + 8,local_60);
      while( true ) {
        if (*(uint *)(local_20 + 0x10) < 2) {
          FUN_00594f90();
        }
        if (*(uint *)(local_28 + 0x10) < 2) {
          FUN_00594f90();
        }
        if (*(longlong *)(*(longlong *)(local_20 + 8) + 8) !=
            *(longlong *)(*(longlong *)(local_28 + 8) + 8)) break;
        FUN_00599670(local_20 + 8,0,5);
        FUN_00599670(local_28 + 8,0,5);
      }
      if (*(int *)(local_28 + 0x10) == 2) {
        local_29 = 0x22;
      }
      else if (*(uint *)(local_20 + 0x10) == 2) {
        local_29 = 0x11;
      }
      else {
        if (*(uint *)(local_20 + 0x10) < 2) {
          FUN_00594f90();
        }
        plVar6 = *(longlong **)(*(longlong *)(local_20 + 8) + 8);
        cVar2 = (**(code **)(*plVar6 + 0x168))(plVar6);
        if (cVar2 == '\v') {
          if (*(uint *)(local_28 + 0x10) < 2) {
            FUN_00594f90();
          }
          plVar6 = *(longlong **)(*(longlong *)(local_28 + 8) + 8);
          cVar2 = (**(code **)(*plVar6 + 0x168))(plVar6);
          if (cVar2 == '\v') {
            local_29 = 8;
          }
          else {
            local_29 = 0x10;
          }
        }
        else {
          if (*(uint *)(local_28 + 0x10) < 2) {
            FUN_00594f90();
          }
          plVar6 = *(longlong **)(*(longlong *)(local_28 + 8) + 8);
          cVar2 = (**(code **)(*plVar6 + 0x168))(plVar6);
          if (cVar2 == '\v') {
            local_29 = 0x20;
          }
          else {
            if (*(uint *)(local_20 + 0x10) < 2) {
              FUN_00594f90();
            }
            plVar6 = *(longlong **)(*(longlong *)(local_20 + 8) + 8);
            cVar2 = (**(code **)(*plVar6 + 0x168))(plVar6);
            if (cVar2 == '\x02') {
              if (*(uint *)(local_28 + 0x10) < 2) {
                FUN_00594f90();
              }
              plVar6 = *(longlong **)(*(longlong *)(local_28 + 8) + 8);
              cVar2 = (**(code **)(*plVar6 + 0x168))(plVar6);
              if (cVar2 == '\x02') {
                local_29 = 8;
              }
              else {
                local_29 = 0x10;
              }
            }
            else {
              if (*(uint *)(local_28 + 0x10) < 2) {
                FUN_00594f90();
              }
              plVar6 = *(longlong **)(*(longlong *)(local_28 + 8) + 8);
              cVar2 = (**(code **)(*plVar6 + 0x168))(plVar6);
              if (cVar2 != '\x02') {
                if (*(int *)(local_20 + 0x10) == 0) {
                  FUN_00594f90();
                }
                puVar5 = (undefined8 *)
                         (**(code **)(*(longlong *)**(undefined8 **)(local_20 + 8) + 0x110))
                                   ((longlong *)**(undefined8 **)(local_20 + 8));
                iVar3 = (**(code **)*puVar5)();
                local_30 = 0;
                if (-1 < iVar3 + -1) {
                  do {
                    if (*(int *)(local_20 + 0x10) == 0) {
                      FUN_00594f90();
                    }
                    plVar6 = (longlong *)
                             (**(code **)(*(longlong *)**(undefined8 **)(local_20 + 8) + 0x110))
                                       ((longlong *)**(undefined8 **)(local_20 + 8));
                    local_80 = (**(code **)(*plVar6 + 0x10))(plVar6,local_30);
                    if (*(uint *)(local_20 + 0x10) < 2) {
                      FUN_00594f90();
                    }
                    if (local_80 == *(longlong *)(*(longlong *)(local_20 + 8) + 8)) {
                      local_29 = 0x10;
                      goto LAB_0094d1d9;
                    }
                    if (*(int *)(local_20 + 0x10) == 0) {
                      FUN_00594f90();
                    }
                    plVar6 = (longlong *)
                             (**(code **)(*(longlong *)**(undefined8 **)(local_20 + 8) + 0x110))
                                       ((longlong *)**(undefined8 **)(local_20 + 8));
                    local_88 = (**(code **)(*plVar6 + 0x10))(plVar6,local_30);
                    if (*(uint *)(local_28 + 0x10) < 2) {
                      FUN_00594f90();
                    }
                    if (local_88 == *(longlong *)(*(longlong *)(local_28 + 8) + 8)) {
                      local_29 = 0x20;
                      goto LAB_0094d1d9;
                    }
                    local_30 = local_30 + 1;
                    iVar3 = iVar3 + -1;
                  } while (iVar3 != 0);
                }
                FUN_00410f20(local_20);
                FUN_00410f20(local_28);
                return local_29;
              }
              local_29 = 0x20;
            }
          }
        }
      }
    }
    else {
      local_29 = 4;
    }
LAB_0094d1d9:
    FUN_0094d200(0,local_90);
  }
  return local_29;
}

