/* Ghidra address: 00534f00 */
/* Ghidra symbol: FUN_00534f00 */


ulonglong FUN_00534f00(byte *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  int *piVar4;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  uVar2 = (ulonglong)*param_1;
  if (0xd < uVar2) {
    if (uVar2 < 0x14) {
      if (uVar2 == 0x13) {
        return 8;
      }
      if (uVar2 != 0xe) {
        if (uVar2 != 0xf) {
          if (uVar2 == 0x10) {
            return 8;
          }
          if (1 < uVar2 - 0x11) {
            return 0;
          }
        }
        return 0xfffffff8;
      }
    }
    else {
      if (uVar2 == 0x14) {
        return 8;
      }
      if (uVar2 == 0x15) {
        return 8;
      }
      if (uVar2 != 0x16) {
        return 0;
      }
    }
    piVar4 = (int *)FUN_00589390();
    return (ulonglong)(uint)-*piVar4;
  }
  if (uVar2 == 0xd) {
    piVar4 = (int *)FUN_00589390();
    return (ulonglong)(uint)-*piVar4;
  }
  if (uVar2 < 8) {
    if (uVar2 == 7) {
      return 8;
    }
    if (uVar2 - 1 < 3) {
LAB_00535022:
      pbVar3 = (byte *)FUN_00589390();
      bVar1 = *pbVar3;
      if (bVar1 < 2) {
        return 1;
      }
      if ((byte)(bVar1 - 2) < 2) {
        return 2;
      }
      if (1 < (byte)(bVar1 - 4)) {
        return 0;
      }
      return 4;
    }
    if (uVar2 == 4) {
      pbVar3 = (byte *)FUN_00589390();
      bVar1 = *pbVar3;
      if (bVar1 < 3) {
        if (bVar1 == 2) {
          return 8;
        }
        if (bVar1 == 0) {
          return 4;
        }
        if (bVar1 == 1) {
          return 8;
        }
      }
      else {
        if (bVar1 == 3) {
          return 8;
        }
        if (bVar1 == 4) {
          return 8;
        }
      }
      return 0;
    }
    if (uVar2 == 5) {
      pbVar3 = (byte *)FUN_00589390();
      return (ulonglong)(-(uint)*pbVar3 - 1);
    }
    if (uVar2 == 6) {
      uVar2 = FUN_0058c240();
      if (0x10 < (int)uVar2) {
        return (ulonglong)(uint)-(int)uVar2;
      }
      return uVar2;
    }
  }
  else {
    if (uVar2 == 8) {
      return 0x10;
    }
    if (uVar2 == 9) goto LAB_00535022;
    if (uVar2 - 10 < 2) {
      return 0xfffffff8;
    }
    if (uVar2 - 10 == 2) {
      return 0xffffffe8;
    }
  }
  return 0;
}

