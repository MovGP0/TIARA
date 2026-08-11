/* Ghidra address: 0041ae20 */
/* Ghidra symbol: FUN_0041ae20 */


undefined8 FUN_0041ae20(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (DAT_01dbce28 == 0) {
    FUN_0041aa00(&local_10,param_2);
    FUN_0041aea0(local_10);
  }
  FUN_004167d0(param_1,DAT_01dbce28);
  FUN_00414480(&local_10);
  return param_1;
}

