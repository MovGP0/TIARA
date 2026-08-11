/* Ghidra address: 00b21170 */
/* Ghidra symbol: FUN_00b21170 */


bool FUN_00b21170(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 local_20 [2];
  int local_c;
  
  local_20[0] = 0;
  FUN_00416880(local_20,param_2);
  uVar1 = FUN_0040e860(local_20[0],&local_c);
  *param_3 = uVar1;
  FUN_00414480(local_20);
  return local_c == 0;
}

