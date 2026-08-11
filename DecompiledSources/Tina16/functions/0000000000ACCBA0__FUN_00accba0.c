/* Ghidra address: 00accba0 */
/* Ghidra symbol: FUN_00accba0 */


void FUN_00accba0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  plVar1 = (longlong *)(param_1 + 0x178);
  iVar4 = 0;
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + -4);
  }
  if (0 < iVar4) {
    iVar5 = 0;
    if (*plVar1 != 0) {
      iVar5 = *(int *)(*plVar1 + -4);
    }
    FUN_004169f0(plVar1,iVar5 + iVar4);
    uVar2 = FUN_00416740(param_2);
    lVar3 = FUN_00414de0(plVar1);
    FUN_00409a70(uVar2,lVar3 + -2 + (longlong)(iVar5 + 1) * 2,(longlong)(iVar4 * 2));
  }
  return;
}

