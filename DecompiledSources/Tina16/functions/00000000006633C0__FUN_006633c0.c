/* Ghidra address: 006633c0 */
/* Ghidra symbol: FUN_006633c0 */


void FUN_006633c0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_2 != 0) && (param_2 != 0)) &&
     (*(char *)(*(longlong *)(param_2 + 0x28) + 0x20) == *(char *)(param_1 + 0x68))) {
    iVar1 = FUN_00660cd0(param_2);
    uVar2 = FUN_0040c770((double)iVar1 * *(double *)(param_1 + 0x60));
    *(undefined4 *)(param_2 + 0x40) = uVar2;
  }
  return;
}

