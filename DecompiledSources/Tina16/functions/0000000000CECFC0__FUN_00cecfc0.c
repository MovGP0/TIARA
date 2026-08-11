/* Ghidra address: 00cecfc0 */
/* Ghidra symbol: FUN_00cecfc0 */


undefined8 FUN_00cecfc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_28 = (longlong *)0x0;
  FUN_008b05c0(&local_28,param_3);
  (**(code **)(*local_28 + 0x70))(local_28,param_2,param_4);
  FUN_0041b800(&local_28);
  return param_2;
}

