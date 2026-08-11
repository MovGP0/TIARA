/* Ghidra address: 00bb3490 */
/* Ghidra symbol: FUN_00bb3490 */


undefined8 FUN_00bb3490(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_00bb3460(param_1,param_3);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x70;
  }
  FUN_0041b840(param_1 + 0x58,lVar1);
  FUN_0041b840(param_2,*(undefined8 *)(param_1 + 0x58));
  return param_2;
}

