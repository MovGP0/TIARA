/* Ghidra address: 007d5e00 */
/* Ghidra symbol: FUN_007d5e00 */


undefined8 FUN_007d5e00(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_007d56e0();
    uVar1 = thunk_FUN_041da135(uVar1);
  }
  return uVar1;
}

