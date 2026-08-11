/* Ghidra address: 00467310 */
/* Ghidra symbol: FUN_00467310 */


void FUN_00467310(undefined8 param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined1 auStack_38 [32];
  
  uVar1 = *param_2;
  if (uVar1 < 0xd) {
    if (uVar1 == 0xc) {
      FUN_00467310(param_1,*(undefined8 *)(param_2 + 4));
      return;
    }
    if (uVar1 < 6) {
      if (uVar1 == 5) {
        FUN_00466d70(auStack_38,param_1,*(undefined8 *)(param_2 + 4));
        return;
      }
      if (uVar1 < 3) {
        if (uVar1 == 2) {
          uVar1 = param_2[4];
          if ((-0x81 < (short)uVar1) && ((short)uVar1 < 0x100)) {
            FUN_004168e0(param_1,*(undefined8 *)(&DAT_02010db8 + (longlong)(short)uVar1 * 8));
            return;
          }
          FUN_00466bb0(auStack_38,param_1,(longlong)(short)uVar1);
          return;
        }
        if (uVar1 == 0) {
          FUN_00414520(param_1);
          return;
        }
        if (uVar1 == 1) {
          if (DAT_01dc436a != '\0') {
            FUN_00460110(1,8);
          }
          FUN_004168e0(param_1,DAT_01dc4370);
          return;
        }
      }
      else {
        if (uVar1 == 3) {
          iVar2 = *(int *)(param_2 + 4);
          if ((-0x81 < iVar2) && (iVar2 < 0x100)) {
            FUN_004168e0(param_1,*(undefined8 *)(&DAT_02010db8 + (longlong)iVar2 * 8));
            return;
          }
          FUN_00466bb0(auStack_38,param_1,iVar2);
          return;
        }
        if (uVar1 == 4) {
          FUN_00466d70(auStack_38,param_1,(double)*(float *)(param_2 + 4));
          return;
        }
      }
    }
    else if (uVar1 < 9) {
      if (uVar1 == 8) {
        FUN_00414b90(param_1,*(undefined8 *)(param_2 + 4));
        return;
      }
      if (uVar1 == 6) {
        FUN_00466e20(auStack_38,param_1,*(undefined8 *)(param_2 + 4));
        return;
      }
      if (uVar1 == 7) {
        FUN_00466e90(auStack_38,param_1,*(undefined8 *)(param_2 + 4));
        return;
      }
    }
    else {
      if (uVar1 == 9) {
LAB_004676b3:
        FUN_00466f00(auStack_38,param_1,param_2);
        return;
      }
      if (uVar1 == 0xb) {
        FUN_004168e0(param_1,*(undefined8 *)
                              (&DAT_02010988 +
                              (ulonglong)DAT_01dc4379 * 8 + (ulonglong)(param_2[4] != 0) * 0x18));
        return;
      }
    }
  }
  else if (uVar1 < 0x15) {
    if (uVar1 == 0x14) {
      FUN_00466c90(auStack_38,param_1,*(undefined8 *)(param_2 + 4));
      return;
    }
    if (uVar1 < 0x12) {
      if (uVar1 == 0x11) {
        FUN_004168e0(param_1,*(undefined8 *)(&DAT_02010db8 + (ulonglong)(byte)param_2[4] * 8));
        return;
      }
      if (uVar1 == 0xd) goto LAB_004676b3;
      if (uVar1 == 0x10) {
        FUN_004168e0(param_1,*(undefined8 *)(&DAT_02010db8 + (longlong)(char)param_2[4] * 8));
        return;
      }
    }
    else {
      if (uVar1 == 0x12) {
        uVar1 = param_2[4];
        if (uVar1 < 0x100) {
          FUN_004168e0(param_1,*(undefined8 *)(&DAT_02010db8 + (ulonglong)uVar1 * 8));
          return;
        }
        FUN_00466c20(auStack_38,param_1,uVar1);
        return;
      }
      if (uVar1 == 0x13) {
        uVar3 = *(uint *)(param_2 + 4);
        if (uVar3 < 0x100) {
          FUN_004168e0(param_1,*(undefined8 *)(&DAT_02010db8 + (ulonglong)uVar3 * 8));
          return;
        }
        FUN_00466c20(auStack_38,param_1,uVar3);
        return;
      }
    }
  }
  else {
    if (uVar1 == 0x15) {
      FUN_00466d00(auStack_38,param_1,*(undefined8 *)(param_2 + 4));
      return;
    }
    if (uVar1 == 0x100) {
      FUN_00415f40(param_1,*(undefined8 *)(param_2 + 4));
      return;
    }
    if (uVar1 == 0x101) {
      FUN_00467020(auStack_38,param_1,param_2);
      return;
    }
    if (uVar1 == 0x102) {
      FUN_004168e0(param_1,*(undefined8 *)(param_2 + 4));
      return;
    }
  }
  if ((uVar1 & 0x4000) == 0) {
    cVar4 = FUN_00466f70(auStack_38,param_1,param_2);
    if (cVar4 == '\0') {
      FUN_00466f00(auStack_38,param_1,param_2);
    }
  }
  else {
    FUN_004670a0(auStack_38,param_1,param_2);
  }
  return;
}

