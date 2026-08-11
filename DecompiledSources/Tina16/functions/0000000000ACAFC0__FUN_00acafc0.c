/* Ghidra address: 00acafc0 */
/* Ghidra symbol: FUN_00acafc0 */


void FUN_00acafc0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x158);
  FUN_005ff880(plVar1[0x97],plVar1[0x17]);
  uVar3 = *(undefined4 *)(*(longlong *)(plVar1[0x97] + 0x70) + 0x28);
  if (((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x90) & 1) != 0) &&
     (cVar2 = FUN_00781870(), cVar2 != '\0')) {
    uVar5 = FUN_00781840();
    uVar3 = FUN_007793c0(uVar5,uVar3);
  }
  uVar3 = FUN_005fbf20(uVar3);
  FUN_005fc860(*(undefined8 *)(plVar1[0x97] + 0x70),uVar3);
  if (*(int *)(param_1 + 0x150) == -1) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x28))(*(longlong **)(param_1 + 0x140));
    if (8 < iVar4) {
      iVar4 = 8;
    }
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    *(int *)(param_1 + 0x150) = iVar4;
  }
  if (*(int *)(param_1 + 0x108) < 10) {
    iVar4 = FUN_005fdfd0(plVar1[0x97],&LAB_00acb120);
    FUN_0064d150(plVar1,iVar4 * *(int *)(param_1 + 0x150));
  }
  else {
    FUN_0064d150(plVar1,*(int *)(param_1 + 0x108));
  }
  if (*(char *)(param_1 + 0xbc) == '\0') {
    if (*(int *)(param_1 + 0x10c) < 10) {
      iVar4 = (**(code **)(*plVar1 + 0x1a0))(plVar1,2);
      FUN_0064cbf0(plVar1,*(int *)(param_1 + 0x154) + iVar4 + 10);
    }
    else {
      FUN_0064cbf0(plVar1,*(int *)(param_1 + 0x10c));
    }
  }
  else {
    FUN_0064cb30(plVar1,0xfffff060);
    FUN_0064cbf0(plVar1,10);
  }
  return;
}

