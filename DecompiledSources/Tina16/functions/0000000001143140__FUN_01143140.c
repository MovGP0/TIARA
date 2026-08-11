/* Ghidra address: 01143140 */
/* Ghidra symbol: FUN_01143140 */


void FUN_01143140(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *in_stack_00000028;
  
  if ((*(byte *)(param_1 + 0x6a8) & 1) == 0) {
    if ((*(char *)(param_1 + 0x1055dd) == '\0') &&
       (iVar2 = FUN_0064d120(param_1), iVar2 == *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x9c))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *in_stack_00000028 = uVar1;
    return;
  }
  return;
}

