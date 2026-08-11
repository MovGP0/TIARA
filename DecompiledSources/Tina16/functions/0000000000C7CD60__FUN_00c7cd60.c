/* Ghidra address: 00c7cd60 */
/* Ghidra symbol: FUN_00c7cd60 */


void FUN_00c7cd60(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_0041b910(param_1);
  (**(code **)(*local_res8[0] + 0x180))(local_res8[0],param_2,param_3);
  FUN_0041b800(local_res8);
  return;
}

