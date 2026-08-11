/* Ghidra address: 00b52c60 */
/* Ghidra symbol: FUN_00b52c60 */


undefined8 FUN_00b52c60(longlong param_1,undefined2 param_2)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00b52c00(param_1,param_2,&local_10);
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),&local_10)
  ;
  FUN_004144d0(&local_10);
  return uVar1;
}

