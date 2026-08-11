/* Ghidra address: 017e22c0 */
/* Ghidra symbol: FUN_017e22c0 */


void FUN_017e22c0(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_42a [1026];
  
  FUN_00411a80(param_1,param_2);
  puVar1 = *(undefined8 **)(param_1 + 0x4e8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = (**(code **)*puVar1)(puVar1);
    FUN_004095f0(uVar3);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x550);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = (**(code **)*puVar1)(puVar1);
    FUN_004095f0(uVar3);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x4f0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = (**(code **)*puVar1)(puVar1);
    FUN_004095f0(uVar3);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x4f8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = (**(code **)*puVar1)(puVar1);
    FUN_004095f0(uVar3);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x890));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x8d0));
  if (*(longlong *)(param_1 + 0x538) != 0) {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x538));
  }
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x8d8) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x8d8),iVar4);
      FUN_00410f20(uVar3);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x8d8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x528));
  lVar2 = *(longlong *)(param_1 + 0x3a8);
  if (lVar2 != 0) {
    uVar3 = FUN_00442620(local_42a,*(undefined8 *)(param_1 + 0x3b0));
    FUN_015fcd60(lVar2,uVar3,0);
  }
  FUN_01696120(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

