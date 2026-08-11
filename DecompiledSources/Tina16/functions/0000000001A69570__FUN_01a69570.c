/* Ghidra address: 01a69570 */
/* Ghidra symbol: FUN_01a69570 */


void FUN_01a69570(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  char *pcVar7;
  int iVar8;
  char local_278 [584];
  
  iVar8 = *(int *)(param_2 + 0x10);
  iVar5 = 0;
  if (-1 < iVar8 + -1) {
    do {
      lVar3 = FUN_004aeac0(param_2,iVar5);
      lVar1 = *(longlong *)(lVar3 + 8);
      puVar6 = (undefined8 *)(lVar1 + 0x68);
      pcVar7 = local_278;
      for (lVar4 = 0x48; cVar2 = local_278[0], lVar4 != 0; lVar4 = lVar4 + -1) {
        *(undefined8 *)pcVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        pcVar7 = pcVar7 + 8;
      }
      if (local_278[0] == '\0') {
        FUN_013ddd60(local_278,lVar1);
      }
      if (cVar2 == '\x01') {
        FUN_013de3f0(local_278,*(undefined8 *)(lVar3 + 8));
      }
      iVar5 = iVar5 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}

