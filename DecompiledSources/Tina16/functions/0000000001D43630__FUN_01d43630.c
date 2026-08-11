/* Ghidra address: 01d43630 */
/* Ghidra symbol: FUN_01d43630 */


undefined8 FUN_01d43630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = 0;
  local_20 = 0;
  local_10 = 0;
  FUN_0043ea00(&local_10,param_3);
  if (local_10 == 0) {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,&local_18,0x833);
    FUN_0043f750(&local_20,param_4);
    FUN_00416cd0(param_2,3,local_18,&LAB_01d43708,local_20);
  }
  else {
    FUN_00414ad0(param_2,param_3);
  }
  FUN_00414560(&local_20,3);
  return param_2;
}

