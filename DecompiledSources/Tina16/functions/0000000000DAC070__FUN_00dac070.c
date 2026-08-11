/* Ghidra address: 00dac070 */
/* Ghidra symbol: FUN_00dac070 */


void FUN_00dac070(double param_1,double param_2,undefined8 param_3,double param_4)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = FUN_0040c850(param_3);
  uVar1 = FUN_00b90620(uVar1,param_2 * 1e-10);
  dVar2 = (double)FUN_00b90650(uVar1,param_2);
  FUN_00b90650(param_2 * 0.5,param_1 * dVar2 + param_4);
  return;
}

