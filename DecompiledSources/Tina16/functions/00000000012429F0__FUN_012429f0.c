/* Ghidra address: 012429f0 */
/* Ghidra symbol: FUN_012429f0 */


undefined8 FUN_012429f0(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_20;
  
  local_20 = 0;
  uVar1 = FUN_004170c0(&DAT_01242b14,*param_2,1);
  FUN_00416dc0(&local_20,*param_2,1,uVar1);
  uVar1 = FUN_004170c0(&DAT_01242b14,*param_2,1);
  FUN_00416e20(param_2,1,uVar1);
  iVar2 = FUN_004170c0(&DAT_01242b24,local_20,1);
  iVar3 = FUN_004170c0(&LAB_01242b34,local_20,1);
  iVar4 = FUN_004170c0(&DAT_01242b24,local_20,1);
  FUN_00416dc0(param_1,local_20,iVar2 + 1,(iVar3 - iVar4) + -1);
  FUN_00414480(&local_20);
  return param_1;
}

