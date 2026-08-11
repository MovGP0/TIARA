/* Ghidra address: 0094d370 */
/* Ghidra symbol: FUN_0094d370 */


undefined1 FUN_0094d370(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_009949d0(&PTR_FUN_00927d88,1,0);
  (**(code **)(*local_20 + 0x90))(local_20,param_2);
  (**(code **)(*local_20 + 0x88))(local_20,param_1);
  (**(code **)(*local_20 + 0x98))(local_20);
  local_21 = (**(code **)(*local_20 + 0xb8))(local_20);
  FUN_00410f20(local_20);
  return local_21;
}

