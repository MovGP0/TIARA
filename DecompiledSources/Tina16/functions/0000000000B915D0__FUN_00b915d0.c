/* Ghidra address: 00b915d0 */
/* Ghidra symbol: FUN_00b915d0 */


void FUN_00b915d0(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_res18 [2];
  undefined1 local_118 [264];
  longlong local_10;
  
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_0040e780(local_118,param_2,1);
  FUN_004169a0(&local_10,local_118);
  FUN_00416ba0(&local_10,&DAT_00b916f8,local_10);
  iVar1 = FUN_004170c0(local_10,*param_1,1);
  if (iVar1 != 0) {
    uVar2 = 0;
    if (local_10 != 0) {
      uVar2 = *(undefined4 *)(local_10 + -4);
    }
    FUN_00416e20(param_1,iVar1,uVar2);
    FUN_00416ea0(local_res18[0],param_1,iVar1);
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res18);
  return;
}

