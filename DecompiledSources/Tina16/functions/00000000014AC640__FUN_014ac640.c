/* Ghidra address: 014ac640 */
/* Ghidra symbol: FUN_014ac640 */


undefined4 FUN_014ac640(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = FUN_004170c0(&LAB_014ac6f4,*param_2,1);
  FUN_00416dc0(local_20,*param_2,1,iVar1 + -1);
  uVar2 = FUN_0043fc50(local_20[0],0);
  FUN_00416e20(param_2,1,iVar1);
  FUN_00414480(local_20);
  return uVar2;
}

