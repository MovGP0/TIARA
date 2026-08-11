/* Ghidra address: 00b89620 */
/* Ghidra symbol: FUN_00b89620 */


void FUN_00b89620(undefined8 param_1,undefined8 param_2,char param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = thunk_FUN_04118143(param_2,0xffffffec);
  uVar1 = uVar1 & 0xffbf8fff;
  if (param_3 == '\0') {
    thunk_FUN_03c9d277(param_2,0xffffffec,(longlong)(int)uVar1);
  }
  else if (param_4 == 0) {
    thunk_FUN_03c9d277(param_2,0xffffffec,(longlong)(int)(uVar1 | 0x7000));
  }
  else {
    thunk_FUN_03c9d277(param_2,0xffffffec,(longlong)(int)(uVar1 | 0x507000));
  }
  return;
}

