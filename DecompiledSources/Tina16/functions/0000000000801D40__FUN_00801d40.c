/* Ghidra address: 00801d40 */
/* Ghidra symbol: FUN_00801d40 */


void FUN_00801d40(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x6a8) & 0x10) == 0) {
    FUN_006557d0(param_1);
  }
  else {
    if ((*PTR_DAT_02004258 & 1) != 0) {
      FUN_00782350(&DAT_0075cd78,0,param_1);
    }
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(DAT_02012668 + 0xa8) + 0x698),0x221,uVar1,0);
  }
  *(undefined8 *)(param_1 + 0x698) = 0;
  return;
}

