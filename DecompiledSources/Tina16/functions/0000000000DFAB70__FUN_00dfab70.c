/* Ghidra address: 00dfab70 */
/* Ghidra symbol: FUN_00dfab70 */


void FUN_00dfab70(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  double *pdVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x548) != '\0') {
    iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0xdf0) + 0x10);
    uVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0xdf0);
        if (*(uint *)(lVar1 + 0x10) <= uVar5) {
          FUN_00594f90();
        }
        if (*(int *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar5 * 4) <
            *(int *)(param_1 + 0x308)) {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x428);
          iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
          if ((iVar4 == 0) &&
             ((*(longlong *)(param_1 + 0xe8) == 0 ||
              (*(char *)(*(longlong *)(param_1 + 0xe8) + 0x22b8) == '\0')))) {
            pdVar3 = *(double **)
                      (*(longlong *)(param_1 + 0x550) + -8 + (longlong)(int)(uVar5 + 1) * 8);
            *pdVar3 = *pdVar3 + 1.0;
          }
          else {
            pdVar3 = *(double **)
                      (*(longlong *)(param_1 + 0x550) + -8 + (longlong)(int)(uVar5 + 1) * 8);
            *pdVar3 = *pdVar3 + *(double *)(param_1 + 0x430);
          }
        }
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}

