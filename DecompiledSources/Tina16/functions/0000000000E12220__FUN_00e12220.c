/* Ghidra address: 00e12220 */
/* Ghidra symbol: FUN_00e12220 */


void FUN_00e12220(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  longlong unaff_RSI;
  int iVar4;
  
  bVar1 = false;
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      unaff_RSI = FUN_004aeac0(param_1,iVar3);
      if (*(int *)(unaff_RSI + 8) == param_2) {
        bVar1 = true;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (!bVar1) {
    unaff_RSI = FUN_00e120b0(&DAT_00e115f8,1,param_2);
    FUN_004ae7e0(param_1,unaff_RSI);
  }
  uVar2 = FUN_00e11fe0(&DAT_00e113f8,1,param_3,param_4,param_5);
  FUN_004ae7e0(*(undefined8 *)(unaff_RSI + 0x10),uVar2);
  return;
}

