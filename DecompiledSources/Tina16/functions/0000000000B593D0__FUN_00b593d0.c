/* Ghidra address: 00b593d0 */
/* Ghidra symbol: FUN_00b593d0 */


void FUN_00b593d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_00b3c1b0(&DAT_00b3ad98,1,param_1);
  FUN_00b3c290(local_20,param_2,param_3);
  (**(code **)(*local_20 + -0x20))(local_20,1);
  return;
}

