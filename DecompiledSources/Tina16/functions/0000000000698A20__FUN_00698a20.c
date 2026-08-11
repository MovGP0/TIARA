/* Ghidra address: 00698a20 */
/* Ghidra symbol: FUN_00698a20 */


ulonglong FUN_00698a20(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0xb1) == '\x01') {
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x10) >> 8),1);
  }
  else {
    uVar1 = FUN_00786090();
    uVar2 = thunk_FUN_04118143(uVar1,0xfffffff0);
    uVar2 = (ulonglong)((uVar2 & 0x20) == 0x20);
  }
  return uVar2;
}

