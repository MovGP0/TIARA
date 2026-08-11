/* Ghidra address: 01aab810 */
/* Ghidra symbol: FUN_01aab810 */


byte FUN_01aab810(longlong param_1,undefined8 param_2,char *param_3)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  ushort *puVar5;
  byte bVar6;
  char cVar7;
  undefined2 *puVar8;
  char local_110 [224];
  
  bVar6 = 0;
  cVar7 = *(char *)(param_1 + 0x13898);
  if (cVar7 != '\0') {
    pcVar3 = (char *)(param_1 + 0x13a68);
    pcVar4 = local_110;
    pcVar2 = param_3;
    do {
      *pcVar4 = *pcVar2 != *pcVar3;
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
      pcVar2 = pcVar2 + 1;
      cVar7 = cVar7 + -1;
    } while (cVar7 != '\0');
  }
  cVar7 = *(char *)(param_1 + 0x13898);
  if (cVar7 != '\0') {
    pcVar4 = local_110;
    puVar5 = (ushort *)(param_1 + 0x1389a);
    pcVar3 = param_3;
    do {
      if (*pcVar4 != '\0') {
        *(char *)(param_1 + 0x14ad8 + (ulonglong)*puVar5) = *pcVar3;
      }
      puVar5 = puVar5 + 1;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
      cVar7 = cVar7 + -1;
    } while (cVar7 != '\0');
  }
  cVar7 = *(char *)(param_1 + 0x13898);
  if (cVar7 != '\0') {
    pcVar4 = local_110;
    puVar8 = (undefined2 *)(param_1 + 0x1389a);
    do {
      if (*pcVar4 != '\0') {
        bVar1 = FUN_01aab620(param_1,param_2,*puVar8);
        bVar6 = bVar6 | bVar1;
      }
      puVar8 = puVar8 + 1;
      pcVar4 = pcVar4 + 1;
      cVar7 = cVar7 + -1;
    } while (cVar7 != '\0');
  }
  cVar7 = *(char *)(param_1 + 0x13898);
  if (cVar7 != '\0') {
    pcVar4 = (char *)(param_1 + 0x13a68);
    do {
      *pcVar4 = *param_3;
      pcVar4 = pcVar4 + 1;
      param_3 = param_3 + 1;
      cVar7 = cVar7 + -1;
    } while (cVar7 != '\0');
  }
  return bVar6;
}

