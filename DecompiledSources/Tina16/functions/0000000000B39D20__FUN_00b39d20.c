/* Ghidra address: 00b39d20 */
/* Ghidra symbol: FUN_00b39d20 */


undefined8 FUN_00b39d20(longlong param_1,undefined2 param_2,undefined2 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00b39c90(param_1,param_2,param_3,&local_10);
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),&local_10)
  ;
  FUN_00b39d00(param_1,&local_10);
  FUN_004144d0(&local_10);
  return uVar1;
}

