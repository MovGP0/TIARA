/* Ghidra address: 00f9c3a0 */
/* Ghidra symbol: FUN_00f9c3a0 */


void FUN_00f9c3a0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 local_20;
  
  local_20 = 0;
  if (*(char *)(param_1 + 0x7c2) == '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),&local_20);
    uVar2 = FUN_0043fc00(local_20);
    *(undefined4 *)(param_1 + 0x868) = uVar2;
  }
  else {
    uVar3 = 0;
    iVar4 = 7;
    do {
      uVar3 = uVar3 * 2;
      if (*(char *)(param_1 + 0x819) == '\r') {
        if (iVar4 < 5) {
          if (iVar4 == 4) {
            cVar1 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))
                              (*(longlong **)(param_1 + 0x718));
            if (cVar1 != '\0') {
              uVar3 = uVar3 + 1;
            }
          }
          else if (iVar4 == 0) {
            cVar1 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))
                              (*(longlong **)(param_1 + 0x738));
            if (cVar1 != '\0') {
              uVar3 = uVar3 + 1;
            }
          }
          else if (iVar4 == 1) {
            cVar1 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))
                              (*(longlong **)(param_1 + 0x730));
            if (cVar1 != '\0') {
              uVar3 = uVar3 + 1;
            }
          }
          else if (iVar4 == 2) {
            cVar1 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))
                              (*(longlong **)(param_1 + 0x728));
            if (cVar1 != '\0') {
              uVar3 = uVar3 + 1;
            }
          }
          else if (iVar4 == 3) {
            cVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                              (*(longlong **)(param_1 + 0x720));
            if (cVar1 != '\0') {
              uVar3 = uVar3 + 1;
            }
          }
        }
        else if (iVar4 == 5) {
          cVar1 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))
                            (*(longlong **)(param_1 + 0x710));
          if (cVar1 != '\0') {
            uVar3 = uVar3 + 1;
          }
        }
        else if (iVar4 == 6) {
          cVar1 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))
                            (*(longlong **)(param_1 + 0x708));
          if (cVar1 != '\0') {
            uVar3 = uVar3 + 1;
          }
        }
        else if (iVar4 == 7) {
          cVar1 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))
                            (*(longlong **)(param_1 + 0x700));
          if (cVar1 != '\0') {
            uVar3 = uVar3 + 1;
          }
        }
      }
      else if (*(char *)(param_1 + 0x819) == '\f') {
        if (iVar4 < 5) {
          if (iVar4 == 4) {
            cVar1 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))
                              (*(longlong **)(param_1 + 0x758));
            if (cVar1 != '\0') {
              uVar3 = uVar3 + 1;
            }
          }
          else if (iVar4 == 0) {
            cVar1 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x260))
                              (*(longlong **)(param_1 + 0x778));
            if (cVar1 != '\0') {
              uVar3 = uVar3 + 1;
            }
          }
          else if (iVar4 == 1) {
            cVar1 = (**(code **)(**(longlong **)(param_1 + 0x770) + 0x260))
                              (*(longlong **)(param_1 + 0x770));
            if (cVar1 != '\0') {
              uVar3 = uVar3 + 1;
            }
          }
          else if (iVar4 == 2) {
            cVar1 = (**(code **)(**(longlong **)(param_1 + 0x768) + 0x260))
                              (*(longlong **)(param_1 + 0x768));
            if (cVar1 != '\0') {
              uVar3 = uVar3 + 1;
            }
          }
          else if (iVar4 == 3) {
            cVar1 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x260))
                              (*(longlong **)(param_1 + 0x760));
            if (cVar1 != '\0') {
              uVar3 = uVar3 + 1;
            }
          }
        }
        else if (iVar4 == 5) {
          cVar1 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))
                            (*(longlong **)(param_1 + 0x750));
          if (cVar1 != '\0') {
            uVar3 = uVar3 + 1;
          }
        }
        else if (iVar4 == 6) {
          cVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))
                            (*(longlong **)(param_1 + 0x748));
          if (cVar1 != '\0') {
            uVar3 = uVar3 + 1;
          }
        }
        else if (iVar4 == 7) {
          cVar1 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x260))
                            (*(longlong **)(param_1 + 0x740));
          if (cVar1 != '\0') {
            uVar3 = uVar3 + 1;
          }
        }
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
    if (*(char *)(param_1 + 0x819) == '\b') {
      *(uint *)(param_1 + 0x868) = *(uint *)(param_1 + 0x868) & 0xffe0 | uVar3;
    }
    if (*(char *)(param_1 + 0x819) == '\t') {
      *(uint *)(param_1 + 0x868) = *(uint *)(param_1 + 0x868) & 0xfc1f | uVar3 << 5;
    }
    if (*(char *)(param_1 + 0x819) == '\n') {
      *(uint *)(param_1 + 0x868) = *(uint *)(param_1 + 0x868) & 0x83ff | uVar3 << 10;
    }
    if (*(char *)(param_1 + 0x819) == '\f') {
      *(uint *)(param_1 + 0x868) = uVar3;
    }
    if (*(char *)(param_1 + 0x819) == '\r') {
      *(uint *)(param_1 + 0x868) = uVar3;
    }
  }
  if (*(char *)(param_1 + 0x819) == '\x05') {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0))
    ;
    *(uint *)(param_1 + 0x860) = *(uint *)(param_1 + 0x860) & 0xfffe | uVar3;
  }
  if (*(char *)(param_1 + 0x819) == '\b') {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0))
    ;
    *(uint *)(param_1 + 0x860) = *(uint *)(param_1 + 0x860) & 0xfffd | iVar4 * 2;
  }
  if (*(char *)(param_1 + 0x819) == '\t') {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0))
    ;
    *(uint *)(param_1 + 0x860) = *(uint *)(param_1 + 0x860) & 0xfffb | iVar4 * 4;
  }
  if (*(char *)(param_1 + 0x819) == '\n') {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0))
    ;
    *(uint *)(param_1 + 0x860) = *(uint *)(param_1 + 0x860) & 0xfff7 | iVar4 << 3;
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x810));
  FUN_00414480(&local_20);
  return;
}

