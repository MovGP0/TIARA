/* Ghidra address: 0094d5a0 */
/* Ghidra symbol: FUN_0094d5a0 */


undefined8 FUN_0094d5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_009949d0(&PTR_FUN_00927d88,1,0);
  (**(code **)(*local_20 + 0x90))(local_20,param_3);
  (**(code **)(*local_20 + 0x88))(local_20,param_1);
  (**(code **)(*local_20 + 0x98))(local_20);
  (**(code **)(*local_20 + 200))(local_20,param_2);
  FUN_00410f20(local_20);
  return param_2;
}

