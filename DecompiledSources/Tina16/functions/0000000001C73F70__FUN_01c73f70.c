/* Ghidra address: 01c73f70 */
/* Ghidra symbol: FUN_01c73f70 */


void FUN_01c73f70(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0xbd8),0x2e4 < *(int *)(param_1 + 0x98));
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x6d0) + 0x90);
  iVar2 = FUN_00654c00();
  iVar7 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = FUN_00654bc0(*(undefined8 *)(param_1 + 0x6c8),iVar7);
      if (((lVar3 != *(longlong *)(param_1 + 0x6d0)) &&
          (lVar3 = FUN_00654bc0(*(undefined8 *)(param_1 + 0x6c8),iVar7),
          lVar3 != *(longlong *)(param_1 + 0xb60))) &&
         (lVar3 = FUN_00654bc0(*(undefined8 *)(param_1 + 0x6c8),iVar7),
         lVar3 != *(longlong *)(param_1 + 0xbd8))) {
        uVar4 = FUN_00654bc0(*(undefined8 *)(param_1 + 0x6c8),iVar7);
        lVar3 = FUN_00654bc0(*(undefined8 *)(param_1 + 0x6c8),iVar7);
        lVar5 = FUN_00654bc0(*(undefined8 *)(param_1 + 0x6c8),iVar7);
        iVar6 = *(int *)(lVar3 + 0x90) + *(int *)(lVar5 + 0x98);
        FUN_0064dbe0(uVar4,CONCAT31((int3)((uint)iVar6 >> 8),iVar6 < iVar1));
      }
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

