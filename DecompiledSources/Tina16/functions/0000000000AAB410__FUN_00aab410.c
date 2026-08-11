/* Ghidra address: 00aab410 */
/* Ghidra symbol: FUN_00aab410 */


void FUN_00aab410(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    iVar5 = *(int *)(param_1 + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar2 = FUN_00aab7d0(param_1,iVar4);
        cVar1 = FUN_004113d0(uVar2,&PTR_FUN_00a8c408);
        if (cVar1 != '\0') {
          lVar3 = FUN_00aab7d0(param_1,iVar4);
          lVar3 = *(longlong *)(lVar3 + 0x80);
          if (*(char *)(lVar3 + 0x40) == '\0') {
            *(undefined1 *)(lVar3 + 0x40) = 1;
            *(undefined4 *)(lVar3 + 0x44) = *(undefined4 *)(param_1 + 0x34);
          }
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

