/* Ghidra address: 006dab70 */
/* Ghidra symbol: FUN_006dab70 */


void FUN_006dab70(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  FUN_0065a000(param_1);
  cVar1 = FUN_0065be20();
  if (cVar1 != '\0') {
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x490) + 0x10) + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar2 = FUN_006da380(*(undefined8 *)(param_1 + 0x490),iVar4);
        if (*(char *)(lVar2 + 0x35) != '\0') {
          uVar3 = FUN_006da380(*(undefined8 *)(param_1 + 0x490),iVar4);
          FUN_006d9f10(uVar3);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

