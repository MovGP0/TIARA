/* Ghidra address: 008317e0 */
/* Ghidra symbol: FUN_008317e0 */


ulonglong FUN_008317e0(longlong param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  short sVar6;
  bool bVar7;
  undefined7 uVar5;
  
  uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar4 = CONCAT71(uVar5,1);
  sVar6 = 0;
  iVar3 = 0;
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + -4);
  }
  if (param_2 <= iVar3) {
    sVar6 = *(short *)(param_1 + (longlong)(param_2 + -1) * 2);
  }
  iVar3 = 0;
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + -4);
  }
  if (iVar3 < param_2) {
    uVar4 = 0;
    goto LAB_00831a36;
  }
  cVar1 = FUN_0044f380(param_1,param_2);
  if (cVar1 != '\0') {
    uVar4 = CONCAT71(uVar5,1);
    goto LAB_00831a36;
  }
  if ((1 < param_2) && (*(short *)(param_1 + (longlong)(param_2 + -2) * 2) == 0x5c)) {
    cVar1 = FUN_0044f380(param_1,param_2 + -1);
    if (cVar1 == '\0') {
      if ((2 < param_2) && (*(short *)(param_1 + (longlong)(param_2 + -3) * 2) == 0x5c)) {
        cVar1 = FUN_0044f380(param_1,param_2 + -2);
        if (cVar1 == '\0') goto LAB_008318a6;
      }
      uVar4 = CONCAT71(uVar5,1);
      goto LAB_00831a36;
    }
  }
LAB_008318a6:
  if (sVar6 == DAT_01e18906) {
    iVar3 = 0;
    if (param_1 != 0) {
      iVar3 = *(int *)(param_1 + -4);
    }
    bVar7 = 3 < iVar3;
  }
  else {
    bVar7 = false;
  }
  if (bVar7) {
    iVar3 = 0;
    if (param_1 != 0) {
      iVar3 = *(int *)(param_1 + -4);
    }
    bVar7 = iVar3 + -4 < param_2;
  }
  else {
    bVar7 = false;
  }
  if (bVar7) {
    uVar4 = CONCAT71(uVar5,6);
    goto LAB_00831a36;
  }
  iVar3 = 0;
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + -4);
  }
  if (iVar3 < 4) {
    bVar7 = false;
  }
  else {
    iVar3 = 0;
    if (param_1 != 0) {
      iVar3 = *(int *)(param_1 + -4);
    }
    bVar7 = iVar3 + -4 < param_2;
  }
  if ((bVar7) && (*(short *)(param_1 + (longlong)(param_2 + -2) * 2) == DAT_01e18906)) {
    if ((2 < param_2) && (*(short *)(param_1 + (longlong)(param_2 + -3) * 2) == 0x5c)) {
      cVar1 = FUN_0044f380(param_1,param_2 + -2);
      if (cVar1 != '\x02') goto LAB_00831971;
    }
    uVar4 = CONCAT71(uVar5,7);
  }
  else {
LAB_00831971:
    if ((ushort)(sVar6 - 0x28U) < 0x20) {
      bVar7 = (1 << ((byte)(sVar6 - 0x28U) & 0x1f) & 0x40080U) != 0;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      uVar4 = CONCAT71(uVar5,2);
    }
    else {
      if ((ushort)(sVar6 - 0x20U) < 0x40) {
        bVar7 = (1L << ((byte)(sVar6 - 0x20U) & 0x3f) & 0x1000000050000002U) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        uVar4 = CONCAT71(uVar5,3);
      }
      else {
        uVar2 = sVar6 - 0x20;
        if (uVar2 < 0x50) {
          bVar7 = ((byte)(&DAT_00831a50)[(longlong)(short)(uVar2 & 0x7f) >> 3] >> (uVar2 & 7) & 1)
                  != 0;
        }
        else {
          bVar7 = false;
        }
        if (bVar7) {
          uVar4 = CONCAT71(uVar5,5);
        }
        else {
          if ((ushort)(sVar6 - 0x30U) < 0x20) {
            bVar7 = (1 << ((byte)(sVar6 - 0x30U) & 0x1f) & 0x100a0001U) != 0;
          }
          else {
            bVar7 = false;
          }
          if (bVar7) {
            uVar4 = CONCAT71(uVar5,4);
          }
        }
      }
    }
  }
LAB_00831a36:
  return uVar4 & 0xffffffff;
}

