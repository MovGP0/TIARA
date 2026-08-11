/* Ghidra address: 01306de0 */
/* Ghidra symbol: FUN_01306de0 */


void FUN_01306de0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  lVar5 = *(longlong *)(param_1 + 0x700);
  uVar4 = FUN_006e2530(lVar5);
  uVar1 = FUN_006dd6f0(uVar4);
  lVar5 = FUN_006df500(*(undefined8 *)(lVar5 + 0x550),uVar1);
  if ((((*(uint *)(*(longlong *)(lVar5 + 0x18) + 4) & 0x20) == 0x20) &&
      (*(longlong *)(param_1 + 0xaf8) != 0)) &&
     (iVar2 = FUN_00654c00(*(undefined8 *)(param_1 + 0x850)), iVar2 != 0)) {
    uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
    iVar2 = FUN_006dd6f0(uVar4);
    FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar2 + -1);
    iVar2 = FUN_012e58b0();
    iVar6 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
        iVar3 = FUN_006dd6f0(uVar4);
        uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3 + -1);
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x9c8),local_30);
        uVar7 = FUN_00b8f030(local_30[0]);
        FUN_012e6150(uVar4,iVar6,uVar7);
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00414480(local_30);
  return;
}

