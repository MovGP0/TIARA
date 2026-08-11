/* Ghidra address: 00b92400 */
/* Ghidra symbol: FUN_00b92400 */


undefined8 FUN_00b92400(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + -4);
  }
  FUN_00416dc0(param_1,param_2,param_3,uVar1);
  return param_1;
}

