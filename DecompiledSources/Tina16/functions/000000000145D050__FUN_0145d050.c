/* Ghidra address: 0145d050 */
/* Ghidra symbol: FUN_0145d050 */


void FUN_0145d050(longlong param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
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
  undefined8 local_10;
  
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_10 = 0;
  cVar1 = FUN_019b5b20(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0xe78));
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 8);
    while ((*(longlong *)(param_1 + 0x90) != 0 &&
           (*(char *)(*(longlong *)(param_1 + 0x130) + 0x92) == '\0'))) {
      bVar2 = **(char **)(param_1 + 0x90) - 8;
      if (bVar2 < 0xd8) {
        uVar4 = (ulonglong)bVar2 + 0x20;
        bVar5 = (*(byte *)(((longlong)uVar4 >> 3) + 0x145de68) >> (uVar4 & 7) & 1) != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0xa8);
        *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0x50) =
             *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 4);
        *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0x52) =
             *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 8);
        *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0x51) =
             *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x54);
        *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0x53) =
             *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x58);
        bVar2 = **(char **)(param_1 + 0x90) - 8;
        if (bVar2 < 8) {
          bVar5 = ((int)CONCAT71((int7)((ulonglong)*(char **)(param_1 + 0x90) >> 8),1) <<
                   (bVar2 & 0x1f) & 0xa0U) != 0;
        }
        else {
          bVar5 = false;
        }
        if (bVar5) {
          *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0x54) = 0;
        }
        else {
          *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0x54) = 1;
        }
        *(undefined2 *)(*(longlong *)(param_1 + 0x130) + 0x90) = **(undefined2 **)(param_1 + 0x100);
        FUN_0145cc20(param_1);
        bVar2 = **(char **)(param_1 + 0x90) - 8;
        if (bVar2 < 8) {
          bVar5 = ((int)CONCAT71((int7)((ulonglong)*(char **)(param_1 + 0x90) >> 8),1) <<
                   (bVar2 & 0x1f) & 0x60U) != 0;
        }
        else {
          bVar5 = false;
        }
        if ((!bVar5) || (*(double *)(param_1 + 0xe8) == 0.0)) {
          bVar2 = **(char **)(param_1 + 0x90) - 8;
          if (bVar2 < 0xd8) {
            uVar4 = (ulonglong)bVar2 + 8;
            bVar5 = ((byte)(&DAT_0145de88)[(longlong)uVar4 >> 3] >> (uVar4 & 7) & 1) != 0;
          }
          else {
            bVar5 = false;
          }
          if ((!bVar5) || (*(double *)(param_1 + 0xf0) == 0.0)) goto LAB_0145d481;
        }
        *(undefined1 *)(param_1 + 0x8f) = *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0xb4);
        *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0xb4) = 1;
        FUN_00efdf60(100.0 / (double)*(int *)(*(longlong *)(param_1 + 0x130) + 0xb38),
                     *(undefined8 *)(param_1 + 0x130));
        *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0xb4) = *(undefined1 *)(param_1 + 0x8f);
        uVar6 = FUN_019b9740(*(undefined8 *)(param_1 + 0x130));
        *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0xa0) = uVar6;
        bVar2 = **(char **)(param_1 + 0x90) - 8;
        if (bVar2 < 8) {
          bVar5 = ((int)CONCAT71((int7)((ulonglong)*(char **)(param_1 + 0x90) >> 8),1) <<
                   (bVar2 & 0x1f) & 0x60U) != 0;
        }
        else {
          bVar5 = false;
        }
        if (bVar5) {
          *(double *)(*(longlong *)(param_1 + 0x130) + 0xa8) =
               *(double *)(*(longlong *)(param_1 + 0x130) + 0xa8) +
               *(double *)(*(longlong *)(param_1 + 0x130) + 0xa0) * *(double *)(param_1 + 0xe8);
        }
        else {
          *(double *)(*(longlong *)(param_1 + 0x130) + 0xa8) =
               *(double *)(*(longlong *)(param_1 + 0x130) + 0xa8) +
               *(double *)(*(longlong *)(param_1 + 0x130) + 0xa0) * *(double *)(param_1 + 0xf0);
        }
      }
