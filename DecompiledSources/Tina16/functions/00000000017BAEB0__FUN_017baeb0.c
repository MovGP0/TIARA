/* Ghidra address: 017baeb0 */
/* Ghidra symbol: FUN_017baeb0 */


undefined8 FUN_017baeb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (DAT_01fa3630 == 0) {
    uVar1 = (**(code **)(param_1 + 8))(param_1,1,param_2,param_3,param_4);
  }
  else {
    FUN_00410f20(param_4);
    uVar1 = 0;
  }
  return uVar1;
}

