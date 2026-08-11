/* Ghidra address: 00ef9350 */
/* Ghidra symbol: FUN_00ef9350 */


void FUN_00ef9350(undefined8 param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  *param_3 = 0;
  iVar2 = FUN_00ef7f30(param_1,param_5);
  iVar4 = param_2;
  while( true ) {
    sVar1 = FUN_00ef8190(param_1,iVar4 + 1);
    if ((sVar1 == 5) || (iVar2 <= iVar4 + 1)) break;
    iVar4 = iVar4 + 1;
  }
  FUN_00ef8050(param_3,param_1,param_2,iVar4 + -1,param_5);
  uVar3 = FUN_00ef8190(param_1,iVar4);
  uVar5 = FUN_019b7350(uVar3,param_5);
  *param_4 = uVar5;
  return;
}

