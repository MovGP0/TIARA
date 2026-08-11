/* Ghidra address: 0068e290 */
/* Ghidra symbol: FUN_0068e290 */


void FUN_0068e290(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_0068e260(param_1);
  if (param_2 != iVar2) {
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar1,0x194,(longlong)param_2,0);
  }
  return;
}

