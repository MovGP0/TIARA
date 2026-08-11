/* Ghidra address: 01696fc0 */
/* Ghidra symbol: FUN_01696fc0 */


void FUN_01696fc0(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0 [256];
  undefined8 local_a0 [2];
  undefined8 local_89;
  undefined1 uStack_81;
  
  local_208 = 0;
  local_210 = 0;
  local_1f8 = 0;
  local_200 = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_a0[0] = 0;
  bVar5 = true;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x24) + -1;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  FUN_00416780(local_a0,*(undefined2 *)(param_1 + 0x30));
  FUN_00416910(local_1a0,local_a0[0],0xff);
  FUN_00415020(&local_89,local_1a0,0x50);
  lVar6 = FUN_00c53100(0,&PTR_FUN_00c52ff8);
  piVar1 = (int *)(lVar6 + 8);
  uVar2 = *(ushort *)(param_1 + 0x30);
  if (uVar2 < 0x3c) {
    if (uVar2 == 0x3b) {
      *piVar1 = 0x10a;
      goto LAB_01697a1f;
    }
    if (uVar2 < 0x2b) {
      if (uVar2 == 0x2a) {
        if ((*(int *)(param_1 + 0x318) == 0) || (*(int *)(param_1 + 0x318) == 2)) {
          *piVar1 = 0x110;
        }
        else {
          FUN_01696200(param_1,1);
          if (*(short *)(param_1 + 0x30) == 0x2a) {
            *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
            *piVar1 = 0x15c;
            FUN_004169a0(&local_1a8,&local_89);
            FUN_00416780(&local_1b0,*(undefined2 *)(param_1 + 0x30));
            FUN_00416ad0(&local_1a8,local_1b0);
            FUN_00416910(local_1a0,local_1a8,0xff);
            FUN_00415020(&local_89,local_1a0,0x50);
          }
          else {
            *piVar1 = 0x110;
            bVar5 = false;
          }
        }
        goto LAB_01697a1f;
      }
      if (uVar2 < 0x28) {
        if (uVar2 == 0x27) {
          if (*(int *)(param_1 + 0x318) == 0) {
            *piVar1 = 0x147;
            FUN_01696ec0(param_1);
          }
          else {
            *piVar1 = 0x103;
            bVar5 = false;
          }
          goto LAB_01697a1f;
        }
        if (uVar2 == 10) {
          *piVar1 = 0x10b;
          goto LAB_01697a1f;
        }
        if (uVar2 == 0x21) {
          if ((*(int *)(param_1 + 0x318) == 0) || (*(int *)(param_1 + 0x318) == 2)) {
            *piVar1 = 0x103;
            bVar5 = false;
          }
          else {
            FUN_01696200(param_1,1);
            if (*(short *)(param_1 + 0x30) == 0x3d) {
              *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
              *piVar1 = 0x118;
              FUN_004169a0(&local_208,&local_89);
              FUN_00416780(&local_210,*(undefined2 *)(param_1 + 0x30));
              FUN_00416ad0(&local_208,local_210);
              FUN_00416910(local_1a0,local_208,0xff);
              FUN_00415020(&local_89,local_1a0,0x50);
            }
            else {
              *piVar1 = 0x103;
              bVar5 = false;
            }
          }
          goto LAB_01697a1f;
        }
        if (uVar2 == 0x26) {
          if (*(int *)(param_1 + 0x318) == 0) {
            *piVar1 = 0x103;
            bVar5 = false;
          }
          else {
            *piVar1 = 0x11c;
          }
          goto LAB_01697a1f;
        }
      }
      else {
        if (uVar2 == 0x28) {
          *piVar1 = 0x106;
          *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
          goto LAB_01697a1f;
        }
        if (uVar2 == 0x29) {
          if (*(int *)(param_1 + 0x318) == 0) {
            *piVar1 = 0x107;
          }
          else {
            *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + -1;
            if (*(int *)(param_1 + 0x324) < 0) {
              *piVar1 = 0x166;
            }
            else {
              *piVar1 = 0x107;
            }
          }
          goto LAB_01697a1f;
        }
      }
    }
    else if (uVar2 < 0x2f) {
      if (uVar2 == 0x2e) {
        if (*(int *)(param_1 + 0x318) == 0) {
          *piVar1 = 0x145;
        }
        else {
          *piVar1 = 0x103;
          bVar5 = false;
        }
        goto LAB_01697a1f;
      }
      if (uVar2 == 0x2b) {
        *piVar1 = 0x10e;
        goto LAB_01697a1f;
      }
      if (uVar2 == 0x2c) {
        *piVar1 = 0x109;
        if (*(char *)(param_1 + 0x339) != '\0') {
          *(undefined1 *)(param_1 + 0x339) = 0;
        }
        goto LAB_01697a1f;
      }
      if (uVar2 == 0x2d) {
        *piVar1 = 0x10f;
        goto LAB_01697a1f;
      }
    }
    else {
      if (uVar2 == 0x2f) {
        *piVar1 = 0x111;
        goto LAB_01697a1f;
      }
      if (uVar2 == 0x3a) {
        if (*(int *)(param_1 + 0x318) == 2) {
          *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + -1;
          if (*(int *)(param_1 + 0x328) < 0) {
            *piVar1 = 0x176;
          }
          else {
            *piVar1 = 0x164;
          }
        }
        else if (*(int *)(param_1 + 0x318) == 1) {
          *piVar1 = 0x103;
          bVar5 = false;
        }
        else {
          FUN_01696200(param_1,1);
          if (*(short *)(param_1 + 0x30) == 0x3d) {
            *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
            *piVar1 = 0x108;
            FUN_004169a0(&local_1d8,&local_89);
            FUN_00416780(&local_1e0,*(undefined2 *)(param_1 + 0x30));
            FUN_00416ad0(&local_1d8,local_1e0);
            FUN_00416910(local_1a0,local_1d8,0xff);
            FUN_00415020(&local_89,local_1a0,0x50);
          }
          else {
            *piVar1 = 0x103;
            bVar5 = false;
          }
        }
        goto LAB_01697a1f;
      }
    }
  }
  else if (uVar2 < 0x5f) {
    if (uVar2 == 0x5e) {
      if ((*(int *)(param_1 + 0x318) == 0) || (*(int *)(param_1 + 0x318) == 2)) {
        *piVar1 = 0x112;
      }
      else if ((*(char *)(param_1 + 0x339) == '\0') && (*(int *)(param_1 + 0x318) != 3)) {
        *piVar1 = 0x15c;
      }
      else {
        *piVar1 = 0x15d;
      }
      goto LAB_01697a1f;
    }
    if (uVar2 < 0x40) {
      if (uVar2 == 0x3f) {
        if (*(int *)(param_1 + 0x318) == 2) {
          *piVar1 = 0x165;
          *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
        }
        else {
          *piVar1 = 0x103;
          bVar5 = false;
        }
        goto LAB_01697a1f;
      }
      if (uVar2 == 0x3c) {
        FUN_01696200(param_1,1);
        sVar3 = *(short *)(param_1 + 0x30);
        if (sVar3 == 0x3e) {
          if (*(int *)(param_1 + 0x318) == 0) {
            *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
            *piVar1 = 0x118;
            FUN_004169a0(&local_1b8,&local_89);
            FUN_00416780(&local_1c0,*(undefined2 *)(param_1 + 0x30));
            FUN_00416ad0(&local_1b8,local_1c0);
            FUN_00416910(local_1a0,local_1b8,0xff);
            FUN_00415020(&local_89,local_1a0,0x50);
          }
          else {
            *piVar1 = 0x103;
            bVar5 = false;
          }
        }
        else if (sVar3 == 0x3d) {
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
          *piVar1 = 0x116;
          FUN_004169a0(&local_1c8,&local_89);
          FUN_00416780(&local_1d0,*(undefined2 *)(param_1 + 0x30));
          FUN_00416ad0(&local_1c8,local_1d0);
          FUN_00416910(local_1a0,local_1c8,0xff);
          FUN_00415020(&local_89,local_1a0,0x50);
        }
        else if (sVar3 == DAT_01f80be8) {
          *piVar1 = 0x103;
          bVar5 = false;
        }
        else {
          *piVar1 = 0x117;
          bVar5 = false;
        }
        goto LAB_01697a1f;
      }
      if (uVar2 == 0x3d) {
        iVar4 = *(int *)(param_1 + 0x318);
        if (((iVar4 == 0) || (iVar4 == 2)) || (iVar4 == 3)) {
          *piVar1 = 0x113;
          *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x20);
        }
        else {
          FUN_01696200(param_1,1);
          if (*(short *)(param_1 + 0x30) == 0x3d) {
            *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
            *piVar1 = 0x113;
            FUN_004169a0(&local_1f8,&local_89);
            FUN_00416780(&local_200,*(undefined2 *)(param_1 + 0x30));
            FUN_00416ad0(&local_1f8,local_200);
            FUN_00416910(local_1a0,local_1f8,0xff);
            FUN_00415020(&local_89,local_1a0,0x50);
          }
          else {
            *piVar1 = 0x103;
            bVar5 = false;
          }
        }
        goto LAB_01697a1f;
      }
      if (uVar2 == 0x3e) {
        FUN_01696200(param_1,1);
        if (*(short *)(param_1 + 0x30) == 0x3d) {
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
          *piVar1 = 0x114;
          FUN_004169a0(&local_1e8,&local_89);
          FUN_00416780(&local_1f0,*(undefined2 *)(param_1 + 0x30));
          FUN_00416ad0(&local_1e8,local_1f0);
          FUN_00416910(local_1a0,local_1e8,0xff);
          FUN_00415020(&local_89,local_1a0,0x50);
        }
        else if (*(short *)(param_1 + 0x30) == DAT_01f80be8) {
          *piVar1 = 0x103;
          bVar5 = false;
        }
        else {
          *piVar1 = 0x115;
          bVar5 = false;
        }
        goto LAB_01697a1f;
      }
    }
    else {
      if (uVar2 == 0x5b) {
        if (*(int *)(param_1 + 0x318) == 0) {
          *piVar1 = 0x10c;
        }
        else {
          *piVar1 = 0x103;
          bVar5 = false;
        }
        goto LAB_01697a1f;
      }
      if (uVar2 == 0x5d) {
        if (*(int *)(param_1 + 0x318) == 0) {
          *piVar1 = 0x10d;
        }
        else {
          *piVar1 = 0x103;
          bVar5 = false;
        }
        goto LAB_01697a1f;
      }
    }
  }
  else if (uVar2 < 0x7e) {
    if (uVar2 == 0x7d) {
      if (*(int *)(param_1 + 0x318) == 3) {
        *piVar1 = 0x17d;
      }
      else {
        *piVar1 = 0x103;
        bVar5 = false;
      }
      goto LAB_01697a1f;
    }
    if (uVar2 == 0x7b) {
      if (*(int *)(param_1 + 0x318) == 3) {
        *piVar1 = 0x17c;
      }
      else {
        *piVar1 = 0x103;
        bVar5 = false;
      }
      goto LAB_01697a1f;
    }
    if (uVar2 == 0x7c) {
      if (*(int *)(param_1 + 0x318) == 0) {
        *piVar1 = 0x103;
        bVar5 = false;
      }
      else {
        *piVar1 = 0x11d;
      }
      goto LAB_01697a1f;
    }
  }
  else {
    if (uVar2 == 0x7e) {
      if (*(int *)(param_1 + 0x318) == 0) {
        *piVar1 = 0x103;
        bVar5 = false;
      }
      else {
        *piVar1 = 0x11b;
      }
      goto LAB_01697a1f;
    }
    if (uVar2 == 0xff) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        *piVar1 = -1;
      }
      else {
        *piVar1 = 0x103;
      }
      goto LAB_01697a1f;
    }
  }
  *piVar1 = 0x103;
  bVar5 = false;
LAB_01697a1f:
  iVar4 = *piVar1;
  if (iVar4 == 0x10b) {
    local_89 = 0x454e494c57454e07;
  }
  if (iVar4 == -1) {
    local_89 = CONCAT44(local_89._4_4_,0x504f4503);
  }
  if (iVar4 == -2) {
    local_89 = 0x454b4f545f4f4e08;
    uStack_81 = 0x4e;
  }
  FUN_00414ff0(lVar6 + 0xc,&local_89);
  if (bVar5) {
    FUN_01696200(param_1,1);
  }
  FUN_00c53240(*(undefined8 *)(param_1 + 0x38),lVar6,param_1 + 0x20);
  FUN_00414560(&local_210,0xe);
  FUN_00414480(local_a0);
  return;
}

