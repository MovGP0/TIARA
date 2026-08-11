/* Ghidra address: 01411850 */
/* Ghidra symbol: FUN_01411850 */


void FUN_01411850(longlong param_1)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*PTR_DAT_020039a8 == '\0') {
    cVar2 = FUN_00b0a890(*(undefined8 *)(param_1 + 0x6d0));
    *(char *)(param_1 + 0x7a8) = cVar2;
    if (cVar2 == '\0') {
      piVar1 = *(int **)(param_1 + 0x7a0);
      FUN_01408c30(*(undefined8 *)(param_1 + 0x808),*(undefined8 *)(param_1 + 0x7b8),
                   *(undefined4 *)(param_1 + 0x818));
      FUN_00409a70(*(undefined8 *)(param_1 + 0x7b8),*(undefined8 *)(piVar1 + 2),
                   (longlong)(*piVar1 * 4));
      FUN_014112e0(param_1,&local_60,&local_48);
      if (*(char *)(param_1 + 0x7a8) == '\0') {
        *(undefined8 *)(piVar1 + 0xe) = local_60;
        *(undefined8 *)(piVar1 + 0x10) = uStack_58;
        *(undefined8 *)(piVar1 + 0x12) = uStack_50;
        *(undefined8 *)(piVar1 + 6) = local_48;
        *(undefined8 *)(piVar1 + 8) = uStack_40;
        *(undefined8 *)(piVar1 + 10) = uStack_38;
        *(undefined8 *)(piVar1 + 0xc) = uStack_30;
        piVar1[4] = *(int *)(*(longlong *)(param_1 + 0x6d8) + 0x4a8);
      }
      if (*(char *)(param_1 + 0x7a8) == '\0') {
        FUN_0140ae60(*(undefined8 *)(param_1 + 0x790));
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))
                          (*(longlong **)(param_1 + 0x700));
        *(undefined1 *)(piVar1 + 0x14) = uVar3;
      }
    }
  }
  else {
    FUN_00b0a960(*(undefined8 *)(param_1 + 0x6d0));
    if (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x638) == 1) {
      *(undefined4 *)(param_1 + 0x508) = 1;
    }
  }
  return;
}

