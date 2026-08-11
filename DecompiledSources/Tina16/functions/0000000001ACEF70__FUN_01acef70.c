/* Ghidra address: 01acef70 */
/* Ghidra symbol: FUN_01acef70 */


void FUN_01acef70(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x109) == '\0') {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x28))(*(longlong **)(param_1 + 0xe0));
    iVar5 = 1;
    if (0 < iVar2) {
      do {
        iVar6 = iVar5 + -1;
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                          (*(longlong **)(param_1 + 0xe0),iVar6);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01a5c280);
        if (cVar1 == '\0') {
          uVar3 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                            (*(longlong **)(param_1 + 0xe0),iVar6);
          plVar4 = (longlong *)FUN_004113f0(uVar3,&PTR_FUN_01d282a8);
          (**(code **)(*plVar4 + 0x70))(plVar4,*(undefined8 *)(param_1 + 0x80));
        }
        else {
          plVar4 = (longlong *)
                   (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                             (*(longlong **)(param_1 + 0xe0),iVar6);
          (**(code **)(*plVar4 + 0xd0))(plVar4);
          (**(code **)(*plVar4 + 0xd0))(plVar4);
          FUN_01d1b660(plVar4[0x12],*(undefined8 *)(param_1 + 0x80));
          FUN_01d1bfb0(plVar4[0x12],*(undefined8 *)(param_1 + 0x80));
          (**(code **)(*plVar4 + 0x70))(plVar4,*(undefined8 *)(param_1 + 0x80));
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined1 *)(param_1 + 0x109) = 1;
  }
  return;
}

