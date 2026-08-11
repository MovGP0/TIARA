/* Ghidra address: 01adc0f0 */
/* Ghidra symbol: FUN_01adc0f0 */


void FUN_01adc0f0(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  cVar1 = FUN_01ada080(param_1);
  if (cVar1 != '\0') {
    FUN_01adb5c0(param_1,local_res18[0]);
    FUN_01ada8a0(param_1,local_res18[0]);
    FUN_01ada270(param_1,param_2,local_res18[0]);
    FUN_01ada3f0(param_1,param_2,local_res18[0]);
  }
  FUN_00414480(local_res18);
  return;
}

