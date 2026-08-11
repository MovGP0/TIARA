/* Ghidra address: 019d6800 */
/* Ghidra symbol: FUN_019d6800 */


void FUN_019d6800(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0x14c8);
  for (lVar4 = 0x3fb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)(param_1 + 0x810) = 1;
  uVar1 = FUN_0123ac30(*(undefined8 *)(param_1 + 0x14c8));
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x268))(*(longlong **)(param_1 + 0x720),uVar1);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720));
  if ((int)uVar3 != 2) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720))
    ;
    if ((int)uVar3 != 3) {
      uVar1 = 0;
      goto LAB_019d6886;
    }
  }
  uVar1 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
LAB_019d6886:
  FUN_019d55e0(param_1,uVar1);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720));
  if (iVar2 == 0) {
    if ((param_3 & 1) == 0) {
      **(undefined8 **)(param_1 + 0x14c8) = *(undefined8 *)PTR_DAT_02003948;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6b8),*(undefined8 *)PTR_DAT_02003948);
    }
    else {
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6b8),**(undefined8 **)(param_1 + 0x14c8));
    }
    if ((param_3 & 2) == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x10) =
           *(undefined8 *)(PTR_DAT_02003948 + 8);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),*(undefined8 *)(PTR_DAT_02003948 + 8));
    }
    else {
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x10));
    }
    if ((param_3 & 4) == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x20) =
           *(undefined8 *)(PTR_DAT_02003948 + 0x10);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6d8),*(undefined8 *)(PTR_DAT_02003948 + 0x10));
    }
    else {
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6d8),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x20));
    }
    if ((param_3 & 8) == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x30) =
           *(undefined8 *)(PTR_DAT_02003948 + 0x18);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6e8),*(undefined8 *)(PTR_DAT_02003948 + 0x18));
    }
    else {
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6e8),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x30));
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720))
    ;
    FUN_019d5b20(param_1,4,uVar1);
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720))
    ;
    if (iVar2 == 1) {
      if ((param_3 & 1) == 0) {
        **(undefined8 **)(param_1 + 0x14c8) = *(undefined8 *)PTR_DAT_020046b0;
        FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),*(undefined8 *)PTR_DAT_020046b0);
      }
      else {
        FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),**(undefined8 **)(param_1 + 0x14c8));
      }
      if ((param_3 & 2) == 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x10) =
             *(undefined8 *)(PTR_DAT_020046b0 + 8);
        FUN_00b90440(*(undefined8 *)(param_1 + 0x6b8),*(undefined8 *)(PTR_DAT_020046b0 + 8));
      }
      else {
        FUN_00b90440(*(undefined8 *)(param_1 + 0x6b8),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x10));
      }
      if ((param_3 & 4) == 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x20) =
             *(undefined8 *)(PTR_DAT_020046b0 + 0x10);
        FUN_00b90440(*(undefined8 *)(param_1 + 0x6e8),*(undefined8 *)(PTR_DAT_020046b0 + 0x10));
      }
      else {
        FUN_00b90440(*(undefined8 *)(param_1 + 0x6e8),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x20));
      }
      if ((param_3 & 8) == 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x30) =
             *(undefined8 *)(PTR_DAT_020046b0 + 0x18);
        FUN_00b90440(*(undefined8 *)(param_1 + 0x6d8),*(undefined8 *)(PTR_DAT_020046b0 + 0x18));
      }
      else {
        FUN_00b90440(*(undefined8 *)(param_1 + 0x6d8),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x30));
      }
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                        (*(longlong **)(param_1 + 0x720));
      FUN_019d5b20(param_1,4,uVar1);
    }
    else {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                        (*(longlong **)(param_1 + 0x720));
      if (iVar2 == 2) {
        if ((param_3 & 2) == 0) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x10) =
               *(undefined8 *)(PTR_DAT_02003e78 + 8);
          FUN_00b90440(*(undefined8 *)(param_1 + 0x6b8),*(undefined8 *)(PTR_DAT_02003e78 + 8));
        }
        else {
          FUN_00b90440(*(undefined8 *)(param_1 + 0x6b8),
                       *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x10));
        }
        if ((param_3 & 1) == 0) {
          **(undefined8 **)(param_1 + 0x14c8) = *(undefined8 *)PTR_DAT_02003e78;
          FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),*(undefined8 *)PTR_DAT_02003e78);
        }
        else {
          FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),**(undefined8 **)(param_1 + 0x14c8));
        }
        if ((param_3 & 8) == 0) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x30) =
               *(undefined8 *)(PTR_DAT_02003e78 + 0x10);
          FUN_00b90440(*(undefined8 *)(param_1 + 0x6d8),*(undefined8 *)(PTR_DAT_02003e78 + 0x10));
        }
        else {
          FUN_00b90440(*(undefined8 *)(param_1 + 0x6d8),
                       *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x30));
        }
        if ((param_3 & 4) == 0) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x20) =
               *(undefined8 *)(PTR_DAT_02003e78 + 0x18);
          FUN_00b90440(*(undefined8 *)(param_1 + 0x6e8),*(undefined8 *)(PTR_DAT_02003e78 + 0x18));
        }
        else {
          FUN_00b90440(*(undefined8 *)(param_1 + 0x6e8),
                       *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x20));
        }
        if ((param_3 & 0x10) == 0) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x28) =
               *(undefined8 *)(PTR_DAT_02003e78 + 0x20);
          FUN_00b90440(*(undefined8 *)(param_1 + 0x760),*(undefined8 *)(PTR_DAT_02003e78 + 0x20));
        }
        else {
          FUN_00b90440(*(undefined8 *)(param_1 + 0x760),
                       *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x28));
        }
        if ((param_3 & 0x20) == 0) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x38) =
               *(undefined8 *)(PTR_DAT_02003e78 + 0x28);
          FUN_00b90440(*(undefined8 *)(param_1 + 0x770),*(undefined8 *)(PTR_DAT_02003e78 + 0x28));
        }
        else {
          FUN_00b90440(*(undefined8 *)(param_1 + 0x770),
                       *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x38));
        }
        uVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                          (*(longlong **)(param_1 + 0x720));
        FUN_019d5b20(param_1,6,uVar1);
      }
      else {
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                          (*(longlong **)(param_1 + 0x720));
        if (iVar2 == 3) {
          if ((param_3 & 1) == 0) {
            **(undefined8 **)(param_1 + 0x14c8) = *(undefined8 *)PTR_DAT_02004ca0;
            FUN_00b90440(*(undefined8 *)(param_1 + 0x6b8),*(undefined8 *)PTR_DAT_02004ca0);
          }
          else {
            FUN_00b90440(*(undefined8 *)(param_1 + 0x6b8),**(undefined8 **)(param_1 + 0x14c8));
          }
          if ((param_3 & 2) == 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x10) =
                 *(undefined8 *)(PTR_DAT_02004ca0 + 8);
            FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),*(undefined8 *)(PTR_DAT_02004ca0 + 8));
          }
          else {
            FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x10));
          }
          if ((param_3 & 4) == 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x20) =
                 *(undefined8 *)(PTR_DAT_02004ca0 + 0x18);
            FUN_00b90440(*(undefined8 *)(param_1 + 0x6d8),*(undefined8 *)(PTR_DAT_02004ca0 + 0x18));
          }
          else {
            FUN_00b90440(*(undefined8 *)(param_1 + 0x6d8),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x20));
          }
          if ((param_3 & 8) == 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x30) =
                 *(undefined8 *)(PTR_DAT_02004ca0 + 0x10);
            FUN_00b90440(*(undefined8 *)(param_1 + 0x6e8),*(undefined8 *)(PTR_DAT_02004ca0 + 0x10));
          }
          else {
            FUN_00b90440(*(undefined8 *)(param_1 + 0x6e8),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x30));
          }
          if ((param_3 & 0x20) == 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x38) =
                 *(undefined8 *)(PTR_DAT_02004ca0 + 0x28);
            FUN_00b90440(*(undefined8 *)(param_1 + 0x760),*(undefined8 *)(PTR_DAT_02004ca0 + 0x28));
          }
          else {
            FUN_00b90440(*(undefined8 *)(param_1 + 0x760),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x38));
          }
          if ((param_3 & 0x10) == 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x28) =
                 *(undefined8 *)(PTR_DAT_02004ca0 + 0x20);
            FUN_00b90440(*(undefined8 *)(param_1 + 0x770),*(undefined8 *)(PTR_DAT_02004ca0 + 0x20));
          }
          else {
            FUN_00b90440(*(undefined8 *)(param_1 + 0x770),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x14c8) + 0x28));
          }
          uVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                            (*(longlong **)(param_1 + 0x720));
          FUN_019d5b20(param_1,6,uVar1);
        }
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x740) + 0x268))
            (*(longlong **)(param_1 + 0x740),
             *(undefined4 *)(*(longlong *)(param_1 + 0x14c8) + 0x1fcc));
  (**(code **)(**(longlong **)(param_1 + 0x750) + 0x268))(*(longlong **)(param_1 + 0x750),0);
  if (*(short *)(*(longlong *)(param_1 + 0x14c8) + 0x1fa4) != 0x4c) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x14c8) + 0x1fc8) = 1;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x14c8) + 0x1fc8) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x730) + 0x268))(*(longlong **)(param_1 + 0x730),1);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x730) + 0x268))(*(longlong **)(param_1 + 0x730),0);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x14c8) + 0x1fca) = 1;
  FUN_019d4b00(param_1);
  return;
}

