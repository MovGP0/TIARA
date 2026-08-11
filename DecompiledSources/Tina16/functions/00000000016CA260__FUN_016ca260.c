/* Ghidra address: 016ca260 */
/* Ghidra symbol: FUN_016ca260 */


void FUN_016ca260(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar8;
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar9;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  bVar1 = *(byte *)(param_2 + 0x28);
  uVar6 = (ulonglong)bVar1;
  if (uVar6 < 0x4e) {
    if (uVar6 < 0x4a) {
      if (uVar6 != 0x49) {
        if (uVar6 != 0x42) {
          if (uVar6 == 0x43) {
LAB_016ca40c:
            FUN_004169a0(local_20,*(undefined8 *)(param_2 + 8));
            uVar4 = FUN_014dc140(*(undefined8 *)(param_1 + 0xd0),local_20[0],bVar1,
                                 *(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x40),
                                 *(undefined8 *)(param_1 + 0xc0));
            *(undefined8 *)(param_2 + 0x48) = uVar4;
            goto LAB_016caac2;
          }
          if (uVar6 == 0x44) goto LAB_016ca6d1;
          if (3 < uVar6 - 0x45) goto LAB_016caac2;
        }
        cVar2 = FUN_016b97d0(param_2);
        if (cVar2 == '\0') {
          uVar4 = *(undefined8 *)(param_2 + 8);
          FUN_004169a0(&local_30,uVar4);
          if (*(byte *)(param_1 + 0xe0) < 0x10) {
            bVar7 = ((int)CONCAT62((int6)((ulonglong)uVar4 >> 0x10),1) <<
                     (*(byte *)(param_1 + 0xe0) & 0x1f) & 0x8001U) != 0;
          }
          else {
            bVar7 = false;
          }
          if (((bVar7) || (*(longlong *)(param_1 + 0xd8) == 0)) ||
             (*(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x488) == 0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = 1;
          }
          uVar4 = FUN_014dca10(*(undefined8 *)(param_1 + 0xd0),local_30,
                               *(undefined1 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30),
                               *(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x58),
                               *(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x10),
                               *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x38),
                               *(undefined8 *)(param_1 + 0xc0),uVar5);
          *(undefined8 *)(param_2 + 0x48) = uVar4;
        }
        else {
          FUN_004169a0(&local_28,*(undefined8 *)(param_2 + 8));
          uVar4 = FUN_014df1e0(*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),
                               local_28,*(undefined8 *)(param_1 + 200),
                               *(undefined1 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30),
                               *(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x18),
                               *(undefined1 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xc0));
          *(undefined8 *)(param_2 + 0x48) = uVar4;
        }
        goto LAB_016caac2;
      }
LAB_016ca630:
      FUN_004169a0(&local_38,*(undefined8 *)(param_2 + 8));
      uVar4 = FUN_014e06a0(*(undefined8 *)(param_1 + 0xd0),local_38,uVar6,
                           *(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x40),
                           *(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                           *(undefined1 *)(param_1 + 0xe0),*(longlong *)(param_1 + 0xc0) + 0x9a6,
                           *(undefined8 *)(param_1 + 0xc0));
      *(undefined8 *)(param_2 + 0x48) = uVar4;
      goto LAB_016caac2;
    }
    if (uVar6 != 0x4a) {
      if (uVar6 == 0x4b) {
        if (*(longlong *)(param_2 + 0x10) == 0) {
          FUN_004169a0(&local_48,*(undefined8 *)(param_2 + 8));
          uVar4 = FUN_014dc280(*(undefined8 *)(param_1 + 0xd0),local_48,
                               *(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x58));
          *(undefined8 *)(param_2 + 0x48) = uVar4;
        }
        else {
          FUN_004169a0(&local_50,*(undefined8 *)(param_2 + 8));
          uVar4 = FUN_014dd6c0(*(undefined8 *)(param_1 + 0xd0),local_50,
                               *(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x40),
                               *(longlong *)(param_1 + 0xc0) + 0x998,*(undefined8 *)(param_1 + 0xc0)
                              );
          *(undefined8 *)(param_2 + 0x48) = uVar4;
        }
        goto LAB_016caac2;
      }
      if (uVar6 == 0x4c) goto LAB_016ca40c;
      if (uVar6 != 0x4d) goto LAB_016caac2;
    }
  }
  else {
    if (0x54 < uVar6) {
      if (uVar6 == 0x55) {
        if ((*(char *)(*(longlong *)(param_1 + 0xc0) + 0x9a9) == '\0') ||
           (iVar3 = FUN_00414f50(*(undefined8 *)(param_2 + 0x58),&DAT_016cab5e,
                                 (ulonglong)**(byte **)(param_2 + 0x58) + 1), iVar3 == 0)) {
          FUN_004169a0(&local_70,*(undefined8 *)(param_2 + 8));
          uVar4 = FUN_014e19d0(*(undefined8 *)(param_1 + 0xd0),local_70,
                               *(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x40),
                               *(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x60),
                               CONCAT44(uVar8,*(undefined4 *)(param_2 + 0x68)),
                               CONCAT44(uVar9,*(undefined4 *)(param_2 + 0x6c)),
                               *(undefined1 *)(param_1 + 0x8f),*(undefined8 *)(param_1 + 0xc0));
          *(undefined8 *)(param_2 + 0x48) = uVar4;
        }
        goto LAB_016caac2;
      }
      if (uVar6 != 0x56) {
        if (uVar6 != 0x57) {
          if (uVar6 == 0x59) {
            FUN_004169a0(&local_78,*(undefined8 *)(param_2 + 8));
            uVar4 = FUN_014e11a0(*(undefined8 *)(param_1 + 0xd0),local_78,0x59,
                                 *(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x40),
                                 *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_1 + 0xc0));
            *(undefined8 *)(param_2 + 0x48) = uVar4;
          }
          goto LAB_016caac2;
        }
LAB_016ca884:
        FUN_004169a0(&local_60,*(undefined8 *)(param_2 + 8));
        uVar4 = FUN_014ddf60(*(undefined8 *)(param_1 + 0xd0),local_60,uVar6,
                             *(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x40),
                             *(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x18),
                             *(undefined8 *)(param_1 + 0xc0));
        *(undefined8 *)(param_2 + 0x48) = uVar4;
        goto LAB_016caac2;
      }
      goto LAB_016ca630;
    }
    if (uVar6 == 0x54) {
      FUN_004169a0(&local_58,*(undefined8 *)(param_2 + 8));
      uVar4 = FUN_014dc710(*(undefined8 *)(param_1 + 0xd0),local_58,*(undefined8 *)(param_2 + 0x30),
                           *(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_1 + 0xc0));
      *(undefined8 *)(param_2 + 0x48) = uVar4;
      goto LAB_016caac2;
    }
    if (uVar6 - 0x4e < 2) {
      FUN_004169a0(&local_68,*(undefined8 *)(param_2 + 8));
      uVar4 = FUN_014e34a0(*(undefined8 *)(param_1 + 0xd0),
                           *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 0x488),local_68,uVar6,
                           *(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x40),
                           *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x38),
                           *(undefined8 *)(param_1 + 0xc0),*(undefined1 *)(param_1 + 0x8f));
      *(undefined8 *)(param_2 + 0x48) = uVar4;
      goto LAB_016caac2;
    }
    if (uVar6 != 0x51) {
      if (uVar6 == 0x52) goto LAB_016ca40c;
      if (uVar6 != 0x53) goto LAB_016caac2;
      goto LAB_016ca884;
    }
  }
LAB_016ca6d1:
  FUN_004169a0(&local_40,*(undefined8 *)(param_2 + 8));
  uVar4 = FUN_014df1e0(*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),local_40,
                       *(undefined8 *)(param_1 + 200),bVar1,*(undefined8 *)(param_2 + 0x30),
                       *(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x18),
                       *(undefined1 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xc0));
  *(undefined8 *)(param_2 + 0x48) = uVar4;
LAB_016caac2:
  if ((*(char *)(*(longlong *)(param_1 + 0xc0) + 0x9a7) == '\0') &&
     ((*(char *)(param_2 + 0x28) != 'U' ||
      (iVar3 = FUN_00414f50(*(undefined8 *)(param_2 + 0x58),&DAT_016cab5e,
                            (ulonglong)**(byte **)(param_2 + 0x58) + 1), iVar3 != 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 0x9a7) = uVar5;
  FUN_00414560(&local_78,0xc);
  return;
}

