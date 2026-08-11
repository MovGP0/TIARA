/* Ghidra address: 006825c0 */
/* Ghidra symbol: FUN_006825c0 */


void FUN_006825c0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  iVar2 = thunk_FUN_041b2403(uVar1,0xbb,(longlong)param_2,0);
  if (-1 < iVar2) {
    uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
    iVar3 = thunk_FUN_041b2403(uVar1,0xbb,(longlong)(param_2 + 1),0);
    if (iVar3 < 0) {
      uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
      iVar3 = thunk_FUN_041b2403(uVar1,0xc1,(longlong)iVar2,0);
      iVar3 = iVar2 + iVar3;
    }
    uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
    thunk_FUN_041b2403(uVar1,0xb1,(longlong)iVar2,(longlong)iVar3);
    uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
    FUN_00470120(uVar1,0xc2,0,0);
  }
  return;
}

