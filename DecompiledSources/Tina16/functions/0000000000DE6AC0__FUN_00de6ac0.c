/* Ghidra address: 00de6ac0 */
/* Ghidra symbol: FUN_00de6ac0 */


void FUN_00de6ac0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 *local_20;
  
  local_30 = auStack_58;
  local_20 = (undefined8 *)FUN_00410e60(param_1,1);
  (**(code **)*local_20)(local_20,param_2);
  FUN_00410f20(local_20);
  return;
}

