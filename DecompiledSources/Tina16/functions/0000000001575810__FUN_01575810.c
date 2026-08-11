/* Ghidra address: 01575810 */
/* Ghidra symbol: FUN_01575810 */


void FUN_01575810(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res18 [2];
  undefined8 local_10;
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  cVar1 = FUN_015755e0(param_1,param_2,&local_10);
  if (cVar1 == '\0') {
    FUN_016fd940(0);
  }
  else {
    FUN_01574cf0(local_10,local_res18[0]);
  }
  FUN_00414480(local_res18);
  return;
}

