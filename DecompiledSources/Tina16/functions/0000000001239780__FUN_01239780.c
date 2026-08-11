/* Ghidra address: 01239780 */
/* Ghidra symbol: FUN_01239780 */


int FUN_01239780(longlong *param_1,longlong *param_2)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  iVar2 = (*(int *)(*param_1 + 0x1fa0) + 1) / 2;
  *(int *)(*param_2 + 0x3880) = iVar2;
  uVar3 = 0;
  uVar5 = uVar3;
  if (-1 < iVar2 + -1) {
    do {
      uVar5 = (ulonglong)(int)uVar3;
      *(undefined8 *)(*param_2 + 0x10 + uVar5 * 8) = 0;
      *(undefined8 *)(*param_2 + 0x978 + uVar5 * 8) = 0;
      *(undefined8 *)(*param_2 + 0x12e0 + uVar5 * 8) = 0;
      *(undefined8 *)(*param_2 + 0x1c48 + uVar5 * 8) = 0;
      *(undefined8 *)(*param_2 + 0x25b0 + uVar5 * 8) = 0;
      *(undefined8 *)(*param_2 + 0x2f18 + uVar5 * 8) = 0;
      uVar3 = (ulonglong)((int)uVar3 + 1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  sVar1 = *(short *)(*param_1 + 0x1fa4);
  if (sVar1 == 0x48) {
    iVar2 = FUN_01238fb0(param_1,param_2);
    if (iVar2 != 0) {
      return iVar2 * 0x14 + 1;
    }
  }
  else if (sVar1 == 0x4c) {
    iVar2 = FUN_01238bc0(param_1,param_2);
    if (iVar2 != 0) {
      return iVar2 * 10 + 1;
    }
  }
  else if (sVar1 == 0x50) {
    iVar2 = FUN_01238fc0(param_1,param_2);
    if (iVar2 != 0) {
      return iVar2 * 0x1e + 1;
    }
  }
  else if (sVar1 == 0x53) {
    iVar2 = FUN_012394c0(param_1,param_2);
    if (iVar2 != 0) {
      return iVar2 * 0x28 + 1;
    }
  }
  else {
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,CONCAT71((int7)(uVar5 >> 8),1),L"FP.select");
    FUN_004134c0(uVar4);
  }
  return 0;
}

