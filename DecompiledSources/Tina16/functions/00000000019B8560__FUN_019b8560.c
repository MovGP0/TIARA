/* Ghidra address: 019b8560 */
/* Ghidra symbol: FUN_019b8560 */


void FUN_019b8560(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (*(char *)(param_1 + 0xb0) == '\0') {
    dVar4 = (double)FUN_019b9700(*(undefined8 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x45),
                                 param_1);
    iVar2 = 0;
    iVar3 = *(byte *)(param_1 + 0x45) + 1;
    do {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      dVar5 = (double)FUN_019b9700(uVar1,iVar2,param_1);
      FUN_019b6fb0(uVar1,dVar5 / dVar4,iVar2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    dVar5 = (double)FUN_019b9700(*(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x44),
                                 param_1);
    iVar2 = 0;
    iVar3 = *(byte *)(param_1 + 0x44) + 1;
    do {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      dVar6 = (double)FUN_019b9700(uVar1,iVar2,param_1);
      FUN_019b6fb0(uVar1,dVar6 / dVar5,iVar2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(double *)(param_1 + 0xa0) = dVar4 / dVar5;
  }
  else if (*(char *)(param_1 + 0xb0) == '\x01') {
    for (iVar2 = 0;
        (dVar4 = (double)FUN_019b9700(*(undefined8 *)(param_1 + 0x18),iVar2,param_1), dVar4 == 0.0
        && (iVar2 < (int)(uint)*(byte *)(param_1 + 0x45))); iVar2 = iVar2 + 1) {
    }
    dVar4 = (double)FUN_019b9700(*(undefined8 *)(param_1 + 0x18),iVar2,param_1);
    iVar2 = 0;
    iVar3 = *(byte *)(param_1 + 0x45) + 1;
    do {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      dVar5 = (double)FUN_019b9700(uVar1,iVar2,param_1);
      FUN_019b6fb0(uVar1,dVar5 / dVar4,iVar2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    for (iVar2 = 0;
        (dVar5 = (double)FUN_019b9700(*(undefined8 *)(param_1 + 0x20),iVar2,param_1), dVar5 == 0.0
        && (iVar2 < (int)(uint)*(byte *)(param_1 + 0x44))); iVar2 = iVar2 + 1) {
    }
    dVar5 = (double)FUN_019b9700(*(undefined8 *)(param_1 + 0x20),iVar2,param_1);
    iVar2 = 0;
    iVar3 = *(byte *)(param_1 + 0x44) + 1;
    do {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      dVar6 = (double)FUN_019b9700(uVar1,iVar2,param_1);
      FUN_019b6fb0(uVar1,dVar6 / dVar5,iVar2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(double *)(param_1 + 0xa0) = dVar4 / dVar5;
  }
  return;
}

