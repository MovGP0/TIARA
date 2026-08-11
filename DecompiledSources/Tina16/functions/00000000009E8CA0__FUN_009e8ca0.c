/* Ghidra address: 009e8ca0 */
/* Ghidra symbol: FUN_009e8ca0 */


void FUN_009e8ca0(longlong *param_1,undefined8 param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00415eb0(local_20,param_2);
  (**(code **)(*param_1 + 0x58))(param_1,local_20[0]);
  FUN_00414520(local_20);
  return;
}

