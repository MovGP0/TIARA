/* Ghidra address: 0080f3b0 */
/* Ghidra symbol: FUN_0080f3b0 */


undefined8 FUN_0080f3b0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x158) == '\0') {
    uVar1 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x2d0),0xb031,1,0);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x170);
  }
  return uVar1;
}

