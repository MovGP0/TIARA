/* Ghidra address: 00abc1b0 */
/* Ghidra symbol: FUN_00abc1b0 */


void FUN_00abc1b0(longlong param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  
  bVar10 = 0;
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x9c) - *(int *)(param_1 + 0x68);
  iVar9 = *(int *)(*(longlong *)(param_1 + 0x18) + 0xa0) - *(int *)(param_1 + 0x68);
  iVar11 = *(int *)(*(longlong *)(param_1 + 0xf0) + 0x10);
  iVar7 = 0;
  bVar2 = 0;
  if (-1 < iVar11 + -1) {
    do {
      bVar10 = bVar2;
      lVar5 = FUN_00ac5680(*(undefined8 *)(param_1 + 0xf0),iVar7);
      iVar3 = (int)((*(longlong *)(lVar5 + 8) - *(longlong *)(param_1 + 0xd8)) / 2);
      if ((iVar3 < iVar9) && (iVar8 <= iVar3 + *(int *)(lVar5 + 0x20))) {
        iVar6 = iVar8 - iVar3;
        if (iVar6 < 1) {
          iVar6 = 0;
        }
        iVar4 = iVar9 - iVar3;
        if (*(int *)(lVar5 + 0x20) <= iVar9 - iVar3) {
          iVar4 = *(int *)(lVar5 + 0x20);
        }
        if ((iVar7 == *(int *)(*(longlong *)(param_1 + 0xf0) + 0x10) + -1) &&
           (iVar4 == *(int *)(lVar5 + 0x20))) {
          iVar4 = iVar4 + -1;
        }
        puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x88);
        (**(code **)*puVar1)(puVar1,*(longlong *)(lVar5 + 8) + (longlong)iVar6 * 2,iVar4 - iVar6);
        bVar10 = 1;
      }
      iVar7 = iVar7 + 1;
      iVar11 = iVar11 + -1;
      bVar2 = bVar10;
    } while (iVar11 != 0);
  }
  if ((bool)(bVar10 & *(int *)(param_1 + 0x6c) < iVar9)) {
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x88);
    (**(code **)*puVar1)(puVar1,&DAT_00abc324,0);
    (**(code **)*puVar1)(puVar1,&LAB_00abc326,2);
  }
  return;
}

