/* Ghidra address: 0117a420 */
/* Ghidra symbol: FUN_0117a420 */


int FUN_0117a420(longlong *param_1,longlong *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar2 = (*(int *)(*param_1 + 0x1fa0) + 1) / 2;
  *(int *)(*param_2 + 0x3880) = iVar2;
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar4 = (longlong)iVar3;
      *(undefined8 *)(*param_2 + 0x10 + lVar4 * 8) = 0;
      *(undefined8 *)(*param_2 + 0x978 + lVar4 * 8) = 0;
      *(undefined8 *)(*param_2 + 0x12e0 + lVar4 * 8) = 0;
      *(undefined8 *)(*param_2 + 0x1c48 + lVar4 * 8) = 0;
      *(undefined8 *)(*param_2 + 0x25b0 + lVar4 * 8) = 0;
      *(undefined8 *)(*param_2 + 0x2f18 + lVar4 * 8) = 0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  sVar1 = *(short *)(*param_1 + 0x1fa4);
  if (sVar1 == 0x48) {
    iVar2 = FUN_0117ae20(param_1,param_2);
    if (iVar2 != 0) {
      return iVar2 * 0x14 + 1;
    }
  }
  else if (sVar1 == 0x4c) {
    iVar2 = FUN_0117ae30(param_1,param_2);
    if (iVar2 != 0) {
      return iVar2 * 10 + 1;
    }
  }
  else if (sVar1 == 0x50) {
    iVar2 = FUN_0117a660(param_1,param_2);
    if (iVar2 != 0) {
      return iVar2 * 0x1e + 1;
    }
  }
  else {
    if (sVar1 != 0x53) {
      return 3;
    }
    iVar2 = FUN_0117ab60(param_1,param_2);
    if (iVar2 != 0) {
      return iVar2 * 0x28 + 1;
    }
  }
  return 0;
}

