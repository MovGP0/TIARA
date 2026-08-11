/* Ghidra address: 019b6200 */
/* Ghidra symbol: FUN_019b6200 */


undefined8 FUN_019b6200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar3 = FUN_019b5ce0(param_1,param_3);
  iVar4 = FUN_019b5ce0(param_2,param_3);
  if (iVar3 == iVar4) {
    uVar5 = CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
    iVar3 = FUN_019b5ce0(param_1,param_3);
    iVar4 = 1;
    if (0 < iVar3) {
      do {
        if ((char)uVar5 == '\0') {
LAB_019b6293:
          uVar5 = 0;
        }
        else {
          iVar6 = iVar4 + -1;
          sVar1 = FUN_019b60b0(param_1,iVar6,param_3);
          sVar2 = FUN_019b60b0(param_2,iVar6,param_3);
          if (sVar1 != sVar2) goto LAB_019b6293;
          uVar5 = CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),1);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

