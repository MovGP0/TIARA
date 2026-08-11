/* Ghidra address: 0054b690 */
/* Ghidra symbol: FUN_0054b690 */


undefined8 FUN_0054b690(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_20;
  
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  local_20 = FUN_00588380(uVar1);
  FUN_00587e00(&local_20,param_2);
  return param_2;
}

