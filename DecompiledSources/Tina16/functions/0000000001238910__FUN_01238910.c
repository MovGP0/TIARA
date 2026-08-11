/* Ghidra address: 01238910 */
/* Ghidra symbol: FUN_01238910 */


undefined8 FUN_01238910(longlong *param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  sVar1 = *(short *)(*param_1 + 0x1fa6);
  if (((ushort)(sVar1 - 0x42U) < 2) || (sVar1 == 0x45)) {
    uVar3 = *(undefined8 *)(*param_1 + 0x20);
    uVar4 = FUN_0040c760(*(double *)(*param_1 + 0x20) * *(double *)(*param_1 + 0x28));
    dVar5 = *(double *)(*param_1 + 0x28) - *(double *)(*param_1 + 0x20);
  }
  else {
    if (sVar1 != 0x49) {
      return 3;
    }
    uVar3 = *(undefined8 *)(*param_1 + 0x30);
    uVar4 = FUN_0040c760(*(double *)(*param_1 + 0x30) * *(double *)(*param_1 + 0x38));
    dVar5 = *(double *)(*param_1 + 0x38) - *(double *)(*param_1 + 0x30);
  }
  sVar1 = *(short *)(*param_1 + 0x1fa4);
  if (sVar1 == 0x48) {
    iVar2 = FUN_01237650(param_1,uVar3);
    if (iVar2 != 0) {
      uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Unnormalize_Coefs");
      FUN_004134c0(uVar3);
    }
  }
  else if (sVar1 == 0x4c) {
    iVar2 = FUN_01237850(param_1,uVar3);
    if (iVar2 != 0) {
      uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Unnormalize_Coefs");
      FUN_004134c0(uVar3);
    }
  }
  else if (sVar1 == 0x50) {
    iVar2 = FUN_01237980(param_1,dVar5,uVar4);
    if (iVar2 != 0) {
      uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Unnormalize_Coefs");
      FUN_004134c0(uVar3);
    }
  }
  else if (sVar1 == 0x53) {
    iVar2 = FUN_01238100(param_1,dVar5,uVar4);
    if (iVar2 != 0) {
      uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Unnormalize_Coefs");
      FUN_004134c0(uVar3);
    }
  }
  else {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"FP.select");
    FUN_004134c0(uVar3);
  }
  return 0;
}

