/* Ghidra address: 006d5610 */
/* Ghidra symbol: FUN_006d5610 */


void FUN_006d5610(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((*(ushort *)(param_1 + 0x34) & 8) == 0) {
    uVar1 = FUN_0065b870();
    thunk_FUN_041b2403(uVar1,0x130c,(longlong)param_2,0);
  }
  return;
}