LAB_0145d481:
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0xb0);
    }
    FUN_0145cb90(param_1);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 8);
    while ((*(longlong *)(param_1 + 0x90) != 0 &&
           (*(char *)(*(longlong *)(param_1 + 0x130) + 0x92) == '\0'))) {
      bVar2 = **(char **)(param_1 + 0x90) - 8;
      if (bVar2 < 0xd8) {
        uVar4 = (ulonglong)bVar2 + 8;
        bVar5 = ((byte)(&DAT_0145de88)[(longlong)uVar4 >> 3] >> (uVar4 & 7) & 1) != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0xa8);
        *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0x50) =
             *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 4);
        *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0x52) =
             *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 8);
        *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0x51) =
             *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x54);
        *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0x53) =
             *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x58);
        if (**(char **)(param_1 + 0x90) == '\x0f') {
          *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0x54) = 0;
        }
        else {
          *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0x54) = 1;
        }
        *(undefined2 *)(*(longlong *)(param_1 + 0x130) + 0x90) = **(undefined2 **)(param_1 + 0x100);
        FUN_0145cc20(param_1);
        FUN_019b6320(&local_10);
        if ((*(char *)(*(longlong *)(param_1 + 0x100) + 2) != '\0') &&
           (1 < *(int *)(*(longlong *)(param_1 + 0x130) + 0xb38))) {
          FUN_004169a0(&local_28,*(longlong *)(param_1 + 0x100) + 2);
          FUN_00416cd0(local_20,3,PTR_u_Source__01f4bea0,local_28,&LAB_0145deb0);
          FUN_019b6e50(&local_10,local_20[0],*(undefined8 *)(param_1 + 0x130));
        }
        if (*(char *)(*(longlong *)(param_1 + 0x100) + 0x38) == '\x03') {
          FUN_00efa6e0(&local_38,*(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0x68),
                       *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0xe98));
          FUN_00416ba0(&local_30,PTR_u_Time_shift__01f4bea8,local_38);
          FUN_019b6e50(&local_10,local_30,*(undefined8 *)(param_1 + 0x130));
        }
        iVar3 = FUN_019b5ce0(local_10,*(undefined8 *)(param_1 + 0x130));
        if (0 < iVar3) {
          FUN_019b9050(local_10,*(undefined8 *)(param_1 + 0x130));
        }
        FUN_0145ce70(param_1,100.0 / (double)*(int *)(*(longlong *)(param_1 + 0x130) + 0xb38));
      }
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0xb0);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 8);
    while ((*(longlong *)(param_1 + 0x90) != 0 &&
           (*(char *)(*(longlong *)(param_1 + 0x130) + 0x92) == '\0'))) {
      bVar2 = **(char **)(param_1 + 0x90) - 8;
      if (bVar2 < 0xd8) {
        uVar4 = (ulonglong)bVar2 + 0x20;
        bVar5 = (*(byte *)(((longlong)uVar4 >> 3) + 0x145de68) >> (uVar4 & 7) & 1) != 0;
      }
      else {
        bVar5 = false;
      }
      if ((bVar5) &&
         (cVar1 = FUN_019b9db0(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x130)),
         cVar1 != '\0')) {
        *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0xa8);
        *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0x50) =
             *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 4);
        *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0x52) =
             *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 8);
        *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0x51) =
             *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x54);
        *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0x53) =
             *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x58);
        bVar2 = **(char **)(param_1 + 0x90) - 8;
        if (bVar2 < 8) {
          bVar5 = ((int)CONCAT71((int7)((ulonglong)*(char **)(param_1 + 0x90) >> 8),1) <<
                   (bVar2 & 0x1f) & 0xa0U) != 0;
        }
        else {
          bVar5 = false;
        }
        if (bVar5) {
          *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0x54) = 0;
        }
        else {
          *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0x54) = 1;
        }
        *(undefined2 *)(*(longlong *)(param_1 + 0x130) + 0x90) = **(undefined2 **)(param_1 + 0x100);
        FUN_0145cc20(param_1);
        bVar2 = **(char **)(param_1 + 0x90) - 8;
        if (bVar2 < 8) {
          bVar5 = ((int)CONCAT71((int7)((ulonglong)*(char **)(param_1 + 0x90) >> 8),1) <<
                   (bVar2 & 0x1f) & 0x60U) != 0;
        }
        else {
          bVar5 = false;
        }
        if (bVar5) {
          *(undefined1 *)(param_1 + 0xff) = 2;
          *(undefined8 *)(param_1 + 0xe0) = 0;
          FUN_019b6320(&local_10);
          if ((*(char *)(*(longlong *)(param_1 + 0x100) + 2) != '\0') &&
             (1 < *(int *)(*(longlong *)(param_1 + 0x130) + 0xb38))) {
            FUN_004169a0(&local_48,*(longlong *)(param_1 + 0x100) + 2);
            FUN_00416ba0(&local_40,PTR_u_Source__01f4bea0,local_48);
            FUN_019b6e50(&local_10,local_40,*(undefined8 *)(param_1 + 0x130));
          }
          if (*(char *)(*(longlong *)(param_1 + 0x100) + 0x38) == '\x03') {
            FUN_00efa6e0(&local_58,*(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0x68),
                         *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0xe98));
            FUN_00416cd0(&local_50,3,&LAB_0145deb0,PTR_u_Time_shift__01f4bea8,local_58);
            FUN_019b6e50(&local_10,local_50,*(undefined8 *)(param_1 + 0x130));
          }
          iVar3 = FUN_019b5ce0(local_10,*(undefined8 *)(param_1 + 0x130));
          if (0 < iVar3) {
            FUN_019b9050(local_10,*(undefined8 *)(param_1 + 0x130));
          }
          FUN_0145ce70(param_1,100.0 / (double)*(int *)(*(longlong *)(param_1 + 0x130) + 0xb38));
        }
        else {
          FUN_019b6320(&local_10);
          if ((*(char *)(*(longlong *)(param_1 + 0x100) + 2) != '\0') &&
             (1 < *(int *)(*(longlong *)(param_1 + 0x130) + 0xb38))) {
            FUN_004169a0(&local_68,*(longlong *)(param_1 + 0x100) + 2);
            FUN_00416ba0(&local_60,PTR_u_Source__01f4bea0,local_68);
            FUN_019b6e50(&local_10,local_60,*(undefined8 *)(param_1 + 0x130));
          }
          if (*(char *)(*(longlong *)(param_1 + 0x100) + 0x38) == '\x03') {
            FUN_00efa6e0(&local_78,*(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0x68),
                         *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0xe98));
            FUN_00416cd0(&local_70,3,&LAB_0145deb0,PTR_u_Time_shift__01f4bea8,local_78);
            FUN_019b6e50(&local_10,local_70,*(undefined8 *)(param_1 + 0x130));
          }
          iVar3 = FUN_019b5ce0(local_10,*(undefined8 *)(param_1 + 0x130));
          if (0 < iVar3) {
            FUN_019b9050(local_10,*(undefined8 *)(param_1 + 0x130));
          }
          FUN_0145ce70(param_1,100.0 / (double)*(int *)(*(longlong *)(param_1 + 0x130) + 0xb38));
          if (*(double *)(param_1 + 0xf0) != 0.0) {
            *(undefined1 *)(param_1 + 0xff) = 2;
            *(undefined8 *)(param_1 + 0xe0) = 0;
            *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xf0);
            FUN_019b6320(&local_10);
            if ((*(char *)(*(longlong *)(param_1 + 0x100) + 2) != '\0') &&
               (1 < *(int *)(*(longlong *)(param_1 + 0x130) + 0xb38))) {
              FUN_004169a0(&local_88,*(longlong *)(param_1 + 0x100) + 2);
              FUN_00416ba0(&local_80,PTR_u_Source__01f4bea0,local_88);
              FUN_019b6e50(&local_10,local_80,*(undefined8 *)(param_1 + 0x130));
            }
            if (*(char *)(*(longlong *)(param_1 + 0x100) + 0x38) == '\x03') {
              FUN_00efa6e0(&local_98,*(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0x68),
                           *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0xe98));
              FUN_00416cd0(&local_90,3,&LAB_0145deb0,PTR_u_Time_shift__01f4bea8,local_98);
              FUN_019b6e50(&local_10,local_90,*(undefined8 *)(param_1 + 0x130));
            }
            iVar3 = FUN_019b5ce0(local_10,*(undefined8 *)(param_1 + 0x130));
            if (0 < iVar3) {
              FUN_019b9050(local_10,*(undefined8 *)(param_1 + 0x130));
            }
            FUN_0145ce70(param_1,100.0 / (double)*(int *)(*(longlong *)(param_1 + 0x130) + 0xb38));
          }
        }
      }
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0xb0);
    }
  }
  FUN_019b6320(&local_10);
  FUN_00414560(&local_98,0x10);
  return;
}

