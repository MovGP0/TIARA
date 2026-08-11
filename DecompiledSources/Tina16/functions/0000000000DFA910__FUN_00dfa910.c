/* Ghidra address: 00dfa910 */
/* Ghidra symbol: FUN_00dfa910 */


void FUN_00dfa910(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0xdf0);
  if ((lVar2 != 0) && (*(double *)(param_1 + 0x450) == 0.0)) {
    iVar6 = *(int *)(lVar2 + 0x10);
    uVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0xdf0);
        if (*(uint *)(lVar2 + 0x10) <= uVar5) {
          FUN_00594f90();
        }
        iVar1 = *(int *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar5 * 4);
        if (iVar1 < *(int *)(param_1 + 0x308)) {
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x428);
          iVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
          if ((iVar4 == 0) &&
             ((*(longlong *)(param_1 + 0xe8) == 0 ||
              (*(char *)(*(longlong *)(param_1 + 0xe8) + 0x22b8) == '\0')))) {
            FUN_017dc850(*(undefined8 *)(param_1 + 0xd8),0,0x3ff0000000000000,iVar1,iVar1);
          }
          else {
            FUN_017dc850(*(undefined8 *)(param_1 + 0xd8),0,*(undefined8 *)(param_1 + 0x430),iVar1,
                         iVar1);
          }
        }
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}

