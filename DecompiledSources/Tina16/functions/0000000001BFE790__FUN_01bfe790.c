/* Ghidra address: 01bfe790 */
/* Ghidra symbol: FUN_01bfe790 */


void FUN_01bfe790(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  if (param_2 == (undefined8 *)0x0) {
    FUN_00410f20(*(undefined8 *)(param_1 + 200));
    uVar2 = FUN_01bfc5a0(&PTR_FUN_01bef988,1,param_1);
    *(undefined8 *)(param_1 + 200) = uVar2;
  }
  else {
    FUN_00410ae0(*param_2,local_20);
    FUN_00410ae0(**(undefined8 **)(param_1 + 200),&local_28);
    iVar1 = FUN_00416db0(local_20[0],local_28);
    if (iVar1 == 0) {
      (**(code **)(**(longlong **)(param_1 + 200) + 0x10))(*(longlong **)(param_1 + 200),param_2);
    }
  }
  FUN_00414560(&local_28,2);
  return;
}

