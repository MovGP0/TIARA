/* Ghidra address: 00ab4960 */
/* Ghidra symbol: FUN_00ab4960 */


void FUN_00ab4960(longlong param_1)

{
  int iVar1;
  undefined7 uVar3;
  longlong lVar2;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_38 [40];
  
  uVar3 = (undefined7)((ulonglong)param_1 >> 8);
  if (*(byte *)(param_1 + 0x128) < 8) {
    bVar6 = ((int)CONCAT71(uVar3,1) << (*(byte *)(param_1 + 0x128) & 0x1f) & 4U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x118));
    iVar1 = 0;
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0xd0) + -4);
    }
    if (*(int *)(lVar2 + 0x30) == iVar1) {
      *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
    }
    FUN_00416ad0(param_1 + 0xd0,&DAT_00ab4ed8);
    iVar1 = 0;
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0xd0) + -4);
    }
    FUN_00ab50a0(param_1,iVar1 + 500);
    lVar2 = *(longlong *)(param_1 + 0xd0);
    iVar1 = 0;
    if (lVar2 != 0) {
      iVar1 = *(int *)(lVar2 + -4);
    }
    iVar5 = 0;
    if (lVar2 != 0) {
      iVar5 = *(int *)(lVar2 + -4);
    }
    *(int *)(*(longlong *)(param_1 + 0x108) + (longlong)(iVar1 + -1) * 4) =
         *(int *)(*(longlong *)(param_1 + 0x108) + (longlong)(iVar5 + -2) * 4) + 1;
  }
  else {
    while( true ) {
      iVar1 = 0;
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0xd0) + -4);
      }
      if ((iVar1 < 1) || (**(short **)(param_1 + 0xd0) != 0x20)) break;
      FUN_00ab4810(auStack_38,1);
    }
    iVar1 = FUN_00a71890(&DAT_00ab4ee8,*(undefined8 *)(param_1 + 0xd0));
    while (0 < iVar1) {
      FUN_00ab4810(auStack_38,iVar1);
      if ((1 < iVar1) && (*(char *)(*(longlong *)(param_1 + 0xe0) + (longlong)(iVar1 + -2)) != '\0')
         ) {
        *(undefined1 *)(*(longlong *)(param_1 + 0xe0) + (longlong)(iVar1 + -2)) = 2;
      }
      iVar1 = FUN_00a71890(&DAT_00ab4ee8,*(undefined8 *)(param_1 + 0xd0));
    }
    if (*(byte *)(param_1 + 0x128) < 8) {
      bVar6 = ((int)CONCAT71(uVar3,1) << (*(byte *)(param_1 + 0x128) & 0x1f) & 0x13U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      while( true ) {
        iVar1 = 0;
        if (*(longlong *)(param_1 + 0xd0) != 0) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0xd0) + -4);
        }
        if ((iVar1 < 1) || (**(short **)(param_1 + 0xd0) != 0x20)) break;
        FUN_00ab4810(auStack_38,1);
      }
      iVar1 = FUN_00a71890(&DAT_00ab4efc,*(undefined8 *)(param_1 + 0xd0));
      while (0 < iVar1) {
        if (*(char *)(*(longlong *)(param_1 + 0xe0) + (longlong)(iVar1 + -1)) == '\0') {
          FUN_00ab4810(auStack_38,iVar1);
        }
        else {
          FUN_00ab4810(auStack_38,iVar1 + 1);
        }
        iVar1 = FUN_00a71890(&DAT_00ab4efc,*(undefined8 *)(param_1 + 0xd0));
      }
      iVar1 = 0;
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0xd0) + -4);
      }
      iVar1 = iVar1 + -1;
      if (0 < iVar1) {
        do {
          if (*(short *)(*(longlong *)(param_1 + 0xd0) + -2 + (longlong)iVar1 * 2) == 4) {
            lVar2 = FUN_00ac5090(*(undefined8 *)(param_1 + 0xf8),iVar1 + -1);
            if (*(byte *)(lVar2 + 0x60) < 8) {
              bVar6 = ((int)CONCAT71((int7)((ulonglong)lVar2 >> 8),1) <<
                       (*(byte *)(lVar2 + 0x60) & 0x1f) & 0x60U) != 0;
            }
            else {
              bVar6 = false;
            }
            if ((bVar6) &&
               (*(short *)(*(longlong *)(param_1 + 0xd0) + -2 + (longlong)(iVar1 + 1) * 2) == 0x20))
            {
              FUN_00ab4810(auStack_38,iVar1 + 1);
            }
          }
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      iVar1 = FUN_00a71890(&DAT_00ab4f10,*(undefined8 *)(param_1 + 0xd0));
      while (0 < iVar1) {
        FUN_00ab4810(auStack_38,iVar1);
        iVar1 = FUN_00a71890(&DAT_00ab4f10,*(undefined8 *)(param_1 + 0xd0));
      }
      iVar1 = FUN_00a71890(&DAT_00ab4f24,*(undefined8 *)(param_1 + 0xd0));
      while (0 < iVar1) {
        FUN_00ab4810(auStack_38,iVar1 + 1);
        iVar1 = FUN_00a71890(&DAT_00ab4f24,*(undefined8 *)(param_1 + 0xd0));
      }
      iVar1 = 0;
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0xd0) + -4);
      }
      if (1 < iVar1) {
        iVar1 = 0;
        if (*(longlong *)(param_1 + 0xd0) != 0) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0xd0) + -4);
        }
        if (*(short *)(*(longlong *)(param_1 + 0xd0) + -2 + (longlong)iVar1 * 2) == 8) {
          uVar4 = 0;
          if (*(longlong *)(param_1 + 0xd0) != 0) {
            uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + -4);
          }
          FUN_00ab4810(auStack_38,uVar4);
        }
      }
      iVar1 = 0;
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0xd0) + -4);
      }
      if (1 < iVar1) {
        iVar1 = 0;
        if (*(longlong *)(param_1 + 0xd0) != 0) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0xd0) + -4);
        }
        if (*(short *)(*(longlong *)(param_1 + 0xd0) + -2 + (longlong)iVar1 * 2) == 0x20) {
          uVar4 = 0;
          if (*(longlong *)(param_1 + 0xd0) != 0) {
            uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + -4);
          }
          FUN_00ab4810(auStack_38,uVar4);
        }
      }
      iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0xd0),&LAB_00ab4f38);
      if (iVar1 == 0) {
        bVar6 = false;
      }
      else {
        iVar1 = 0;
        if (*(longlong *)(param_1 + 0xd0) != 0) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0xd0) + -4);
        }
        bVar6 = 0 < iVar1;
      }
      if (bVar6) {
        iVar1 = 0;
        if (*(longlong *)(param_1 + 0xd0) != 0) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0xd0) + -4);
        }
        if (*(short *)(*(longlong *)(param_1 + 0xd0) + -2 + (longlong)iVar1 * 2) != 0x20) {
          lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x118));
          iVar1 = 0;
          if (*(longlong *)(param_1 + 0xd0) != 0) {
            iVar1 = *(int *)(*(longlong *)(param_1 + 0xd0) + -4);
          }
          if (*(int *)(lVar2 + 0x30) == iVar1) {
            *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
          }
          FUN_00416ad0(param_1 + 0xd0,&DAT_00ab4ed8);
        }
      }
    }
  }
  FUN_00ab4f40(param_1);
  return;
}

