/* Ghidra address: 00d49cf0 */
/* Ghidra symbol: FUN_00d49cf0 */


undefined8 FUN_00d49cf0(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = thunk_FUN_04118143(*(longlong *)(param_1 + 8),0xfffffff0);
    if ((uVar1 & 4) == 4) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

