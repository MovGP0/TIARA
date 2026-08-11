/* Ghidra address: 009e85f0 */
/* Ghidra symbol: FUN_009e85f0 */


void FUN_009e85f0(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  FUN_004168b0(&local_38,param_2);
  local_20 = FUN_004b9860(&PTR_FUN_0047c498,1,local_38,0x20);
  (**(code **)(*param_1 + 0xe8))(param_1,local_20);
  FUN_00410f20(local_20);
  FUN_00414480(&local_38);
  return;
}

