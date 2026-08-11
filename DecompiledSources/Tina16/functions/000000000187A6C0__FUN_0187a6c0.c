/* Ghidra address: 0187a6c0 */
/* Ghidra symbol: FUN_0187a6c0 */


void FUN_0187a6c0(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != 0) {
    lVar2 = FUN_01951400(param_2);
    iVar5 = *(int *)(lVar2 + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar3 = FUN_004aeac0(lVar2,iVar4);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01925478);
        if (cVar1 != '\0') {
          FUN_0187a3f0(*(undefined8 *)(param_1 + 0x40),uVar3,param_3);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (*(longlong *)(param_2 + 0x1a8) != 0) {
      FUN_0187a6c0(param_1,*(longlong *)(param_2 + 0x1a8),param_3);
    }
  }
  return;
}

