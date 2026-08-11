/* Ghidra address: 00b11960 */
/* Ghidra symbol: FUN_00b11960 */


undefined8 FUN_00b11960(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00468530(&local_30,param_4 - *(int *)(param_1 + 0x4c0),0xfffffffffffffffc);
  lVar1 = FUN_00b13190(*(undefined8 *)(param_1 + 0x600),&local_30,0);
  if (lVar1 == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(lVar1 + 0x10));
  }
  if (*(longlong *)(param_1 + 0x598) != 0) {
    (**(code **)(param_1 + 0x598))(*(undefined8 *)(param_1 + 0x5a0),param_1,param_3,param_4,param_2)
    ;
  }
  FUN_00460ba0(&local_30);
  return param_2;
}

