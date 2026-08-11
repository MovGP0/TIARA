/* Ghidra address: 009e2d90 */
/* Ghidra symbol: FUN_009e2d90 */


undefined8 FUN_009e2d90(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_20;
  
  local_20 = 0;
  uVar1 = FUN_0045ae90();
  (**(code **)(*param_1 + 0x10))(param_1,&local_20,param_3);
  FUN_00459ca0(uVar1,param_2,local_20);
  FUN_00414480(&local_20);
  return param_2;
}

