/* Ghidra address: 01aceb90 */
/* Ghidra symbol: FUN_01aceb90 */


void FUN_01aceb90(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x1c)) &&
     (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x20))) {
    if ((char)param_2 != '\0') {
      FUN_01d2dc30(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x14),
                   *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                   *(undefined4 *)(param_1 + 0x20),0xffffff);
    }
    if (*(char *)(param_1 + 0xb0) == '\x01') {
      FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x80),0xffffff);
      FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x80),0);
      FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x78),0);
      FUN_005fd670(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x78),0);
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0xf8))
                (*(longlong **)(param_1 + 0x80),*(undefined4 *)(param_1 + 0xa0),
                 *(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8),
                 *(undefined4 *)(param_1 + 0xac));
    }
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
    iVar4 = 1;
    if (0 < iVar1) {
      do {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                          (*(longlong **)(param_1 + 0xd8),iVar4 + -1);
        uVar2 = FUN_004113f0(uVar2,&DAT_01cdd500);
        FUN_01ce0100(uVar2,*(undefined8 *)(param_1 + 0x80),param_2);
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x28))(*(longlong **)(param_1 + 0xe0));
    iVar4 = 1;
    if (0 < iVar1) {
      do {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                          (*(longlong **)(param_1 + 0xe0),iVar4 + -1);
        plVar3 = (longlong *)FUN_004113f0(uVar2,&PTR_FUN_01d282a8);
        (**(code **)(*plVar3 + 0x70))(plVar3,*(undefined8 *)(param_1 + 0x80));
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if (*(char *)(param_1 + 0xb0) == '\x01') {
      (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x70))
                (*(longlong **)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x80));
      (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x70))
                (*(longlong **)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x80));
      (**(code **)(**(longlong **)(param_1 + 200) + 0x70))
                (*(longlong **)(param_1 + 200),*(undefined8 *)(param_1 + 0x80));
      (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x70))
                (*(longlong **)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0x80));
    }
    plVar3 = *(longlong **)(param_1 + 0xf0);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x70))(plVar3,*(undefined8 *)(param_1 + 0x80));
    }
    plVar3 = *(longlong **)(param_1 + 0xf8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x70))(plVar3,*(undefined8 *)(param_1 + 0x80));
    }
  }
  return;
}

