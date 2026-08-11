/* Ghidra address: 01191740 */
/* Ghidra symbol: FUN_01191740 */


int FUN_01191740(longlong *param_1)

{
  undefined8 uVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  
  sVar2 = *(short *)(*param_1 + 0x1fa6);
  if (((ushort)(sVar2 - 0x42U) < 2) || (sVar2 == 0x45)) {
    uVar1 = *(undefined8 *)(*param_1 + 0x20);
    uVar4 = FUN_0040c760(*(double *)(*param_1 + 0x20) * *(double *)(*param_1 + 0x28));
    dVar5 = *(double *)(*param_1 + 0x28) - *(double *)(*param_1 + 0x20);
  }
  else {
    if (sVar2 != 0x49) {
      return 3;
    }
    uVar1 = *(undefined8 *)(*param_1 + 0x30);
    uVar4 = FUN_0040c760(*(double *)(*param_1 + 0x30) * *(double *)(*param_1 + 0x38));
    dVar5 = *(double *)(*param_1 + 0x38) - *(double *)(*param_1 + 0x30);
  }
  sVar2 = *(short *)(*param_1 + 0x1fa4);
  if (sVar2 == 0x48) {
    iVar3 = FUN_01192780(param_1,uVar1);
    if (iVar3 != 0) {
      return iVar3 * 10 + 2;
    }
  }
  else if (sVar2 == 0x4c) {
    iVar3 = FUN_01192980(param_1,uVar1);
    if (iVar3 != 0) {
      return iVar3 * 10 + 1;
    }
  }
  else if (sVar2 == 0x50) {
    iVar3 = FUN_011918b0(param_1,dVar5,uVar4);
    if (iVar3 != 0) {
      return iVar3 * 10 + 3;
    }
  }
  else {
    if (sVar2 != 0x53) {
      return 3;
    }
    iVar3 = FUN_01191fd0(param_1,dVar5,uVar4);
    if (iVar3 != 0) {
      return iVar3 * 10 + 4;
    }
  }
  return 0;
}

