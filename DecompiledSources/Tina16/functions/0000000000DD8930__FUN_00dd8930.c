/* Ghidra address: 00dd8930 */
/* Ghidra symbol: FUN_00dd8930 */


void FUN_00dd8930(undefined8 param_1,undefined8 param_2)

{
  longlong *local_20 [2];
  
  local_20[0] = (longlong *)0x0;
  FUN_00dd87c0(local_20,param_1);
  (**(code **)(*local_20[0] + 0x18))(local_20[0],param_2);
  FUN_0041b800(local_20);
  return;
}

