/* Ghidra address: 00a248a0 */
/* Ghidra symbol: FUN_00a248a0 */


void FUN_00a248a0(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  char *pcVar8;
  longlong lVar9;
  
  FUN_00a24b00();
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_00a249a0(param_1,0x7f,7);
    *(undefined8 *)(param_1 + 0x30) = 0;
    puVar2 = *(undefined1 **)(param_1 + 0x20);
    *(undefined1 **)(param_1 + 0x20) = puVar2 + 1;
    *puVar2 = 0xff;
    plVar1 = (longlong *)(param_1 + 0x28);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x28);
      iVar7 = (*(code *)plVar1[3])();
      if (iVar7 == 0) {
        puVar3 = (undefined8 *)**(longlong **)(param_1 + 0x38);
        *(undefined4 *)(puVar3 + 5) = 0x18;
        (*(code *)*puVar3)();
      }
      pcVar8 = (char *)*plVar1;
      lVar5 = plVar1[1];
      *(char **)(param_1 + 0x20) = pcVar8;
      *(longlong *)(param_1 + 0x28) = lVar5;
    }
    else {
      pcVar8 = *(char **)(param_1 + 0x20);
    }
    *(char **)(param_1 + 0x20) = pcVar8 + 1;
    *pcVar8 = param_2 + -0x30;
    plVar1 = (longlong *)(param_1 + 0x28);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x38) + 0x28);
      iVar7 = (*(code *)puVar3[3])();
      if (iVar7 == 0) {
        puVar4 = (undefined8 *)**(longlong **)(param_1 + 0x38);
        *(undefined4 *)(puVar4 + 5) = 0x18;
        (*(code *)*puVar4)();
      }
      uVar6 = puVar3[1];
      *(undefined8 *)(param_1 + 0x20) = *puVar3;
      *(undefined8 *)(param_1 + 0x28) = uVar6;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x38);
  if (*(int *)(lVar5 + 0x19c) == 0) {
    if (0 < *(int *)(lVar5 + 0x144)) {
      lVar9 = 0;
      do {
        *(undefined4 *)(param_1 + 0x40 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(lVar5 + 0x144));
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x54) = 0;
  }
  return;
}

