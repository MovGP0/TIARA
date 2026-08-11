/* Ghidra address: 004420f0 */
/* Ghidra symbol: FUN_004420f0 */


longlong * FUN_004420f0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  
  FUN_00414ad0(param_1,param_2);
  if (*param_1 != 0) {
    iVar6 = 0;
    iVar5 = 1;
    if (param_3 != 0) {
      iVar6 = *(int *)(param_3 + -4);
    }
    while (cVar2 = FUN_00440a20(*param_1,1), cVar2 == '\0') {
      while ((iVar5 <= iVar6 && (*(short *)(param_3 + -2 + (longlong)iVar5 * 2) == 0x3b))) {
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar5;
      if (iVar6 < iVar5) {
        FUN_00414480(param_1);
        return param_1;
      }
      while ((iVar3 <= iVar6 && (*(short *)(param_3 + -2 + (longlong)iVar3 * 2) != 0x3b))) {
        uVar1 = *(ushort *)(param_3 + -2 + (longlong)iVar3 * 2);
        if ((uVar1 < 0xd800) || (0xdfff < uVar1)) {
          iVar3 = iVar3 + 1;
        }
        else {
          iVar3 = FUN_0044f730(param_3,iVar3);
        }
      }
      FUN_00416dc0(param_1,param_3,iVar5,iVar3 - iVar5);
      psVar4 = (short *)FUN_004413a0(*param_1);
      if ((*psVar4 != 0x3a) && (*psVar4 != 0x5c)) {
        FUN_00416ad0(param_1,&DAT_0044222c);
      }
      FUN_00416ad0(param_1,param_2);
      iVar5 = iVar3;
    }
  }
  return param_1;
}

