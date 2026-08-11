/* Ghidra address: 01b20fc0 */
/* Ghidra symbol: FUN_01b20fc0 */


undefined8 FUN_01b20fc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int local_1c;
  
  FUN_004b84c0(param_2,&local_1c,4);
  FUN_00415d10(param_1,local_1c,0);
  if (0 < local_1c) {
    uVar1 = FUN_00414df0(param_1);
    FUN_004b84c0(param_2,uVar1,(longlong)local_1c);
  }
  return param_1;
}

