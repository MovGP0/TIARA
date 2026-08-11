/* Ghidra address: 0069db30 */
/* Ghidra symbol: FUN_0069db30 */


undefined4 FUN_0069db30(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00416830(&local_10,param_1 + 0x1c,0x20);
  (**(code **)(*param_4 + 0x78))(param_4,local_10);
  FUN_00414480(&local_10);
  return 1;
}

