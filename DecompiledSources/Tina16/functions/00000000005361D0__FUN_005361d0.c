/* Ghidra address: 005361d0 */
/* Ghidra symbol: FUN_005361d0 */


undefined8 FUN_005361d0(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  
  pbVar3 = (byte *)*param_1;
  if (pbVar3 == (byte *)0x0) {
    if ((param_1[1] != 0) && ((undefined *)param_1[1] != PTR_PTR_01dd79f8)) {
      uVar2 = (**(code **)(*(longlong *)param_1[1] + 0x18))((longlong *)param_1[1]);
      return uVar2;
    }
    return 0;
  }
  if (param_1[1] == 0) {
    return 0;
  }
  uVar4 = (ulonglong)*pbVar3;
  if (uVar4 < 10) {
    if (uVar4 < 7) {
      if (uVar4 == 6) {
        uVar2 = FUN_0058c240(pbVar3);
        return uVar2;
      }
      if (uVar4 - 1 < 3) {
LAB_005362ff:
        pbVar3 = (byte *)FUN_00589390(pbVar3);
        bVar1 = *pbVar3;
        if (bVar1 < 2) {
          return 1;
        }
        if (1 < (byte)(bVar1 - 2)) {
          if ((byte)(bVar1 - 4) < 2) {
            return 4;
          }
          return 0;
        }
        return 2;
      }
      if (uVar4 == 4) {
        pbVar3 = (byte *)FUN_00589390(pbVar3);
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
      if (uVar4 == 5) goto LAB_005363bf;
    }
    else {
      if (uVar4 == 7) goto LAB_005363b8;
      if (uVar4 == 8) {
        return 0x10;
      }
      if (uVar4 == 9) goto LAB_005362ff;
    }
LAB_005363ea:
    uVar2 = 0;
  }
  else {
    if (uVar4 < 0x11) {
      if (uVar4 == 0x10) {
        return 8;
      }
      if (1 < uVar4 - 10) {
        if (uVar4 == 0xc) {
          return 0x18;
        }
        if (uVar4 - 0xd < 2) {
LAB_005363bf:
          uVar2 = (**(code **)(*(longlong *)param_1[1] + 0x18))((longlong *)param_1[1]);
          return uVar2;
        }
        if (uVar4 - 0xd != 2) goto LAB_005363ea;
      }
    }
    else if (3 < uVar4 - 0x11) {
      if (uVar4 == 0x15) {
        return 8;
      }
      if (uVar4 == 0x16) goto LAB_005363bf;
      goto LAB_005363ea;
    }
LAB_005363b8:
    uVar2 = 8;
  }
  return uVar2;
}

