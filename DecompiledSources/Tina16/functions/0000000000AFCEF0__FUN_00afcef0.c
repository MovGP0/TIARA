/* Ghidra address: 00afcef0 */
/* Ghidra symbol: FUN_00afcef0 */


undefined8 FUN_00afcef0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00aa6a50(*(undefined8 *)(param_1 + 0x8b0));
  }
  return uVar1;
}

