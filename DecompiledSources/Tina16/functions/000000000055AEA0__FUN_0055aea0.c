/* Ghidra address: 0055aea0 */
/* Ghidra symbol: FUN_0055aea0 */


ulonglong FUN_0055aea0(byte *param_1)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  byte *pbVar4;
  int *piVar5;
  uint *puVar6;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  uVar3 = (ulonglong)*param_1;
  if (uVar3 < 0xd) {
    if (uVar3 == 0xc) {
      return 0xffffffe8;
    }
    if (uVar3 < 8) {
      if (uVar3 == 7) {
        return 8;
      }
      if (uVar3 - 1 < 3) {
LAB_0055afbd:
        pbVar4 = (byte *)FUN_00589390(param_1);
        bVar1 = *pbVar4;
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
      if (uVar3 == 4) {
        pbVar4 = (byte *)FUN_00589390(param_1);
        bVar1 = *pbVar4;
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
      if (uVar3 == 5) {
        pbVar4 = (byte *)FUN_00589390(param_1);
        return (ulonglong)(*pbVar4 + 1);
      }
      if (uVar3 == 6) {
        uVar3 = FUN_0058c240(param_1);
        if (8 < (int)uVar3) {
          return (ulonglong)(uint)-(int)uVar3;
        }
        return uVar3;
      }
    }
    else {
      if (uVar3 == 8) {
        return 0x10;
      }
      if (uVar3 == 9) goto LAB_0055afbd;
      if (uVar3 - 10 < 2) {
        return 0xfffffff8;
      }
    }
  }
  else if (uVar3 < 0x11) {
    if (uVar3 == 0xd) {
      puVar6 = (uint *)FUN_00589390(param_1);
      return (ulonglong)*puVar6;
    }
    if (uVar3 == 0xe) {
LAB_0055b0c8:
      cVar2 = FUN_00534e60(param_1);
      if (cVar2 == '\0') {
        puVar6 = (uint *)FUN_00589390(param_1);
        return (ulonglong)*puVar6;
      }
      piVar5 = (int *)FUN_00589390(param_1);
      return (ulonglong)(uint)-*piVar5;
    }
    if (uVar3 == 0xf) {
      return 0xfffffff8;
    }
    if (uVar3 == 0x10) {
      return 8;
    }
  }
  else {
    if (uVar3 - 0x11 < 2) {
      return 0xfffffff8;
    }
    if (uVar3 == 0x13) {
      return 8;
    }
    if (uVar3 - 0x14 < 2) {
      return 8;
    }
    if (uVar3 - 0x14 == 2) goto LAB_0055b0c8;
  }
  return 0;
}

