/* Ghidra address: 00cfb0e0 */
/* Ghidra symbol: FUN_00cfb0e0 */


void FUN_00cfb0e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  FUN_00414b50(&local_10,param_2);
  iVar1 = (**(code **)PTR_PTR_020018b0)(&LAB_00cfb208,local_10);
  if (0 < iVar1) {
    iVar1 = (**(code **)PTR_PTR_020018b0)(&LAB_00cfb208,local_10);
    FUN_00416dc0(local_20,local_10,1,iVar1 + -1);
    FUN_00cfb060(param_1,local_20[0]);
    FUN_00cfb0a0(param_1,&local_28);
    iVar1 = 0;
    if (local_28 != 0) {
      iVar1 = *(int *)(local_28 + -4);
    }
    FUN_00416e20(&local_10,1,iVar1 + 1);
  }
  FUN_00cddc80(param_1,local_10);
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  return;
}

