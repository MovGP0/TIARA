/* Ghidra address: 005741a0 */
/* Ghidra symbol: FUN_005741a0 */


undefined8 FUN_005741a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_00575d60(&PTR_FUN_00585b20,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

