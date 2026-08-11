/* Ghidra address: 01239eb0 */
/* Ghidra symbol: FUN_01239eb0 */


int FUN_01239eb0(longlong *param_1,longlong *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*param_1 + 0x1fa0);
  *(int *)(*param_2 + 0x12e8) = iVar3;
  iVar2 = 0;
  if (iVar3 - 1U < 0x80000000) {
    do {
      *(undefined8 *)(*param_2 + 0x10 + (longlong)iVar2 * 8) = 0;
      *(undefined8 *)(*param_2 + 0x978 + (longlong)iVar2 * 8) = 0;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  sVar1 = *(short *)(*param_1 + 0x1fa4);
  if (sVar1 == 0x48) {
    iVar3 = FUN_01239e90();
    if (iVar3 != 0) {
      return iVar3 * 0x14 + 1;
    }
  }
  else if (sVar1 == 0x4c) {
    iVar3 = FUN_01239ea0();
    if (iVar3 != 0) {
      return iVar3 * 10 + 1;
    }
  }
  else if (sVar1 == 0x50) {
    iVar3 = FUN_01239e70();
    if (iVar3 != 0) {
      return iVar3 * 0x1e + 1;
    }
  }
  else {
    if (sVar1 != 0x53) {
      return 3;
    }
    iVar3 = FUN_01239e80();
    if (iVar3 != 0) {
      return iVar3 * 0x28 + 1;
    }
  }
  return 0;
}

