/* Ghidra address: 01bf7be0 */
/* Ghidra symbol: FUN_01bf7be0 */


void FUN_01bf7be0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_2 + 0x70) + 0x10);
  *(undefined4 *)(param_2 + 0x6c) = 0;
  if (*(int *)(param_2 + 0x6c) <= iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x70),*(undefined4 *)(param_2 + 0x6c));
      if (lVar1 != 0) {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x70),*(undefined4 *)(param_2 + 0x6c));
        FUN_00654410(uVar2);
      }
      *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0x70));
  return;
}

