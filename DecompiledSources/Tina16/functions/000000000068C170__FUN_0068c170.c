/* Ghidra address: 0068c170 */
/* Ghidra symbol: FUN_0068c170 */


void FUN_0068c170(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_0068bee0(param_1);
  if (iVar2 != param_2) {
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar1,0x197,(longlong)param_2,0);
  }
  return;
}

