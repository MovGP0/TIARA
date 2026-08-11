/* Ghidra address: 008bbaf0 */
/* Ghidra symbol: FUN_008bbaf0 */


undefined8 FUN_008bbaf0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_008bbf90(&PTR_FUN_008bd7e0,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

