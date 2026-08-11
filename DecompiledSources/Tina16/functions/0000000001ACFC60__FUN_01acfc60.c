/* Ghidra address: 01acfc60 */
/* Ghidra symbol: FUN_01acfc60 */


void FUN_01acfc60(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  double dVar7;
  
  if (*(byte *)(param_1 + 0xb0) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(param_1 + 0xb0) & 0x1f) &
            6U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    piVar1 = (int *)(param_1 + 0xa0);
    dVar7 = (double)FUN_01ae5d90(param_1);
    iVar2 = FUN_0040c840((double)(*(int *)(param_1 + 0xa8) - *piVar1) * dVar7);
    *(int *)(param_1 + 0x14) = iVar2 + *piVar1;
    dVar7 = (double)FUN_01ae5dc0(param_1);
    iVar2 = FUN_0040c840((double)(*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa4)) * dVar7);
    *(int *)(param_1 + 0x18) = iVar2 + *(int *)(param_1 + 0xa4);
    iVar2 = *(int *)(param_1 + 0xa8);
    dVar7 = (double)FUN_01ae5da0(param_1);
    iVar3 = FUN_0040c840((double)(iVar2 - *piVar1) * dVar7);
    *(int *)(param_1 + 0x1c) = iVar2 - iVar3;
    iVar2 = *(int *)(param_1 + 0xac);
    dVar7 = (double)FUN_01ae5dd0(param_1);
    iVar3 = FUN_0040c840((double)(iVar2 - *(int *)(param_1 + 0xa4)) * dVar7);
    *(int *)(param_1 + 0x20) = iVar2 - iVar3;
  }
  else {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_1 + 0xa8);
  }
  FUN_01ad06b0(param_1);
  FUN_01ad01b0(param_1);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  iVar3 = 1;
  if (0 < iVar2) {
    do {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),iVar3 + -1);
      uVar4 = FUN_004113f0(uVar4,&DAT_01cdd500);
      FUN_01ce4cd0(uVar4,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78));
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x28))(*(longlong **)(param_1 + 0xe0));
  iVar3 = 1;
  if (0 < iVar2) {
    do {
      plVar5 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                         (*(longlong **)(param_1 + 0xe0),iVar3 + -1);
      (**(code **)(*plVar5 + 0xe0))(plVar5);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  plVar5 = *(longlong **)(param_1 + 0xf0);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0xc0))(plVar5,*(undefined8 *)(param_1 + 0x80),0);
  }
  plVar5 = *(longlong **)(param_1 + 0xf8);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0xc0))(plVar5,*(undefined8 *)(param_1 + 0x80),0);
  }
  return;
}

