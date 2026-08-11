/* Ghidra address: 00bb35a0 */
/* Ghidra symbol: FUN_00bb35a0 */


undefined8 FUN_00bb35a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_00bb3590(param_1,param_3);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x58;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

