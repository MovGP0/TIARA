/* Ghidra address: 00dfb0b0 */
/* Ghidra symbol: FUN_00dfb0b0 */


void FUN_00dfb0b0(longlong param_1)

{
  longlong *plVar1;
  double *pdVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  plVar1 = (longlong *)(param_1 + 0x570);
  if (*(char *)(param_1 + 0x568) != '\0') {
    iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 1000) + 0x10);
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        piVar4 = (int *)FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 1000),iVar5);
        if ((piVar4[1] < *(int *)(param_1 + 0x308)) && (*piVar4 < *(int *)(param_1 + 0x308))) {
          iVar3 = iVar5 * 4;
          pdVar2 = *(double **)(*plVar1 + -8 + (longlong)(iVar3 + 1) * 8);
          *pdVar2 = *pdVar2 + 1.0;
          pdVar2 = *(double **)(*plVar1 + -8 + (longlong)(iVar3 + 2) * 8);
          *pdVar2 = *pdVar2 - 1.0;
          pdVar2 = *(double **)(*plVar1 + -8 + (longlong)(iVar3 + 3) * 8);
          *pdVar2 = *pdVar2 - 1.0;
          pdVar2 = *(double **)(*plVar1 + -8 + (longlong)(iVar3 + 4) * 8);
          *pdVar2 = *pdVar2 + 1.0;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}

