/* Ghidra address: 00589270 */
/* Ghidra symbol: FUN_00589270 */


undefined1 FUN_00589270(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uVar1 = (**(code **)(*param_1 + 0xa0))(param_1,param_3);
  FUN_005884d0(&local_30,uVar1,param_4,1);
  FUN_00461840(param_2,&local_30);
  FUN_00460ba0(&local_30);
  return 1;
}

