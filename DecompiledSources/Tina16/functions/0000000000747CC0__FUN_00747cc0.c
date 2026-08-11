/* Ghidra address: 00747cc0 */
/* Ghidra symbol: FUN_00747cc0 */


void FUN_00747cc0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x18);
      if (*plVar1 != 0) {
        FUN_007496c0(*plVar1,(int)plVar1[1],*(undefined4 *)((longlong)plVar1 + 0xc),(char)plVar1[2],
                     0);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

