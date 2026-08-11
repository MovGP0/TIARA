/* Ghidra address: 004bec80 */
/* Ghidra symbol: FUN_004bec80 */


void FUN_004bec80(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_3 != '\0') && (0 < param_2)) {
    lVar2 = 0;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + -8);
    }
    FUN_00409a70((*(longlong *)(param_1 + 0x10) + lVar2) - (longlong)param_2,
                 *(longlong *)(param_1 + 0x10),(longlong)param_2);
  }
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar1 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x10) + -8);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                    (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2,
                     iVar1 - param_2);
  *(longlong *)(param_1 + 0x28) = (longlong)iVar1;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    FUN_004b6d70();
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + (longlong)param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

