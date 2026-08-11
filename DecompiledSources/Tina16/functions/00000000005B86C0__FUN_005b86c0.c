/* Ghidra address: 005b86c0 */
/* Ghidra symbol: FUN_005b86c0 */


longlong * FUN_005b86c0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_00419430(param_1,&DAT_004210c0);
  if (param_2 != 0) {
    iVar5 = 0;
    iVar4 = 0;
    if (param_2 != 0) {
      iVar4 = *(int *)(param_2 + -4);
    }
    iVar3 = 1;
    if (0 < iVar4) {
      do {
        cVar1 = FUN_0044f7d0(param_3,param_2,iVar3);
        if (cVar1 != '\0') {
          iVar5 = iVar5 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00419260(param_1,&DAT_004210c0,1,(longlong)(iVar5 + 1));
    iVar4 = 1;
    iVar3 = 0;
    do {
      iVar2 = FUN_00441450(param_3,param_2,iVar4);
      if (iVar2 != 0) {
        FUN_00416dc0(*param_1 + (longlong)iVar3 * 8,param_2,iVar4,iVar2 - iVar4);
        iVar3 = iVar3 + 1;
        iVar4 = iVar2 + 1;
      }
    } while (iVar3 != iVar5);
    iVar3 = 0;
    if (param_2 != 0) {
      iVar3 = *(int *)(param_2 + -4);
    }
    FUN_00416dc0(*param_1 + (longlong)iVar5 * 8,param_2,iVar4,(iVar3 - iVar4) + 1);
  }
  return param_1;
}

