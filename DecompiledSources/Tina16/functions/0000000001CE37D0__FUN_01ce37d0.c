/* Ghidra address: 01ce37d0 */
/* Ghidra symbol: FUN_01ce37d0 */


void FUN_01ce37d0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  iVar5 = *(int *)(*(longlong *)(param_1 + 0xe0) + 0x1c) - *(int *)(param_1 + 0x60);
  if ((char)param_2[0x24] != '\0') {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0xe0) + 0x14);
  }
  *(int *)(param_1 + 0x48) = iVar5;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x40);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xe0) + 0x78);
  uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,*(undefined4 *)(param_1 + 0x3c));
  FUN_004113f0(uVar3,&DAT_01ccbf00);
  iVar5 = *(int *)(param_1 + 0x60);
  if ((char)param_2[0x24] != '\0') {
    iVar5 = *(int *)(param_1 + 100);
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x48) + iVar5;
  iVar5 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x54) = iVar5;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0xe0) + 0x20) - *(int *)(param_1 + 0x44);
  uVar6 = iVar4 - iVar5;
  uVar7 = (int)uVar6 >> 0x1f;
  if ((double)(int)((uVar6 ^ uVar7) - uVar7) < (double)*(int *)(param_1 + 0x38) / 2.0) {
    *(int *)(param_1 + 0x54) = iVar4;
  }
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0xe0) + 0x58);
  if (bVar1 < 8) {
    bVar8 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0xe0) >> 8),1) <<
             (bVar1 & 0x1f) & 0x60U) != 0;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x14);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x1c);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 10;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)((longlong)param_2 + 0x94) + 5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -5;
  }
  (**(code **)(*param_2 + 0xb0))(param_2,param_1 + 0x48);
  (**(code **)(*param_2 + 0xc0))
            (param_2,*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
  return;
}

