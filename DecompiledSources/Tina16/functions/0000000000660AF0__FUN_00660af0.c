/* Ghidra address: 00660af0 */
/* Ghidra symbol: FUN_00660af0 */


void FUN_00660af0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  int local_48;
  undefined1 local_38 [24];
  
  lVar8 = *(longlong *)(param_1 + 8);
  if (lVar8 == 0) {
    return;
  }
  if (*(char *)(lVar8 + 0xa9) == '\0') {
    return;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x38) + 0x9c) != 0) {
    return;
  }
  *(undefined1 *)(lVar8 + 0x100) = *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x20);
  iVar2 = FUN_006607d0(param_1,2);
  iVar3 = FUN_006607d0(param_1,1);
  cVar1 = FUN_00660ab0(auStack_68);
  if (cVar1 != '\0') {
    if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x20) == '\x01') {
      iVar2 = iVar2 - *(int *)(*(longlong *)(param_1 + 0x38) + 0x18);
    }
    else {
      iVar3 = iVar3 - *(int *)(*(longlong *)(param_1 + 0x38) + 0x18);
    }
  }
  lVar8 = FUN_00660e20(param_1);
  if ((lVar8 == 0) &&
     (((*(longlong *)(param_1 + 0x28) == *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x90) ||
       (*(char *)(*(longlong *)(param_1 + 0x28) + 0x20) !=
        *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x90) + 0x20))) ||
      (iVar4 = FUN_00660cd0(param_1), *(int *)(*(longlong *)(param_1 + 0x38) + 0x98) <= iVar4)))) {
    if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x20) ==
        *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x90) + 0x20)) goto LAB_00660c66;
    iVar4 = FUN_00660cd0(param_1);
    iVar5 = FUN_00660cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x90));
    if (iVar5 <= iVar4) goto LAB_00660c66;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x20) == '\x01') {
    iVar3 = iVar3 - *(int *)(*(longlong *)(param_1 + 0x38) + 0x18);
  }
  else {
    iVar2 = iVar2 - *(int *)(*(longlong *)(param_1 + 0x38) + 0x18);
  }
LAB_00660c66:
  uVar6 = FUN_00660730(param_1,2);
  uVar7 = FUN_00660730(param_1,1);
  local_48 = iVar3;
  FUN_00423b80(local_38,uVar6,uVar7,iVar2);
  (**(code **)**(undefined8 **)(param_1 + 0x38))
            (*(undefined8 **)(param_1 + 0x38),*(undefined8 *)(param_1 + 8),local_38);
  FUN_0064d040(*(undefined8 *)(param_1 + 8),local_38);
  return;
}

