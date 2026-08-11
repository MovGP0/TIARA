/* Ghidra address: 01ad1480 */
/* Ghidra symbol: FUN_01ad1480 */


void FUN_01ad1480(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  byte bVar6;
  
  bVar6 = 0;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  iVar5 = 1;
  if (0 < iVar3) {
    do {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),iVar5 + -1);
      uVar4 = FUN_004113f0(uVar4,&DAT_01cdd500);
      bVar2 = FUN_01ce6390(uVar4,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78));
      bVar6 = bVar6 | bVar2;
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (bVar6 != 0) {
    plVar1 = *(longlong **)(param_1 + 0xf0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x70))(plVar1,*(undefined8 *)(param_1 + 0x80));
    }
    plVar1 = *(longlong **)(param_1 + 0xf8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x70))(plVar1,*(undefined8 *)(param_1 + 0x80));
    }
  }
  return;
}

