/* Ghidra address: 00ef8300 */
/* Ghidra symbol: FUN_00ef8300 */


undefined8 FUN_00ef8300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar3 = FUN_00ef7f30(param_1,param_3);
  iVar4 = FUN_00ef7f30(param_2,param_3);
  if (iVar3 == iVar4) {
    iVar3 = FUN_00ef7f30(param_1,param_3);
    iVar4 = 0;
    if (-1 < iVar3 + -1) {
      do {
        sVar1 = FUN_00ef8190(param_1,iVar4);
        sVar2 = FUN_00ef8190(param_2,iVar4);
        if (sVar1 != sVar2) {
          return 0;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

