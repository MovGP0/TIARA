/* Ghidra address: 01b20f00 */
/* Ghidra symbol: FUN_01b20f00 */


undefined8 * FUN_01b20f00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int local_1c;
  
  FUN_004b84c0(param_2,&local_1c,4);
  FUN_00416660(param_1,local_1c);
  if (0 < local_1c) {
    uVar1 = FUN_00415f70(*param_1);
    FUN_004b84c0(param_2,uVar1,(longlong)(local_1c * 2));
  }
  return param_1;
}

