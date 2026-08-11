/* Ghidra address: 018c8b70 */
/* Ghidra symbol: FUN_018c8b70 */


void FUN_018c8b70(longlong param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x169) = 0;
  puVar2 = *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x38);
  iVar4 = (**(code **)*puVar2)(puVar2);
  if (iVar4 == *(int *)(param_1 + 0xcc)) {
    if (param_2 != '\0') {
      plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x38);
      (**(code **)(*plVar3 + 0x68))(plVar3,*(undefined4 *)(param_1 + 200));
    }
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x38);
    dVar6 = (double)(**(code **)(*plVar3 + 0xe0))(plVar3,0);
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 0x40);
    dVar7 = (double)(**(code **)(*plVar3 + 0x98))(plVar3);
    *(double *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x100) =
         (*(double *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x90) - dVar6) + dVar7;
    if (param_2 != '\0') {
      plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x38);
      uVar8 = (**(code **)(*plVar3 + 0xe0))(plVar3,0);
      *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x90) = uVar8;
    }
    *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x168) = 0;
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x228);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x1a8);
    *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x228) = 1;
    if (*(char *)(*(longlong *)(param_1 + 0xb0) + 0x244) == '\x01') {
      *(undefined4 *)(param_1 + 0xc4) = 1;
    }
    while ((*(int *)(param_1 + 0xc4) <= *(int *)(*(longlong *)(param_1 + 0xb0) + 0x240) ||
           ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x168) == '\0' &&
            (*(char *)(*(longlong *)(param_1 + 0xb0) + 0x244) == '\x02'))))) {
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x10) =
           *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x228);
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x14) =
           *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x22c);
      FUN_018ce4a0(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x40),
                   *(undefined8 *)(param_1 + 0xb0));
      *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
      piVar1 = (int *)(*(longlong *)(param_1 + 0xb8) + 0x228);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(param_1 + 0xb8) + 0x22c);
      *piVar1 = *piVar1 + 1;
    }
    if (param_2 != '\0') {
      plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x38);
      (**(code **)(*plVar3 + 0xa0))
                (plVar3,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x88)
                 ,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x90));
      uVar5 = FUN_0040c770(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x90));
      plVar3 = *(longlong **)
                (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x38) + 0x18);
      (**(code **)(*plVar3 + 0x58))(plVar3,*(undefined8 *)(param_1 + 0xa8),uVar5);
      uVar5 = FUN_0040c770(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x90));
      plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x38);
      (**(code **)(*plVar3 + 0xa8))(plVar3,*(undefined4 *)(param_1 + 0xa4),uVar5);
      plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x38);
      uVar8 = (**(code **)(*plVar3 + 0xe0))
                        (plVar3,*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x88));
      *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x90) = uVar8;
    }
    *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x40) + 0x100) = 0;
  }
  FUN_018cd940(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x40),
               *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x218),5);
  return;
}

