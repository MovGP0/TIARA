/* Ghidra address: 00c0a6b0 */
/* Ghidra symbol: FUN_00c0a6b0 */


void FUN_00c0a6b0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  int iVar7;
  char *pcVar8;
  undefined1 *puVar9;
  char local_3c [12];
  
  FUN_0040d200(local_3c,4,0);
  plVar1 = *(longlong **)(param_1 + 0x538);
  if ((plVar1 == (longlong *)0x0) || (iVar2 = (**(code **)(*plVar1 + 0x88))(plVar1), iVar2 < 1)) {
    lVar4 = FUN_00bf2c10(param_1);
    iVar2 = 4;
    pbVar6 = &DAT_01e9dd78;
    pcVar8 = local_3c;
    do {
      if ((*(byte *)(*(longlong *)(lVar4 + 0x18) + 0x31) & 3) == *pbVar6) {
        *pcVar8 = '\x01';
        break;
      }
      pcVar8 = pcVar8 + 1;
      pbVar6 = pbVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x88))();
    iVar7 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x90))
                          (*(longlong **)(param_1 + 0x538),iVar7);
        iVar3 = 4;
        pbVar6 = &DAT_01e9dd78;
        pcVar8 = local_3c;
        do {
          if ((*(byte *)(lVar4 + 0x28) & 3) == *pbVar6) {
            *pcVar8 = '\x01';
            break;
          }
          pcVar8 = pcVar8 + 1;
          pbVar6 = pbVar6 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0x52c) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  uVar5 = FUN_00bf2c10(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x620) + 0x50))(*(longlong **)(param_1 + 0x620),uVar5);
  iVar2 = 4;
  pcVar8 = local_3c;
  puVar9 = &DAT_01e9dd78;
  do {
    if (*pcVar8 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x620) + 0x58))
                (*(longlong **)(param_1 + 0x620),*puVar9);
      iVar7 = *(int *)(param_1 + 0x52c);
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x620) + 0x28))
                        (*(longlong **)(param_1 + 0x620));
      if (iVar3 < iVar7) {
        iVar3 = iVar7;
      }
      *(int *)(param_1 + 0x52c) = iVar3;
      iVar7 = *(int *)(param_1 + 0x4d4);
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x620) + 0x20))
                        (*(longlong **)(param_1 + 0x620));
      if (iVar3 < iVar7) {
        iVar3 = iVar7;
      }
      *(int *)(param_1 + 0x4d4) = iVar3;
    }
    puVar9 = puVar9 + 1;
    pcVar8 = pcVar8 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(int *)(param_1 + 0x52c) = *(int *)(param_1 + 0x52c) + *(int *)(param_1 + 0x5f0);
  return;
}

