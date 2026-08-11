/* Ghidra address: 00a24b00 */
/* Ghidra symbol: FUN_00a24b00 */


void FUN_00a24b00(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar4 = *(int *)(param_1 + 0x54) >> 1;
    uVar6 = 0x20;
    if (uVar4 != 0) {
      uVar6 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> uVar6 == 0; uVar6 = uVar6 - 1) {
        }
      }
      uVar6 = uVar6 ^ 0x1f;
    }
    iVar8 = 0x20 - uVar6;
    if (0xe < iVar8) {
      puVar2 = (undefined8 *)**(longlong **)(param_1 + 0x38);
      *(undefined4 *)(puVar2 + 5) = 0x28;
      (*(code *)*puVar2)();
    }
    lVar5 = (longlong)iVar8 * 0x10;
    if (*(int *)(param_1 + 0x18) == 0) {
      lVar3 = *(longlong *)(param_1 + 0x70 + (longlong)*(int *)(param_1 + 0x50) * 8);
      FUN_00a249a0(param_1,*(undefined4 *)(lVar3 + (longlong)iVar8 * 0x40),
                   (int)*(char *)(lVar3 + 0x400 + lVar5));
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x90 + (longlong)*(int *)(param_1 + 0x50) * 8) +
                      (longlong)(int)lVar5 * 4);
      *piVar1 = *piVar1 + 1;
    }
    if (iVar8 != 0) {
      FUN_00a249a0(param_1,*(undefined4 *)(param_1 + 0x54),iVar8);
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
    iVar8 = *(int *)(param_1 + 0x58);
    if ((iVar8 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
      pcVar7 = *(char **)(param_1 + 0x60);
      do {
        FUN_00a249a0(param_1,(int)*pcVar7,1);
        pcVar7 = pcVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}

