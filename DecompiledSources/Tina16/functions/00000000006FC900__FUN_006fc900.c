/* Ghidra address: 006fc900 */
/* Ghidra symbol: FUN_006fc900 */


void FUN_006fc900(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x4b0) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b0),iVar3);
      cVar1 = FUN_004113d0(uVar2,&PTR_FUN_006cb0d0);
      if (cVar1 != '\0') {
        FUN_006fc890(param_1,iVar3);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

