/* Ghidra address: 016381a0 */
/* Ghidra symbol: FUN_016381a0 */


void FUN_016381a0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x70),iVar5);
      cVar2 = FUN_0161ad70(uVar4);
      if (cVar2 != '\0') {
        uVar3 = FUN_0161ad90(uVar4);
        cVar2 = FUN_01612b00(uVar1,uVar3);
        if (cVar2 == '\0') {
          FUN_01612b50(uVar1,uVar3);
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

