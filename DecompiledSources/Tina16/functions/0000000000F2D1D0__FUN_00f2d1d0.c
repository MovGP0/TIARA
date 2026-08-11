/* Ghidra address: 00f2d1d0 */
/* Ghidra symbol: FUN_00f2d1d0 */


undefined8 FUN_00f2d1d0(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_20 = FUN_004540d0(&DAT_00438748,1,0x100);
  (**(code **)(*param_1 + 0x30))(param_1,local_20);
  FUN_00455ae0(local_20,param_2,1);
  FUN_00410f20(local_20);
  return param_2;
}

