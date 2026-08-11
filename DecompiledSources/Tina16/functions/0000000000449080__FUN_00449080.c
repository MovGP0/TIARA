/* Ghidra address: 00449080 */
/* Ghidra symbol: FUN_00449080 */


void FUN_00449080(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + -4);
  }
  FUN_00448f90(param_1,param_2,uVar1);
  return;
}

