/* Ghidra address: 01d43b40 */
/* Ghidra symbol: FUN_01d43b40 */


void FUN_01d43b40(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  undefined8 local_res10 [2];
  longlong local_res20;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res20);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))
            (*(longlong **)(param_1 + 0x38),local_20,&LAB_01d43c9c,local_res10[0],local_res20);
  FUN_0043ea00(local_30,local_20[0]);
  FUN_00414b50(local_20,local_30[0]);
  iVar1 = 0;
  if (local_20[0] != 0) {
    iVar1 = *(int *)(local_20[0] + -4);
  }
  iVar2 = 0;
  if (local_res20 != 0) {
    iVar2 = *(int *)(local_res20 + -4);
  }
  if (iVar1 != iVar2) {
    FUN_00414b50(local_20,local_res20);
  }
  FUN_01d438e0(*(undefined8 *)(param_1 + 0x30),param_3,local_20[0]);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  FUN_00414480(&local_res20);
  return;
}

