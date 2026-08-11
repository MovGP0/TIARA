/* Ghidra address: 007f9280 */
/* Ghidra symbol: FUN_007f9280 */


void FUN_007f9280(longlong param_1,char param_2)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = thunk_FUN_04118143(param_1,0xffffffec);
    if (param_2 == '\0') {
      if ((uVar1 & 0x200) == 0) {
        return;
      }
      uVar1 = uVar1 & 0xfffffdff;
    }
    else {
      if ((uVar1 & 0x200) != 0) {
        return;
      }
      uVar1 = uVar1 | 0x200;
    }
    thunk_FUN_03c9d277(param_1,0xffffffec,(longlong)(int)uVar1);
    thunk_FUN_041cc6e2(param_1,0,0,0,0,0,0x37);
  }
  return;
}

