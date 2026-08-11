/* Ghidra address: 00d4cce0 */
/* Ghidra symbol: FUN_00d4cce0 */


void FUN_00d4cce0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  FUN_00788400(param_1,param_2);
  uVar1 = thunk_FUN_04118143(*(undefined8 *)(param_1 + 8),0xfffffff0);
  if ((uVar1 & 0x40) == 0x40) {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  else {
    FUN_00789690(param_1,param_2);
  }
  return;
}

