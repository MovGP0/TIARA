/* Ghidra address: 010c9ea0 */
/* Ghidra symbol: FUN_010c9ea0 */


undefined2 FUN_010c9ea0(longlong param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  uVar1 = 0x20;
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
  }
  if (*(int *)(param_1 + 8) <= iVar2) {
    uVar1 = *(undefined2 *)
             (*(longlong *)(param_1 + 0x18) + -2 + (longlong)*(int *)(param_1 + 8) * 2);
  }
  return uVar1;
}

