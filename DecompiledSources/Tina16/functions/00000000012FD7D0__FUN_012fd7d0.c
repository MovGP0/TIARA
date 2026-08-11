/* Ghidra address: 012fd7d0 */
/* Ghidra symbol: FUN_012fd7d0 */


void FUN_012fd7d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  if (lVar2 != 0) {
    uVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
    iVar1 = FUN_006dd6f0(uVar3);
    if ((-1 < iVar1 + -1) && (lVar2 = *(longlong *)(param_1 + 0xaf8), lVar2 != 0)) {
      uVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
      iVar1 = FUN_006dd6f0(uVar3);
      uVar3 = FUN_004aeac0(lVar2,iVar1 + -1);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x858),local_20);
      uVar4 = FUN_00b8f030(local_20[0]);
      FUN_012e5720(uVar3,uVar4);
    }
  }
  FUN_00414480(local_20);
  return;
}

