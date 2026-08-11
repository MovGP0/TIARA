/* Ghidra address: 007412c0 */
/* Ghidra symbol: FUN_007412c0 */


void FUN_007412c0(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  plVar2 = *(longlong **)(param_1 + 0x310);
  FUN_005ff8a0(plVar2,*(undefined8 *)(param_1 + 0x318));
  FUN_005ff8c0(plVar2,*(undefined8 *)(param_1 + 800));
  lVar3 = plVar2[0xf];
  lVar4 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x18) + 0x2c);
  uVar5 = lVar4 / 2;
  uVar7 = uVar5 & 0xffffffff;
  iVar9 = (int)uVar5;
  iVar8 = *(int *)(param_1 + 0x98) - *(int *)(*(longlong *)(lVar3 + 0x18) + 0x2c);
  iVar10 = *(int *)(param_1 + 0x9c) - *(int *)(*(longlong *)(lVar3 + 0x18) + 0x2c);
  iVar6 = iVar8 + 1;
  iVar11 = iVar10 + 1;
  if (*(int *)(*(longlong *)(lVar3 + 0x18) + 0x2c) == 0) {
    iVar6 = iVar8;
    iVar11 = iVar10;
  }
  iVar8 = iVar11;
  if (iVar6 < iVar11) {
    iVar8 = iVar6;
  }
  bVar1 = *(byte *)(param_1 + 0x328);
  if (bVar1 < 8) {
    bVar12 = ((int)CONCAT71((uint7)((ulonglong)(lVar4 % 2) >> 8) & 0xffffff,1) << (bVar1 & 0x1f) &
             0x2aU) != 0;
  }
  else {
    bVar12 = false;
  }
  if (bVar12) {
    uVar7 = (ulonglong)(uint)(iVar9 + (iVar6 - iVar8) / 2);
    iVar9 = iVar9 + (iVar11 - iVar8) / 2;
    iVar6 = iVar8;
    iVar11 = iVar8;
  }
  iVar10 = (int)uVar7;
  if (bVar1 < 2) {
    (**(code **)(*plVar2 + 0xf8))(plVar2,uVar7,iVar9,iVar10 + iVar6,iVar9 + iVar11);
  }
  else if ((byte)(bVar1 - 2) < 2) {
    (**(code **)(*plVar2 + 0x108))
              (plVar2,uVar7,iVar9,iVar10 + iVar6,iVar9 + iVar11,iVar8 / 4,iVar8 / 4);
  }
  else if ((byte)(bVar1 - 4) < 2) {
    (**(code **)(*plVar2 + 0xa0))(plVar2,uVar7,iVar9,iVar10 + iVar6,iVar9 + iVar11);
  }
  return;
}

