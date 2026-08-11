/* Ghidra address: 012b49a0 */
/* Ghidra symbol: FUN_012b49a0 */


void FUN_012b49a0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0x470) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      plVar3 = (longlong *)
               FUN_004aeac0(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0x470),iVar4);
      if (*plVar3 != 0) {
        lVar1 = *(longlong *)(param_1 + 8);
        iVar2 = FUN_01b07e10(lVar1,*plVar3);
        FUN_012b4370(*(undefined8 *)(param_1 + 8),
                     *(undefined8 *)(*(longlong *)(lVar1 + 0x2b0) + -8 + (longlong)iVar2 * 8),
                     (char)plVar3[1] + -1,*(char *)((longlong)plVar3 + 9) + -1);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

