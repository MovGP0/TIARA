/* Ghidra address: 00baee10 */
/* Ghidra symbol: FUN_00baee10 */


undefined8 FUN_00baee10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x18) + 0xc0;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

