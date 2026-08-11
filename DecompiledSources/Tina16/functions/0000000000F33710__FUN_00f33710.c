/* Ghidra address: 00f33710 */
/* Ghidra symbol: FUN_00f33710 */


undefined8 FUN_00f33710(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = FUN_00f2cef0(&LAB_00f249d0,1);
    FUN_00f335b0(param_1,uVar1);
  }
  else {
    FUN_00f335b0(param_1);
  }
  return param_1;
}

