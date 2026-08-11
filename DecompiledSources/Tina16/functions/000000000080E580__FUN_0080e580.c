/* Ghidra address: 0080e580 */
/* Ghidra symbol: FUN_0080e580 */


void FUN_0080e580(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = thunk_FUN_03986dbd(param_2);
  *(bool *)(param_1 + 0x2ea) = iVar1 == 0;
  if (iVar1 == 0) {
    thunk_FUN_04154efc(param_2,0xffffffff);
  }
  return;
}

