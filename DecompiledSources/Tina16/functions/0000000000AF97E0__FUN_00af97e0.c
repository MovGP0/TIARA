/* Ghidra address: 00af97e0 */
/* Ghidra symbol: FUN_00af97e0 */


undefined4 FUN_00af97e0(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 *local_20;
  undefined4 local_14;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_10 = FUN_00a7ae70(&PTR_FUN_00a7a9b0,1,0);
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  local_38 = 0x7fffffff;
  (**(code **)(*param_1 + 0x4a8))(param_1,local_10,1,1);
  local_14 = FUN_00a7b2e0(local_10);
  *param_2 = param_1[0x138];
  FUN_00410f20(local_10);
  return local_14;
}

