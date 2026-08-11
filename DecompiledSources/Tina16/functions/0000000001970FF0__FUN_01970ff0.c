/* Ghidra address: 01970ff0 */
/* Ghidra symbol: FUN_01970ff0 */


void FUN_01970ff0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  *param_3 = 0;
  FUN_00414480(param_4);
  iVar1 = FUN_004170c0(&LAB_019710d4,param_2,1);
  if (iVar1 != 0) {
    FUN_00416dc0(local_20,param_2,1,iVar1 + -1);
    uVar3 = FUN_01970fc0(param_1,local_20[0]);
    *param_3 = uVar3;
    iVar2 = FUN_00414cb0(param_2);
    FUN_00416dc0(param_4,param_2,iVar1 + 2,(iVar2 - iVar1) + -2);
  }
  FUN_00414480(local_20);
  return;
}

