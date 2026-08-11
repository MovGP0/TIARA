/* Ghidra address: 009dfe20 */
/* Ghidra symbol: FUN_009dfe20 */


undefined8
FUN_009dfe20(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4,char param_5)

{
  int iVar1;
  int iVar2;
  longlong local_res20;
  undefined8 local_20;
  
  local_20 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414480(param_1);
  if (local_res20 == 0) {
    FUN_00414b50(&local_res20,param_3);
  }
  if (param_5 == '\0') {
    FUN_009dff80(&local_20,param_2,param_3,0);
    FUN_009dff80(param_1,param_2,local_res20,0);
  }
  else {
    iVar1 = FUN_004170c0(param_3,*param_2,1);
    if (iVar1 != 0) {
      iVar2 = 0;
      if (param_3 != 0) {
        iVar2 = *(int *)(param_3 + -4);
      }
      iVar1 = iVar1 + iVar2;
      iVar2 = FUN_004170c0(local_res20,*param_2,iVar1);
      if (iVar2 != 0) {
        FUN_00416dc0(param_1,*param_2,iVar1,iVar2 - iVar1);
        iVar1 = 0;
        if (local_res20 != 0) {
          iVar1 = *(int *)(local_res20 + -4);
        }
        FUN_00416e20(param_2,1,iVar2 + iVar1 + -1);
      }
    }
  }
  FUN_00414480(&local_20);
  FUN_00414480(&local_res20);
  return param_1;
}

