/* Ghidra address: 01c7ad30 */
/* Ghidra symbol: FUN_01c7ad30 */


void FUN_01c7ad30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  iVar1 = FUN_004170c0(&DAT_01c7ae88,param_4,1);
  if (iVar1 < 1) {
    FUN_0064de00(param_2,param_4);
    FUN_0064de00(param_3,0);
  }
  else {
    iVar1 = FUN_004170c0(&DAT_01c7ae88,param_4,1);
    FUN_00416dc0(&local_20,param_4,1,iVar1 + -1);
    FUN_0064de00(param_2,local_20);
    iVar1 = FUN_004170c0(&DAT_01c7ae88,param_4,1);
    iVar2 = FUN_004170c0(&LAB_01c7ae98,param_4,1);
    iVar3 = FUN_004170c0(&DAT_01c7ae88,param_4,1);
    FUN_00416dc0(&local_28,param_4,iVar1 + 1,(iVar2 - iVar3) + -1);
    FUN_0064de00(param_3,local_28);
  }
  FUN_00414560(&local_28,2);
  return;
}

