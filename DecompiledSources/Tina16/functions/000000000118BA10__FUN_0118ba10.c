/* Ghidra address: 0118ba10 */
/* Ghidra symbol: FUN_0118ba10 */


int FUN_0118ba10(longlong *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0x1fa0) + 1;
  if (300 < (iVar2 / 2) * 3) {
    return 1;
  }
  sVar1 = *(short *)(*param_1 + 0x1fa6);
  if (sVar1 == 0x42) {
    iVar2 = FUN_01189b60(param_1,(longlong)iVar2 % 2 & 0xffffffff);
    if (iVar2 != 0) {
      return iVar2 * 10 + 1;
    }
  }
  else if (sVar1 == 0x43) {
    iVar2 = FUN_01189e20();
    if (iVar2 != 0) {
      return iVar2 * 10 + 2;
    }
  }
  else if (sVar1 == 0x45) {
    iVar2 = FUN_0118a450();
    if (iVar2 != 0) {
      return iVar2 * 10 + 3;
    }
  }
  else {
    if (sVar1 != 0x49) {
      return 3;
    }
    iVar2 = FUN_0118b1c0();
    if (iVar2 != 0) {
      return iVar2 * 10 + 4;
    }
  }
  return 0;
}

