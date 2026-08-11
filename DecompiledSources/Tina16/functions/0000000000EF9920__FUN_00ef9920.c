/* Ghidra address: 00ef9920 */
/* Ghidra symbol: FUN_00ef9920 */


double FUN_00ef9920(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  
  iVar5 = 1;
  bVar1 = true;
  dVar7 = 1.0;
  while ((iVar4 = FUN_00ef7f30(param_1,param_2), iVar5 < iVar4 &&
         (*(char *)(param_2 + 0x92) == '\0'))) {
    while ((iVar4 = FUN_00ef7f30(param_1,param_2), iVar5 < iVar4 &&
           ((sVar2 = FUN_00ef8190(param_1,iVar5), sVar2 != 5 && (*(char *)(param_2 + 0x92) == '\0'))
           ))) {
      iVar5 = iVar5 + 1;
    }
    uVar3 = FUN_00ef8190(param_1,iVar5 + -1);
    if (bVar1) {
      bVar1 = false;
      dVar7 = (double)FUN_019b7350(uVar3,param_2);
    }
    else {
      dVar6 = (double)FUN_019b7350(uVar3,param_2);
      if (dVar6 < dVar7) {
        dVar7 = (double)FUN_019b7350(uVar3,param_2);
      }
    }
    iVar5 = iVar5 + 1;
  }
  if (dVar7 == 0.0) {
    dVar7 = 1.0;
  }
  return dVar7;
}

