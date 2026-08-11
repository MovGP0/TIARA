/* Ghidra address: 009ebd50 */
/* Ghidra symbol: FUN_009ebd50 */


void FUN_009ebd50(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != *(int *)(param_1 + 0x4f8)) {
    *(int *)(param_1 + 0x4f8) = param_2;
    uVar1 = FUN_0065b870();
    thunk_FUN_041b2403(uVar1,0xc5,(longlong)param_2,0);
  }
  return;
}

