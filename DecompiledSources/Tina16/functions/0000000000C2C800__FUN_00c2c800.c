/* Ghidra address: 00c2c800 */
/* Ghidra symbol: FUN_00c2c800 */


void FUN_00c2c800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 char param_5)

{
  undefined1 local_38 [24];
  
  if (param_5 == '\0') {
    FUN_00c2cdc0(param_1,local_38);
    FUN_00c2c870(param_1,param_2,local_38,param_4,0);
  }
  else {
    FUN_00c2c870(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

