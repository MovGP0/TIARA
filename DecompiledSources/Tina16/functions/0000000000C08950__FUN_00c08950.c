/* Ghidra address: 00c08950 */
/* Ghidra symbol: FUN_00c08950 */


void FUN_00c08950(longlong *param_1,undefined4 param_2)

{
  undefined8 local_20;
  
  FUN_0065b830(param_1);
  local_20 = FUN_00c0f9a0(param_1,param_2);
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_20);
  local_20 = FUN_00bfaa10(param_1);
  FUN_00bfa470(param_1,&local_20);
  return;
}

