/* Ghidra address: 013ff310 */
/* Ghidra symbol: FUN_013ff310 */


void FUN_013ff310(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_3 + -8;
  FUN_013ff190(param_1,param_2,param_3,param_4,iVar1,param_4);
  iVar2 = param_4 + 4;
  FUN_013ff190(param_1,param_2,iVar1,param_4,iVar1,iVar2);
  iVar3 = param_3 + -0xc;
  iVar4 = param_4 + 8;
  FUN_013ff190(param_1,param_2,iVar3,iVar4,iVar1,iVar2);
  iVar5 = param_4 + 0xc;
  FUN_013ff190(param_1,param_2,iVar1,iVar5,iVar3,iVar4);
  iVar6 = param_3 + -4;
  FUN_013ff190(param_1,param_2,iVar6,iVar4,iVar1,iVar5);
  FUN_013ff190(param_1,param_2,iVar1,iVar2,iVar6,iVar4);
  if (*(char *)(param_1 + 0x168) == '\0') {
    FUN_013ff190(param_1,param_2,iVar3,iVar4,iVar6,iVar4);
  }
  else {
    FUN_013ff190(param_1,param_2,iVar1,iVar2,iVar1,iVar5);
  }
  iVar4 = param_4 + 0x10;
  FUN_013ff190(param_1,param_2,iVar1,iVar5,iVar1,iVar4);
  if (*(char *)(param_1 + 0x170) == '\0') {
    FUN_013ff190(param_1,param_2,iVar3,iVar4,iVar6,iVar4);
  }
  else {
    FUN_013ff190(param_1,param_2,iVar1,iVar4,param_3,iVar4);
  }
  FUN_013ff190(param_1,param_2,param_3 + -0xe,param_4 + 2,param_3 + -10,param_4 + 2);
  FUN_013ff190(param_1,param_2,iVar3,param_4,iVar3,iVar2);
  return;
}

