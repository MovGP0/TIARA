/* Ghidra address: 01c7c9a0 */
/* Ghidra symbol: FUN_01c7c9a0 */


void FUN_01c7c9a0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  if ((*(char *)(param_1 + 0x1800) == '\0') || (*(int *)(param_1 + 0x17f8) < 0)) {
LAB_01c7ca0c:
    (**(code **)(**(longlong **)(param_1 + 0x1438) + 0x298))(*(longlong **)(param_1 + 0x1438));
  }
  else {
    lVar4 = FUN_01c7d9d0(param_1);
    if (*(int *)(*(longlong *)(lVar4 + 0x18) + 0x10) <= *(int *)(param_1 + 0x17f8))
    goto LAB_01c7ca0c;
    lVar4 = FUN_01c7d9d0(param_1);
    lVar4 = FUN_004aeac0(*(undefined8 *)(lVar4 + 0x18),*(undefined4 *)(param_1 + 0x17f8));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1438) + 0x4d8);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(lVar4 + 0x10));
  }
  if (*(char *)(param_1 + 0x1800) == '\0') {
LAB_01c7ca54:
    uVar3 = 0;
  }
  else {
    lVar4 = FUN_01c7d9d0(param_1);
    if (*(int *)(*(longlong *)(lVar4 + 0x18) + 0x10) < 1) goto LAB_01c7ca54;
    lVar4 = FUN_01c7d9d0(param_1);
    iVar2 = *(int *)(*(longlong *)(lVar4 + 0x18) + 0x10) + -1;
    if (iVar2 <= *(int *)(param_1 + 0x17f8)) goto LAB_01c7ca54;
    uVar3 = (undefined4)CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x1430) + 0x128))(*(longlong **)(param_1 + 0x1430),uVar3);
  if (*(char *)(param_1 + 0x1800) != '\0') {
    lVar4 = FUN_01c7d9d0(param_1);
    if ((0 < *(int *)(*(longlong *)(lVar4 + 0x18) + 0x10)) && (0 < *(int *)(param_1 + 0x17f8))) {
      uVar3 = (undefined4)CONCAT71((int7)((ulonglong)*(longlong *)(lVar4 + 0x18) >> 8),1);
      goto LAB_01c7ca9c;
    }
  }
  uVar3 = 0;
LAB_01c7ca9c:
  (**(code **)(**(longlong **)(param_1 + 0x1428) + 0x128))(*(longlong **)(param_1 + 0x1428),uVar3);
  if (*(int *)(param_1 + 0x17fc) < *(int *)(param_1 + 0x17f8)) {
    *(int *)(param_1 + 0x17fc) = *(int *)(param_1 + 0x17f8);
  }
  return;
}

