/* Ghidra address: 00466730 */
/* Ghidra symbol: FUN_00466730 */


void FUN_00466730(undefined8 param_1,ushort *param_2,undefined2 param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 auStack_48 [40];
  
  uVar1 = *param_2;
  if (uVar1 < 0xd) {
    if (uVar1 == 0xc) {
      FUN_00466730(param_1,*(undefined8 *)(param_2 + 4),0);
      return;
    }
    if (uVar1 < 6) {
      if (uVar1 == 5) {
        FUN_00466170(auStack_48,param_1,*(undefined8 *)(param_2 + 4));
        return;
      }
      if (uVar1 < 3) {
        if (uVar1 == 2) {
          uVar1 = param_2[4];
          if ((-0x81 < (short)uVar1) && ((short)uVar1 < 0x100)) {
            FUN_00415dd0(param_1,*(undefined8 *)(&DAT_02010db8 + (longlong)(short)uVar1 * 8),0);
            return;
          }
          FUN_00465fb0(auStack_48,param_1,(longlong)(short)uVar1);
          return;
        }
        if (uVar1 == 0) {
          FUN_004144d0(param_1);
          return;
        }
        if (uVar1 == 1) {
          if (DAT_01dc436a != '\0') {
            FUN_00460110(1,0x100);
          }
          FUN_00415dd0(param_1,DAT_01dc4370,0);
          return;
        }
      }
      else {
        if (uVar1 == 3) {
          iVar2 = *(int *)(param_2 + 4);
          if ((-0x81 < iVar2) && (iVar2 < 0x100)) {
            FUN_00415dd0(param_1,*(undefined8 *)(&DAT_02010db8 + (longlong)iVar2 * 8),0);
            return;
          }
          FUN_00465fb0(auStack_48,param_1,iVar2);
          return;
        }
        if (uVar1 == 4) {
          FUN_00466170(auStack_48,param_1,(double)*(float *)(param_2 + 4));
          return;
        }
      }
    }
    else if (uVar1 < 9) {
      if (uVar1 == 8) {
        lVar3 = *(longlong *)(param_2 + 4);
        uVar6 = 0;
        if (lVar3 != 0) {
          uVar6 = *(uint *)(lVar3 + -4) >> 1;
        }
        FUN_004173c0(param_1,lVar3,uVar6,param_3);
        return;
      }
      if (uVar1 == 6) {
        FUN_00466220(auStack_48,param_1,*(undefined8 *)(param_2 + 4));
        return;
      }
      if (uVar1 == 7) {
        FUN_00466290(auStack_48,param_1,*(undefined8 *)(param_2 + 4));
        return;
      }
    }
    else {
      if (uVar1 == 9) {
LAB_00466b0f:
        FUN_00466300(auStack_48,param_1,param_2);
        return;
      }
      if (uVar1 == 0xb) {
        FUN_00415dd0(param_1,*(undefined8 *)
                              (&DAT_02010988 +
                              (ulonglong)DAT_01dc4379 * 8 + (ulonglong)(param_2[4] != 0) * 0x18),0);
        return;
      }
    }
  }
  else if (uVar1 < 0x15) {
    if (uVar1 == 0x14) {
      FUN_00466090(auStack_48,param_1,*(undefined8 *)(param_2 + 4));
      return;
    }
    if (uVar1 < 0x12) {
      if (uVar1 == 0x11) {
        FUN_00415dd0(param_1,*(undefined8 *)(&DAT_02010db8 + (ulonglong)(byte)param_2[4] * 8),0);
        return;
      }
      if (uVar1 == 0xd) goto LAB_00466b0f;
      if (uVar1 == 0x10) {
        FUN_00415dd0(param_1,*(undefined8 *)(&DAT_02010db8 + (longlong)(char)param_2[4] * 8),0);
        return;
      }
    }
    else {
      if (uVar1 == 0x12) {
        uVar1 = param_2[4];
        if (uVar1 < 0x100) {
          FUN_00415dd0(param_1,*(undefined8 *)(&DAT_02010db8 + (ulonglong)uVar1 * 8),0);
          return;
        }
        FUN_00466020(auStack_48,param_1,uVar1);
        return;
      }
      if (uVar1 == 0x13) {
        uVar6 = *(uint *)(param_2 + 4);
        if (uVar6 < 0x100) {
          FUN_00415dd0(param_1,*(undefined8 *)(&DAT_02010db8 + (ulonglong)uVar6 * 8),0);
          return;
        }
        FUN_00466020(auStack_48,param_1,uVar6);
        return;
      }
    }
  }
  else {
    if (uVar1 == 0x15) {
      FUN_00466100(auStack_48,param_1,*(undefined8 *)(param_2 + 4));
      return;
    }
    if (uVar1 == 0x100) {
      FUN_00414bf0(param_1,*(undefined8 *)(param_2 + 4));
      return;
    }
    if (uVar1 == 0x101) {
      FUN_00466420(auStack_48,param_1,param_2);
      return;
    }
    if (uVar1 == 0x102) {
      uVar7 = 0;
      if (*(longlong *)(param_2 + 4) != 0) {
        uVar7 = *(undefined4 *)(*(longlong *)(param_2 + 4) + -4);
      }
      uVar5 = FUN_00416740(*(undefined8 *)(param_2 + 4));
      FUN_004173c0(param_1,uVar5,uVar7,param_3);
      return;
    }
  }
  if ((uVar1 & 0x4000) == 0) {
    cVar4 = FUN_00466370(auStack_48,param_1,param_2);
    if (cVar4 == '\0') {
      FUN_00466300(auStack_48,param_1,param_2);
    }
  }
  else {
    FUN_004664a0(auStack_48,param_1,param_2);
  }
  return;
}

