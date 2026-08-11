/* Ghidra address: 011463f0 */
/* Ghidra symbol: FUN_011463f0 */


undefined8 FUN_011463f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_01146970(&PTR_FUN_0114b298,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

