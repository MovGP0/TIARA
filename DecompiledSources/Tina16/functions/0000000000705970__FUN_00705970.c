/* Ghidra address: 00705970 */
/* Ghidra symbol: FUN_00705970 */


undefined8 FUN_00705970(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x4f8) != 0) {
    uVar1 = thunk_FUN_041b2403(*(longlong *)(param_1 + 0x4f8),0xe,0,0);
  }
  return uVar1;
}

