/* Ghidra address: 00dfadf0 */
/* Ghidra symbol: FUN_00dfadf0 */


void FUN_00dfadf0(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 1000);
  if (lVar1 != 0) {
    iVar4 = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310) + *(int *)(param_1 + 0x314);
    iVar5 = *(int *)(lVar1 + 0x10);
    iVar3 = 0;
    if (-1 < iVar5 + -1) {
      do {
        piVar2 = (int *)FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 1000),iVar3);
        if ((piVar2[1] < *(int *)(param_1 + 0x308)) && (*piVar2 < *(int *)(param_1 + 0x308))) {
          FUN_017dc8c0(*(undefined8 *)(param_1 + 0xd8),0,0x3ff0000000000000,piVar2[1],*piVar2,iVar4)
          ;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

