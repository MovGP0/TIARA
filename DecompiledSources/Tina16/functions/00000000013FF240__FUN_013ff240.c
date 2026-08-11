/* Ghidra address: 013ff240 */
/* Ghidra symbol: FUN_013ff240 */


void FUN_013ff240(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_3 + 8;
  FUN_013ff190(param_1,param_2,param_3,param_4,iVar1,param_4);
  iVar2 = param_4 + 8;
  FUN_013ff190(param_1,param_2,iVar1,param_4,iVar1,iVar2);
  FUN_013ff190(param_1,param_2,param_3,iVar2,iVar1,iVar2);
  FUN_013ff190(param_1,param_2,param_3 + 7,param_4 + 2,iVar1,param_4 + 6);
  FUN_013ff190(param_1,param_2,param_3 + 9,param_4 + 2,iVar1,param_4 + 6);
  return;
}

