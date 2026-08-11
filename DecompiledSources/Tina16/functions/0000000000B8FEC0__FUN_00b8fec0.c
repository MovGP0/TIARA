/* Ghidra address: 00b8fec0 */
/* Ghidra symbol: FUN_00b8fec0 */


undefined8
FUN_00b8fec0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            double param_5)

{
  double dVar1;
  
  dVar1 = (double)FUN_0040c850(param_2);
  if (param_5 <= dVar1) {
    FUN_00b8fd60(param_1,param_2,param_3,param_4,1);
  }
  else {
    FUN_00414ad0(param_1,&LAB_00b8ff38);
  }
  return param_1;
}

