/* Ghidra address: 009e8950 */
/* Ghidra symbol: FUN_009e8950 */


void FUN_009e8950(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  FUN_004168b0(&local_38,param_2);
  local_20 = FUN_004b9860(&PTR_FUN_0047c498,1,local_38,0xff00);
  (**(code **)(*param_1 + 0x118))(param_1,local_20,param_3);
  FUN_00410f20(local_20);
  FUN_00414480(&local_38);
  return;
}

