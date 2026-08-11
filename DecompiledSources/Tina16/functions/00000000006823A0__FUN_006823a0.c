/* Ghidra address: 006823a0 */
/* Ghidra symbol: FUN_006823a0 */


void FUN_006823a0(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  iVar1 = thunk_FUN_041b2403(uVar2,0xbb,(longlong)param_2,0);
  if (-1 < iVar1) {
    uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
    uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
    lVar4 = thunk_FUN_041b2403(uVar3,0xc1,(longlong)iVar1,0);
    thunk_FUN_041b2403(uVar2,0xb1,(longlong)iVar1,iVar1 + lVar4);
    uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
    FUN_00470120(uVar2,0xc2,0,param_3);
  }
  return;
}

