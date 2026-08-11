/* Ghidra address: 019b9c80 */
/* Ghidra symbol: FUN_019b9c80 */


ulonglong FUN_019b9c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_R13;
  ulonglong uVar6;
  
  uVar6 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  uVar2 = FUN_019b5ce0(param_1,param_3);
  uVar3 = FUN_019b5ce0(param_2,param_3);
  iVar4 = FUN_019b6fa0(uVar2,uVar3);
  iVar5 = 0;
  if (-1 < iVar4) {
    iVar4 = iVar4 + 1;
    do {
      if ((char)uVar6 == '\0') {
LAB_019b9cf9:
        uVar6 = 0;
      }
      else {
        uVar2 = FUN_019b60b0(param_1,iVar5,param_3);
        sVar1 = FUN_019b60b0(param_2,iVar5,param_3);
        if ((short)uVar2 != sVar1) goto LAB_019b9cf9;
        uVar6 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return uVar6 & 0xffffffff;
}

