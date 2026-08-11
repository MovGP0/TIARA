/* Ghidra address: 00bda210 */
/* Ghidra symbol: FUN_00bda210 */


void FUN_00bda210(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + -2;
    if (iVar1 < 0) {
      return;
    }
  } while ((*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)iVar1 * 8) !=
            param_2[1]) ||
          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)(iVar2 + -1) * 8)
           != *param_2));
  FUN_004ae870(*(longlong *)(param_1 + 8),iVar1);
  FUN_004ae870(*(undefined8 *)(param_1 + 8),iVar1);
  return;
}

